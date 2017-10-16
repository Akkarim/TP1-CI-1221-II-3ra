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
}

AlgoritmosArbol::AlgoritmosArbol(const AlgoritmosArbol& orig) {
}

AlgoritmosArbol::~AlgoritmosArbol() {
}

NodoLH* AlgoritmosArbol::hermanoIzq(Arbol* a, nodo n) {
    NodoLH *padr = new NodoLH();
    padr = a->padre(n);
    NodoLH *hIzq = a->hijoMasIzquierdo(padr);
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

int AlgoritmosArbol::numNivelesxPreOrden(Arbol* A, nodo raiz) {
    //    int contador = 0;
    //    if(!A->vacia()){
    //        nodo n = raiz;
    //        contador++;
    //        nodo nh = A->hijoMasIzquierdo(n);
    //        while(nh != 0){
    //            contador++;
    //            nh = A->hermanoDerecho(nh);
    //            numNivelesxPreOrden(A, nh);
    //        }
    //    }
    //    return contador++;
}

void AlgoritmosArbol::listarPreOrden(Arbol* A, nodo raiz) {
    if (!A->vacia()) {
        cout << A->etiqueta(raiz) << "->";
        if (A->hijoMasIzquierdo(raiz) != 0) {
            listarPreOrden(A, A->hijoMasIzquierdo(raiz));
        }
        if (A->hermanoDerecho(A->hijoMasIzquierdo(raiz)) != 0) {
            listarPreOrden(A, A->hermanoDerecho(A->hijoMasIzquierdo(raiz)));
        }
    }
}




