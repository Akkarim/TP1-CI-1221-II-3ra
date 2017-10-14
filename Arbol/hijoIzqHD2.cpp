/* 
 * File:   hijoIzqHD2.cpp
 * Author: luisd
 * 
 * Created on 25 de septiembre de 2017, 09:20 PM
 */

#include "hijoIzqHD2.h"

Nodo* hijoIzqHD2::nodoNulo = nullptr;

hijoIzqHD2::hijoIzqHD2() {
}

hijoIzqHD2::~hijoIzqHD2() {
    
}

void hijoIzqHD2::iniciar() {
    raizA = nodoNulo;
}

void hijoIzqHD2::destruir() {
    if (raizA) {
        destruirRe(raizA);
        delete this;    
    }
}

void hijoIzqHD2::destruirRe(Nodo* n) {
    Nodo* nh = n->hijoMI;
    Nodo* aux;
    while (nh){
        aux = nh->hD;
        destruirRe(nh);
        nh = aux;
        
//        nh = nh->hD;
    }
    delete n;
}

void hijoIzqHD2::vaciar() {
    destruirRe(raizA);
    raizA = nodoNulo;
    cantidadNodos = 0;
}

bool hijoIzqHD2::vacia() {
    bool estaVacia = false;
    if (!raizA)
        estaVacia = true;
    return estaVacia;
}

void hijoIzqHD2::ponerRaiz(int etiqueta) {
    raizA = new Nodo(etiqueta);
    cantidadNodos++;
}

Nodo* hijoIzqHD2::agregarHijo(int etiqueta, int posicion, Nodo* n) {
    Nodo* nuevoNodo = new Nodo(etiqueta);
    cantidadNodos++;
    Nodo* iterador = n->hijoMI;
    if (posicion == 1) {
        nuevoNodo->hD = iterador;
        n->hijoMI = nuevoNodo;
        if (nuevoNodo->hD == nodoNulo) {
            nuevoNodo->ultimo = true;
            nuevoNodo->padre = n;
        }
    } else {
        for (int count = 1; count < (posicion - 1); count++)
            iterador = iterador->hD;
//        if(iterador->hD){
        nuevoNodo->hD = iterador->hD;
        iterador->hD = nuevoNodo;
//        } else if(!iterador->hD)
  //          iterador->hD = nuevoNodo;
        if (!nuevoNodo->hD) {
            nuevoNodo->ultimo = true;
            nuevoNodo->padre = n;
            iterador->ultimo = false;
            iterador->padre = nodoNulo;
        }
    }
    return nuevoNodo;
}

void hijoIzqHD2::borrarHoja(Nodo* n) {
    Nodo *iterador = padre(n);
    if (iterador->hijoMI == n && !n->hD) {
        iterador->hijoMI = nodoNulo;
        delete n;
    } else if (iterador->hijoMI == n && n->hD) {
        iterador->hijoMI = n->hD;
        delete n;
    } else if (n->ultimo) {
        iterador = iterador->hijoMI;
        while (!iterador->hD->ultimo)
            iterador = iterador->hD;
        iterador->hD = nodoNulo;
        iterador->ultimo = true;
        iterador->padre = n->padre;
        delete n;
    } else {
        iterador = iterador->hijoMI;
        while (iterador->hD != n)
            iterador = iterador->hD;
        iterador->hD = n->hD;
        delete n;
    }
    cantidadNodos--;
}

void hijoIzqHD2::modEtiqueta(Nodo* n, int e) {
    n->etiqueta = e;
}

Nodo* hijoIzqHD2::raiz() {
    return this->raizA;
}

Nodo* hijoIzqHD2::padre(Nodo* n) {
    Nodo *iterador = n;
    while (!iterador->ultimo) {
        iterador = iterador->hD;
    }
    iterador = iterador->padre;
    return iterador;
}

Nodo* hijoIzqHD2::hijoMasIzquierdo(Nodo* n) {
    return n->hijoMI;
}

Nodo* hijoIzqHD2::hermanoDerecho(Nodo* n) {
    return n->hD;
}

int hijoIzqHD2::etiqueta(Nodo* n) {
    return n->etiqueta;
}

int hijoIzqHD2::numNodos() {
    return cantidadNodos;
}

int hijoIzqHD2::numHijos(Nodo* n) {
    int cantidadHijos = 0;
    Nodo *iterador = n->hijoMI;
    while (iterador) {
        cantidadHijos++;
        iterador = iterador->hD;
    }
}