/* 
 * File:   hijoIzqHD1.cpp
 * Author: luisd
 * 
 * Created on 25 de septiembre de 2017, 09:14 PM
 */

#include "hijoIzqHD1.h"

hijoIzqHD1::hijoIzqHD1() {
}

hijoIzqHD1::~hijoIzqHD1() {
}

void hijoIzqHD1::iniciar() {
    primero = new Nodo();
    cantidadNodos = 0;

}

void hijoIzqHD1::destruir() {
    delete this;
}

void hijoIzqHD1::vaciar() {
    Nodo *inicio = primero;
    vaciarRecursivo(inicio);
    cantidadNodos = 0;
}

void hijoIzqHD1::vaciarRecursivo(Nodo* n) {
    if (n->hijos != 0) {
        Nodo *iterador = n->hijoIzq;
        Nodo *aux = new Nodo();
        while (iterador != 0) {
            if (iterador->hermanoDer != 0) {
                aux = iterador->hermanoDer;
                delete iterador;
                iterador = aux;
            } else{
                delete iterador;
                return;
            }
        }
        Nodo *nh = n->hijoIzq;
        while (nh != 0) {
            vaciarRecursivo(n);
            nh = nh->hermanoDer;
        }
    }
}

bool hijoIzqHD1::vacia() {
    if (cantidadNodos == 0) {
        return true;
    }
    return false;
}

Nodo* hijoIzqHD1::agregarHijo(int e, int i, Nodo* n) {
    Nodo *temp = new Nodo(e);
    if (i == 1) {
        if (n->hijoIzq != 0) {
            temp->hermanoDer = n->hijoIzq;
            n->hijoIzq = temp;
        } else {
            n->hijoIzq = temp;
        }
    } else {
        int contador = 1;
        Nodo *iterador = n->hijoIzq;
        while (contador < i && iterador->hermanoDer != 0) {
            iterador = iterador->hermanoDer;
            contador++;
        }
        temp->hermanoDer = iterador->hermanoDer;
        iterador->hermanoDer = temp;
    }

    n->hijos++;
    cantidadNodos++;
    return temp;
}

void hijoIzqHD1::borrarHoja(Nodo* n) {
    //Recorrido en preOrden para encontrar al padre
    Nodo *padre = preOrden(primero, n);
    Nodo *iterador = padre->hijoIzq;
    if (iterador->etiqueta == n->etiqueta) {
        padre->hijoIzq = iterador->hermanoDer;
        delete iterador;
    } else {
        while (iterador->hermanoDer->etiqueta != n->etiqueta) {
            iterador = iterador->hermanoDer;
        }
        iterador->hermanoDer = iterador->hermanoDer->hermanoDer;

    }
    delete n;
    padre->hijos--;
}

void hijoIzqHD1::modEtiqueta(Nodo* n, int e) {
    n->etiqueta = e;
}

Nodo* hijoIzqHD1::raiz() {
    return primero;
}

void hijoIzqHD1::ponerRaiz(int e) {
    Nodo *temp = new Nodo(e);
    primero = temp;
    cantidadNodos++;
}

Nodo* hijoIzqHD1::padre(Nodo* n) {
    Nodo *temp = primero;
    return preOrden(temp, n);
}

Nodo* hijoIzqHD1::hijoMasIzquierdo(Nodo* n) {
    return n->hijoIzq;
}

Nodo* hijoIzqHD1::hermanoDerecho(Nodo* n) {
    return n->hermanoDer;
}

int hijoIzqHD1::etiqueta(Nodo* n) {
    return n->etiqueta;
}

int hijoIzqHD1::numNodos() {
    return cantidadNodos;
}

int hijoIzqHD1::numHijos(Nodo* n) {
    return n->hijos;
}

Nodo* hijoIzqHD1::traductor(int e) {
    Nodo *temp = new Nodo(e);
    return temp;
}

Nodo* hijoIzqHD1::preOrden(Nodo* inicio, Nodo* n) {
    if (inicio->hijos != 0) {
        Nodo *iterador = inicio->hijoIzq;
        while (iterador != 0) {
            if (iterador->etiqueta == n->etiqueta) {
                return inicio;
            } else {
                iterador = iterador->hermanoDer;
            }
        }
        Nodo *nh = inicio->hijoIzq;
        while (nh != 0) {
            preOrden(nh, n);
            nh = nh->hermanoDer;
        }
    }
}