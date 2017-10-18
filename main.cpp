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
//#include "Arbol/listaHijos.h"
#include "Arbol/hijoIzqHD1.h"


#include "AlgoritmosArbol.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    hijoIzqHD1 a;
    //listaHijos a;
    a.iniciar();
    a.ponerRaiz(8);
    a.agregarHijo(3, 1, a.raiz());
    a.agregarHijo(10, 2, a.raiz());
    a.agregarHijo(13, 3, a.raiz());
    a.agregarHijo(1, 1, a.hijoMasIzquierdo(a.raiz()));
    a.agregarHijo(6, 2, a.hijoMasIzquierdo(a.raiz()));
    a.agregarHijo(4, 1, a.hermanoDerecho(a.hijoMasIzquierdo(a.hijoMasIzquierdo(a.raiz()))));
    a.agregarHijo(7, 2, a.hermanoDerecho(a.hijoMasIzquierdo(a.hijoMasIzquierdo(a.raiz()))));
    a.agregarHijo(14,1,a.hermanoDerecho(a.hijoMasIzquierdo(a.raiz())));
    
    //cout << a.etiqueta(a.hermanoDerecho(a.hijoMasIzquierdo(a.raiz())));


    AlgoritmosArbol alg;
    //cout << a.etiqueta(alg.hermanoIzq(&a, a.hermanoDerecho(a.hermanoDerecho(a.hijoMasIzquierdo(a.raiz())))));
    //cout << alg.numNivelesxPreOrden(&a,a.raiz());
    //alg.listarPreOrden(&a, a.raiz());
    nodo n = alg.buscarEtiqueta(&a, 3);
    //alg.listarHijos(&a,a.hijoMasIzquierdo(a.raiz()));


    return 0;
}

