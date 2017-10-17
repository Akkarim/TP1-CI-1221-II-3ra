/* 
 * File:   hijoIzqHD3.cpp
 * Author: Isaac
 * 
 * Created on 27 de septiembre de 2017, 11:03 PM
 */

#include "hijoIzqHD3.h"

Nodo* hijoIzqHD3::nodoNulo = 0;

hijoIzqHD3::hijoIzqHD3(){
}

hijoIzqHD3::~hijoIzqHD3(){
}

void hijoIzqHD3::iniciar(){
    raizA = nodoNulo;
}

void hijoIzqHD3::destruir(){
    if(!vacia()){
        destruirRe(raizA);
        delete this;
    }
}

void hijoIzqHD3::destruirRe(Nodo* n){
    Nodo* nh = n->hijoMI;
    Nodo* aux;
    while (nh){
        aux = nh->hD;
        destruirRe(nh);
        nh = aux;
    }
    delete n;
}

void hijoIzqHD3::vaciar(){
    destruirRe(raizA);
    raizA = nodoNulo;
    cantidadNodos = 0;
}

bool hijoIzqHD3::vacia(){
    bool estaVacia = false;
    if(!raizA)
        estaVacia = true;
    return estaVacia;
}

void hijoIzqHD3::ponerRaiz(int etiqueta){
    raizA = new Nodo(etiqueta);
    cantidadNodos++;
}

Nodo* hijoIzqHD3::agregarHijo(int e, int posicion, Nodo* n){
    Nodo* nuevoNodo = new Nodo(e);
    cantidadNodos++;
    nuevoNodo->padre = n;
    if(posicion == 1){
        nuevoNodo->hD = n->hijoMI;
        n->hijoMI = nuevoNodo;
        if(nuevoNodo->hD)
            nuevoNodo->hD->hI = nuevoNodo;
    }else{
        Nodo* iterador = n->hijoMI;
        for(int count = 1; count < (posicion-1); count++)
            iterador = iterador->hD;
        nuevoNodo->hD = iterador->hD;
        iterador->hD = nuevoNodo;
        if(nuevoNodo->hD)
            nuevoNodo->hD->hI = nuevoNodo;
    }
    return nuevoNodo;
}

void hijoIzqHD3::borrarHoja(Nodo* n){
    Nodo *iterador;
    if(!n->hD && !n->hI){
        iterador = n->padre;
        iterador->hijoMI = nodoNulo;
        delete n;
    }else if(n->hD && !n->hI){
        n->padre->hijoMI = n->hD;
        n->hD->hI = nodoNulo;
        delete n;
    }else {
        n->hI->hD = n->hD;
        n->hD->hI = n->hI;
        delete n;
    }
    cantidadNodos--;
}

void hijoIzqHD3::modEtiqueta(Nodo* n, int e){
    n->etiqueta = e;
}

Nodo* hijoIzqHD3::raiz(){
    return raizA;
}

Nodo* hijoIzqHD3::padre(Nodo* n){
    return n->padre;
}

Nodo* hijoIzqHD3::hijoMasIzquierdo(Nodo* n){
    return n->hijoMI;
}

Nodo* hijoIzqHD3::hermanoDerecho(Nodo* n){
    return n->hD;
}

int hijoIzqHD3::etiqueta(Nodo* n){
    return n->etiqueta;
}

int hijoIzqHD3::numNodos(){
    return cantidadNodos;
}

int hijoIzqHD3::numHijos(Nodo* n){
    int cantidadHijos = 0;
    Nodo *iterador = n->hijoMI;
    while (iterador) {
        cantidadHijos++;
        iterador = iterador->hD;
    }
}