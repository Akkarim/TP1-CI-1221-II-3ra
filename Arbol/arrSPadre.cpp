/* 
 * File:   arrSPadre.cpp
 * Author: luisd
 * 
 * Created on 25 de septiembre de 2017, 09:11 PM
 */

#include "arrSPadre.h"

arrSPadre::arrSPadre() {
}

arrSPadre::~arrSPadre() {
}

void arrSPadre::iniciar() {
    this->ultLleno = 0;
    this->cantidadNodos = 0;
}

void arrSPadre::destruir() {
}

void arrSPadre::vaciar() {
    this->ultLleno = 0;
    this->cantidadNodos = 0;
}

bool arrSPadre::vacia() {
    return this->cantidadNodos != 0;
}

void arrSPadre::ponerRaiz(int etq) {
    a[0].etiqueta = etq;
    a[0].padre = -1;
    this->cantidadNodos++;
    ndoNull++;
}

casilla arrSPadre::agregarHijo(int e, Nodo n) {
    a[this->ultLleno + 1].etiqueta = e;
    a[this->ultLleno + 1].padre = n;
    this->cantidadNodos++;
    this->ultLleno++;
    ndoNull++;
    return a[n];
}

void arrSPadre::borrarHoja(Nodo n) {
    int buscador = n;
    bool esHoja = true;
    while (buscador < this->ultLleno) {
        if (a[buscador + 1].padre == buscador) {
            esHoja = false;
        }
        ++buscador;
    }
    if (esHoja) {
        while (n < this->ultLleno) {
            a[n].etiqueta = a[n + 1].etiqueta;
            a[n].padre = a[n + 1].padre;
        }
        this->cantidadNodos--;
        this->ultLleno--;
        ndoNull--;
    }
}

void arrSPadre::modEtiqueta(Nodo n, int e) { // O(1)
    a[n].etiqueta = e;
}

Nodo arrSPadre::raiz() {
    return this->a[0].etiqueta;
}

Nodo arrSPadre::padre(Nodo n) {
    int father = a[n].padre;
    return father;
}

Nodo arrSPadre::hijoMasIzquierdo(Nodo n) {
    int buscador = n + 1;
    while (buscador <= this->ultLleno) {
        if (a[n].padre == n) {
            return buscador;
        }
        buscador++;
    }
    return ndoNull;
}

Nodo arrSPadre::hermanoDerecho(Nodo n) {
    int i = n + 1;
    while (i <= this->ultLleno) {
        if (a[i].padre == a[n].padre) {
            return i;
        }
        i++;
    }
    return ndoNull;
}

int arrSPadre::etiqueta(Nodo n) {
    return a[n].etiqueta;
}

int arrSPadre::numNodos() {
    return this->cantidadNodos;
}

int arrSPadre::numHijos(Nodo n) {
    int buscador, i, contador = 0;
    buscador = this->hijoMasIzquierdo(n);
    i = buscador;
    while(a[buscador].padre == a[i].padre){
        contador++;
        i++;
    }
    return contador;
}