/* 
 * File:   hijoIzqHD3.cpp
 * Author: Isaac
 * 
 * Created on 27 de septiembre de 2017, 11:03 PM
 */

#include "hijoIzqHD3.h"

hijoIzqHD3::hijoIzqHD3(){
    
    cantidadnodos = 0;
}

hijoIzqHD3::~hijoIzqHD3(){
}

void hijoIzqHD3::iniciar(){
    raizA = 0;
}

void hijoIzqHD3::destruir(){
    if(!vacia()){
        destruirRe(raizA);
        delete this;
    }
}

void hijoIzqHD3::destruirRe(nodo n){
    nodo nh = n->hijoMI;
    nodo aux;
    while (nh){
        aux = nh->hD;
        destruirRe(nh);
        nh = aux;
    }
    delete n;
}

void hijoIzqHD3::vaciar(){
    destruirRe(raizA);
    raizA = 0;
    cantidadnodos = 0;
}

bool hijoIzqHD3::vacia(){
    bool estaVacia = false;
    if(!raizA)
        estaVacia = true;
    return estaVacia;
}

void hijoIzqHD3::ponerRaiz(int etiqueta){
    raizA = new nodoHD3(etiqueta);
    cantidadnodos++;
}

hijoIzqHD3::nodo hijoIzqHD3::agregarHijo(int e, int posicion, nodo n){
    nodo nuevonodo = new nodoHD3(e);
    cantidadnodos++;
    nuevonodo->padre = n;
    if(posicion == 1){
        nuevonodo->hD = n->hijoMI;
        n->hijoMI = nuevonodo;
        if(nuevonodo->hD)
            nuevonodo->hD->hI = nuevonodo;
    }else{
        nodo iterador = n->hijoMI;
        for(int count = 1; count < (posicion-1); count++)
            iterador = iterador->hD;
        nuevonodo->hD = iterador->hD;
        iterador->hD = nuevonodo;
        if(nuevonodo->hD)
            nuevonodo->hD->hI = nuevonodo;
    }
    return nuevonodo;
}

void hijoIzqHD3::borrarHoja(nodo n){
    nodo iterador;
    if(!n->hD && !n->hI){
        iterador = n->padre;
        iterador->hijoMI = 0;
        delete n;
    }else if(n->hD && !n->hI){
        n->padre->hijoMI = n->hD;
        n->hD->hI = 0;
        delete n;
    }else {
        n->hI->hD = n->hD;
        n->hD->hI = n->hI;
        delete n;
    }
    cantidadnodos--;
}

void hijoIzqHD3::modEtiqueta(nodo n, int e){
    n->etiqueta = e;
}

hijoIzqHD3::nodo hijoIzqHD3::raiz(){
    return raizA;
}

hijoIzqHD3::nodo hijoIzqHD3::padre(nodo n){
    return n->padre;
}

hijoIzqHD3::nodo hijoIzqHD3::hijoMasIzquierdo(nodo n){
    return n->hijoMI;
}

hijoIzqHD3::nodo hijoIzqHD3::hermanoDerecho(nodo n){
    return n->hD;
}

int hijoIzqHD3::etiqueta(nodo n){
    return n->etiqueta;
}

int hijoIzqHD3::numnodos(){
    return cantidadnodos;
}

int hijoIzqHD3::numHijos(nodo n){
    int cantidadHijos = 0;
    nodo iterador = n->hijoMI;
    while (iterador) {
        cantidadHijos++;
        iterador = iterador->hD;
    }
}