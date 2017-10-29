/* 
 * File:   main.cpp
 * Author: luisd
 *
 * Created on 14 de octubre de 2017, 03:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
#include <time.h>


//#include "Arbol/hijoIzqHD1.h"
#include "Arbol/hijoIzqHD3.h"
#include "Cola/arrCircular.h"
#include "AlgoritmosArbol.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    clock_t aStart, aStop, oStart, oStop;
    float secs;
    float secsOP;

    nodo ndo, nh;
    AlgoritmosArbol algos;
    Arbol a;
    a.ponerRaiz(1);
    ndo = a.raiz();

    int tam = 35000; // Define el tamaño del árbol.

    //Arbol lista
    /*for (int i = 1; i <= tam; i++) {
    ndo = a.agregarHijo(i, 1, ndo);  
}*/

    // Arbol con 2 niveles y "tam" cantidad de hijos para la raíz
    float acm1pt = 0;
    for (int i = 1; i <= tam; i++){    
        nh = a.agregarHijo(i, i, a.raiz());
        oStart = clock();
        a.padre(nh);
        oStop = clock();
        acm1pt += ((float) oStop - (float) oStart) / CLOCKS_PER_SEC;
    }

    aStart = clock();
    algos.listarPreOrden(&a, a.raiz());
    aStop = clock();

    secs = ((float) aStop - (float) aStart) / CLOCKS_PER_SEC;
    secsOP = ((float) oStop - (float) oStart) / CLOCKS_PER_SEC;


    cout << "Time algo = " << secs << " " << "Para " << tam << endl;
    cout << "Time OP = " << acm1pt << " " << "Para " << tam << endl;

    return 0;
}

