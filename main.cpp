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
    nodo ndo, nh;
    AlgoritmosArbol algos;
    Arbol a;
    a.ponerRaiz(1);
    ndo = a.raiz();
    
    int tam = 3; // Define el tamaño del árbol.
    
    
    //Arbol lista
    for (int i = 2; i<= tam; i++){
        ndo = a.agregarHijo(i, i-1, ndo);
    }
    
    clock_t iStart, iStop;
    iStart = clock();
    algos.copiarArbol(&a);
    iStop = clock();
    float secs = ((float)iStop-(float)iStart)/CLOCKS_PER_SEC;
    cout<< "Time = "<< secs << "Para " << tam << endl;
    
    return 0;
}

