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
#include "Cola/arrCircular.h"

#include "Arbol/NodoLH.h"

//typedef arrSPadre arbol
//typedef hijoIzqHD1 arbol;
//typedef hijoIzqHD2 arbol;
//typedef hijoIzqHD3 arbol;
typedef listaHijos Arbol;

typedef arrCircular Cola;

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
    
    //EFE: Devuelve la distancia del nodo n hacia la raiz.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    int profundidad(Arbol* A, nodo n);
    
    //EFE: Imprime en consola una lista con las etiquetas del i-ésimo nivel del arbol.
    //REQ: Arbol inicializado con mínimo n(int nivel) niveles.
    //MOD:
    void etiquetasNivel(Arbol* A, int nivel);
    
    //EFE: Imprime en consola una lista con las etiquetas de los hijos del nodo n.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    void etiquetasHijos(Arbol* A, nodo padre);
    
    //EFE: Borra los nodos hijos a partir de un nodo padre.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD: El Arbol.
    void borrarSubarbol(Arbol* A, nodo padre);
    
    //EFE: Crea un nuevo arbol identico al arbol A.
    //REQ: Arbol inicializado.
    //MOD: El nuevo arbol.
    void copiarArbol(Arbol* A);
    
    //EFE: Retorna verdadero si los dos arboles son iguales y false en caso contrario.
    //REQ: Arbol A y B inicializados.
    //MOD:
    bool arbolesIguales(Arbol* A, Arbol* B);
    
    //EFE: Imprime en consola una lista con las etiquetas de los nodos del arbol por analisis en Preorden.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    void listarPreOrden(Arbol* A, nodo raiz);
    
    //EFE: Imprime en consola una lista con las etiquetas de los nodos del arbol por analizis en Postorden.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    void listarPostOrden(Arbol* A, nodo raiz);
    
    //EFE: Imprime en consola una lista con las etiquetas de los nodos del arbol por analizis por niveles usando la Cola.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    void listarPorNiveles(Arbol* A, nodo raiz);
    
    //EFE: Devuelve el nodo con la etiqueta e.
    //REQ: Arbol inicializado.
    //MOD:
    nodo buscarEtiqueta(Arbol* A, int e);
    
private:

};

#endif /* ALGORITMOSARBOL_H */

