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

bool AlgoritmosArbol::etiquetasRepetidas(Arbol* A){
}

int AlgoritmosArbol::numNivelesPorNiveles(Arbol* A, nodo n){ 
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

int AlgoritmosArbol::profundidad(Arbol* A, nodo n){    // Lo recorre desde el nodo n hasta la raíz
    int contador = 0;
    if (n != A->raiz()){
        nodo nh = n; // Nodo hijo
        while (nh != A->raiz()){
            nh = A->padre(nh);
            contador++;
        }
    }
    return contador;
}

void AlgoritmosArbol::etiquetasNivel(Arbol* A, int nivel){
}

void AlgoritmosArbol::etiquetasHijos(Arbol* A, nodo padre){
}

void AlgoritmosArbol::borrarSubarbol(Arbol* A, nodo padre){
}

void AlgoritmosArbol::copiarArbol(Arbol* A){
}

bool AlgoritmosArbol::arbolesIguales(Arbol* A, Arbol* B){
}

void AlgoritmosArbol::listarPreOrden(Arbol* A, nodo raiz) {
    if (!A->vacia()) {
        cout << A->etiqueta(raiz) << "->";
        if (A->hijoMasIzquierdo(raiz) != 0) {
            listarPreOrden(A, A->hijoMasIzquierdo(raiz));
        }
        else if (A->hermanoDerecho(A->hijoMasIzquierdo(raiz)) != 0) {
            listarPreOrden(A, A->hermanoDerecho(A->hijoMasIzquierdo(raiz)));
        }
    }
}

void AlgoritmosArbol::listarPostOrden(Arbol* A, nodo raiz){
}

void AlgoritmosArbol::listarPorNiveles(Arbol* A, nodo raiz){
}

nodo AlgoritmosArbol::buscarEtiqueta(Arbol* A, int e){
}