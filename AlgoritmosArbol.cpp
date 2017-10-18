/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AlgoritmosArbol.cpp
 * Author: Jimmy
 * 
 * Created on 15 de octubre de 2017, 11:07 PM
 */
#include <iostream>
#include "AlgoritmosArbol.h"

using namespace std;

AlgoritmosArbol::AlgoritmosArbol() {
    numNiveles = 0;
}

AlgoritmosArbol::AlgoritmosArbol(const AlgoritmosArbol& orig) {
}

AlgoritmosArbol::~AlgoritmosArbol() {
}

nodo AlgoritmosArbol::hermanoIzq(Arbol* a, nodo n) {
    nodo padr = a->padre(n);
    nodo hIzq = a->hijoMasIzquierdo(padr);
    if (hIzq != n) {
        while (a->hermanoDerecho(hIzq) != n && a->hermanoDerecho(hIzq) != 0) {
            hIzq = a->hermanoDerecho(hIzq);
        }
        if (a->hermanoDerecho(hIzq) == n) {
            return hIzq;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

bool AlgoritmosArbol::etiquetasRepetidas(Arbol* A) {
}

int AlgoritmosArbol::numNivelesPorNiveles(Arbol* A, nodo n) {
}

int AlgoritmosArbol::numNivelesxPreOrden(Arbol* A, nodo raiz) {
    if (A->hijoMasIzquierdo(raiz) != 0) {
        nodo nh = A->hijoMasIzquierdo(raiz);
        numNiveles++;
        while (nh != 0) {
            numNivelesxPreOrden(A, nh);
            nh = A->hermanoDerecho(nh);

        }
    }
    return numNiveles;
}


int AlgoritmosArbol::profundidad(Arbol* A, nodo n) { // Lo recorre desde el nodo n hasta la raíz

    int contador = 0;
    if (n != A->raiz()) {
        nodo nh = n; // Nodo hijo
        while (nh != A->raiz()) {
            nh = A->padre(nh);
            contador++;
        }
    }
    return contador;
}


void AlgoritmosArbol::etiquetasNivel(Arbol* A, int nivel) {

}

void AlgoritmosArbol::etiquetasHijos(Arbol* A, nodo n) {
    nodo nh = A->hijoMasIzquierdo(n);
    while (nh != 0) {
        cout << A->etiqueta(nh) << "->";
        nh = A->hermanoDerecho(nh);
    }
}

void AlgoritmosArbol::borrarSubarbol(Arbol* A, nodo padre) {
}

void AlgoritmosArbol::copiarArbol(Arbol* A) {
}

bool AlgoritmosArbol::arbolesIguales(Arbol* A, Arbol* B) {
    bool resultado = true;
    Cola cola1;
    Cola cola2;
    nodo nodo1;
    nodo nodo2;
    if ((A->raiz() && !B->raiz()) || (!A->raiz() && B->raiz()))
        resultado = false;
    else if(A->raiz() && B->raiz()){
        if (A->etiqueta(A->raiz()) != B->etiqueta(B->raiz()))
            resultado = false;
        else{
            cola1.iniciar();
            cola2.iniciar();
            nodo1 = A->raiz();
            nodo2 = A->raiz();
            cola1.encolar(nodo1->etiqueta);
            cola2.encolar(nodo2->etiqueta);
            while (resultado && !cola1.vacia()){
                
            }
        }
    }
    return resultado;
}

void AlgoritmosArbol::listarPreOrden(Arbol* A, nodo raiz) {
    cout << A->etiqueta(raiz) << "->";
    if (A->hijoMasIzquierdo(raiz) != 0) {
        nodo nh = A->hijoMasIzquierdo(raiz);
        while (nh != 0) {
            listarPreOrden(A, nh);
            nh = A->hermanoDerecho(nh);
        }
    }
}

void AlgoritmosArbol::listarPostOrden(Arbol* A, nodo raiz) {
}

void AlgoritmosArbol::listarPorNiveles(Arbol* A, nodo raiz) {
}

nodo AlgoritmosArbol::buscarEtiqueta(Arbol* A, int e) {
    nodo encontrado = 0;
    if (!A->vacia()) {
        encontrado = buscarRecursivo(A, A->raiz(), e);
    }
    return encontrado;
}

nodo AlgoritmosArbol::buscarRecursivo(Arbol* A, nodo raiz, int e) {
    nodo resultado = 0;
    if (raiz->etiqueta == e) {
        resultado = raiz;
    } else {
        nodo nh = A->hijoMasIzquierdo(raiz);
        while (nh != 0) {
            resultado = buscarRecursivo(A, nh, e);
            nh = A->hermanoDerecho(nh);
        }
    }
    return resultado;
}