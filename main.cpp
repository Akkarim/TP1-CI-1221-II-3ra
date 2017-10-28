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
    nodo ndo, nh;
    AlgoritmosArbol algos;
    Arbol a;
    a.ponerRaiz(1);
    ndo = a.raiz();
    
    int tam = 5000000; // Define el tamaño del árbol.
    
    
    //Arbol lista
    for (int i = 1; i<= tam; i++){
        ndo = a.agregarHijo(i, 1, ndo);
    }
    
    clock_t iStart, iStop;
    
    iStart = clock();
    algos.copiarArbol(&a);
    iStop = clock();
    double secs = ((double)iStop-(double)iStart)/CLOCKS_PER_SEC;
    cout<< "Time = "<< secs << " " << "Para " << tam << endl;
    
    return 0;
}

