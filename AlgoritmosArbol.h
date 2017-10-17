/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AlgoritmosArbol.h
 * Author: Jimmy
 *
 * Created on 15 de octubre de 2017, 11:06 PM
 */

#ifndef ALGORITMOSARBOL_H
#define ALGORITMOSARBOL_H

#include "Arbol/hijoIzqHD1.h"
#include "Arbol/listaHijos.h"

//#include "Arbol/arrSPadre.h"
//#include "Arbol/hijoIzqHD1.h"
//#include "Arbol/hijoIzqHD2.h"
//#include "Arbol/hijoIzqHD3.h"
#include "Arbol/listaHijos.h"
//#include "Cola/arrCircular.h"

#include "Arbol/NodoLH.h"

//typedef arrSPadre arbol
//typedef hijoIzqHD1 arbol;
//typedef hijoIzqHD2 arbol;
//typedef hijoIzqHD3 arbol;
typedef listaHijos Arbol;


typedef NodoLH *nodo;

class AlgoritmosArbol {
public:
    AlgoritmosArbol();
    AlgoritmosArbol(const AlgoritmosArbol& orig);
    virtual ~AlgoritmosArbol();
    
    //EFE: Devuelve el hermano izquierdo del nodo n.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    NodoLH* hermanoIzq(Arbol* A, nodo n);
    
    //EFE: Devuelve verdadero si el arbol tiene etiquetas repetidas, falso en caso contrario.
    //REQ: Arbol inicializado.
    //MOD:
    bool etiquetasRepetidas(Arbol* A);
    
    //EFE: Devuelve la cantidad de niveles del arbol por analisis por Niveles.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    int numNivelesPorNiveles(Arbol* A, nodo raiz);
    
    //EFE: Devuelve la cantidad de niveles del arbol por analisis en Preorden.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    int numNivelesxPreOrden(Arbol* A, nodo raiz);
    
    //EFE: Imprime en consola una lista con las etiquetas de los nodos por analisis en Preorden.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    void listarPreOrden(Arbol* A, nodo raiz);
    
    
private:

};

#endif /* ALGORITMOSARBOL_H */

