/* 
 * File:   main.cpp
 * Author: luisd
 *
 * Created on 14 de octubre de 2017, 03:45 PM
 */

#include <cstdlib>
#include <iostream>
//#include "Arbol/listaHijos.h"
//#include "Arbol/hijoIzqHD1.h"

#include "Cola/arrCircular.h"
#include "AlgoritmosArbol.h"
//#include "AlgoritmosArbol.h"
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
    a.agregarHijo(7,1,a.hermanoDerecho(a.hijoMasIzquierdo(a.raiz())));
     AlgoritmosArbol alg;
    bool x = alg.etiquetasRepetidas(&a);
    cout << x;
    
    
    return 0;
}

