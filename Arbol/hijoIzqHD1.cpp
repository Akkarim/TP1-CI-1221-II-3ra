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
    primero = new NodohIHD1();
    cantidadNodos = 0;

}

void hijoIzqHD1::destruir() {
    delete this;
}

void hijoIzqHD1::vaciar() {
    nodo inicio = primero;
    vaciarRecursivo(inicio);
    cantidadNodos = 0;
}

void hijoIzqHD1::vaciarRecursivo(nodo n) {
    if (n->hijos != 0) {
        nodo iterador = n->hijoIzq;
        nodo aux = new NodohIHD1();
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
        nodo nh = n->hijoIzq;
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

hijoIzqHD1::nodo hijoIzqHD1::agregarHijo(int e, int i, nodo n) {
    nodo temp = new NodohIHD1(e);
    if (i == 1) {
        if (n->hijoIzq != 0) {
            temp->hermanoDer = n->hijoIzq;
            n->hijoIzq = temp;
        } else {
            n->hijoIzq = temp;
        }
    } else {
        int contador = 1;
        nodo iterador = n->hijoIzq;
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

void hijoIzqHD1::borrarHoja(nodo n) {
    //Recorrido en preOrden para encontrar al padre
    nodo padre = preOrden(primero, n);
    nodo iterador = padre->hijoIzq;
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

void hijoIzqHD1::modEtiqueta(nodo n, int e) {
    n->etiqueta = e;
}

hijoIzqHD1::nodo hijoIzqHD1::raiz() {
    return primero;
}

void hijoIzqHD1::ponerRaiz(int e) {
    nodo temp = new NodohIHD1(e);
    primero = temp;
    cantidadNodos++;
}

hijoIzqHD1::nodo hijoIzqHD1::padre(nodo n) {
    nodo temp = primero;
    return preOrden(temp, n);
}

hijoIzqHD1::nodo hijoIzqHD1::hijoMasIzquierdo(nodo n) {
    return n->hijoIzq;
}

hijoIzqHD1::nodo hijoIzqHD1::hermanoDerecho(nodo n) {
    return n->hermanoDer;
}

int hijoIzqHD1::etiqueta(nodo n) {
    return n->etiqueta;
}

int hijoIzqHD1::numNodos() {
    return cantidadNodos;
}

int hijoIzqHD1::numHijos(nodo n) {
    return n->hijos;
}

hijoIzqHD1::nodo hijoIzqHD1::traductor(int e) {
    nodo temp = new NodohIHD1(e);
    return temp;
}

hijoIzqHD1::nodo hijoIzqHD1::preOrden(nodo inicio, nodo n) {
    if (inicio->hijos != 0) {
        nodo iterador = inicio->hijoIzq;
        while (iterador != 0) {
            if (iterador->etiqueta == n->etiqueta) {
                return inicio;
            } else {
                iterador = iterador->hermanoDer;
            }
        }
        nodo nh = inicio->hijoIzq;
        while (nh != 0) {
            preOrden(nh, n);
            nh = nh->hermanoDer;
        }
    }
}