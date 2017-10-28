/* 
 * File:   main.cpp
 * Author: luisd
 *
 * Created on 14 de octubre de 2017, 03:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
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
    vector<nodo> vectorDatos;
    vectorDatos.reserve(1000);
    hijoIzqHD1 a;
    a.iniciar();
    a.ponerRaiz(8);
    a.agregarHijo(3, 1, a.raiz());
    a.agregarHijo(10, 2, a.raiz());
    a.agregarHijo(13, 3, a.raiz());
    a.agregarHijo(1, 1, a.hijoMasIzquierdo(a.raiz()));
    a.agregarHijo(6, 2, a.hijoMasIzquierdo(a.raiz()));
    a.agregarHijo(4, 1, a.hermanoDerecho(a.hijoMasIzquierdo(a.hijoMasIzquierdo(a.raiz()))));
    a.agregarHijo(7, 2, a.hermanoDerecho(a.hijoMasIzquierdo(a.hijoMasIzquierdo(a.raiz()))));
    a.agregarHijo(14, 1, a.hermanoDerecho(a.hijoMasIzquierdo(a.raiz())));
    
    hijoIzqHD1 b;
    b.ponerRaiz(8);
    b.agregarHijo(3, 1, a.raiz());
    b.agregarHijo(10, 2, a.raiz());
    b.agregarHijo(13, 3, a.raiz());
    b.agregarHijo(1, 1, a.hijoMasIzquierdo(a.raiz()));
    b.agregarHijo(6, 2, a.hijoMasIzquierdo(a.raiz()));
    b.agregarHijo(4, 1, a.hermanoDerecho(a.hijoMasIzquierdo(a.hijoMasIzquierdo(a.raiz()))));
    b.agregarHijo(7, 2, a.hermanoDerecho(a.hijoMasIzquierdo(a.hijoMasIzquierdo(a.raiz()))));

    AlgoritmosArbol alg;
    //a.hijoMasIzquierdo(a.hijoMasIzquierdo(a.raiz()));
    //cout << alg.numNivelesxPreOrden(&a,a.raiz());
    //alg.listarPreOrden(&a, a.raiz());
    //nodo n = alg.buscarEtiqueta(&a, 3);
    //alg.listarHijos(&a,a.hijoMasIzquierdo(a.raiz()));
    //alg.listarPorNiveles(&a);
    //cout << alg.numNivelesPorNiveles(&a);
    //alg.etiquetasNivel(&a,3);
    //cout << alg.profundidad(&a,a.hijoMasIzquierdo(a.hijoMasIzquierdo(a.raiz())));
    //alg.copiarArbol(&a);
    bool iguales = alg.arbolesIguales(&a,&b);
    //alg.borrarSubarbol(&a, a.hijoMasIzquierdo(a.padre()));
    bool rep = alg.etiquetasRepetidas(&a);
    
    return 0;
}

//EFE: Llena el arbol.
//REQ: Arbol inicializado y nodo contenido en el arbol.
//MOD: El arbol.
void LlenarArbol(Arbol arbol, nodo padre, int cantidadNodos, int etiquetas, vector<nodo> vectorDatos){
    for(int i = 1; i <= cantidadNodos; i++){
        vectorDatos[etiquetas-1] = arbol.agregarHijo(etiquetas, i, padre);
        etiquetas++;
    }
}
