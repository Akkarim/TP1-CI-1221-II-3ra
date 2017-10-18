/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: luisd
 *
 * Created on 14 de octubre de 2017, 03:45 PM
 */

#include <cstdlib>
#include <iostream>
#include "Arbol/listaHijos.h"
#include "AlgoritmosArbol.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    listaHijos a;
    a.iniciar();
    a.ponerRaiz(3);
    a.agregarHijo(1,1,a.raiz());
    a.agregarHijo(9,2,a.raiz());
    a.agregarHijo(11,3,a.raiz());
    
    AlgoritmosArbol alg;
    //cout << a.etiqueta(alg.hermanoIzq(&a, a.hermanoDerecho(a.hermanoDerecho(a.hijoMasIzquierdo(a.raiz())))));
    //alg.numNivelesxPreOrden(&a,a.raiz());
    //alg.listarPreOrden(&a,a.raiz());
    int x = alg.profundidad(&a, a.hijoMasIzquierdo(a.raiz()));
    cout << x;

    return 0;
}

