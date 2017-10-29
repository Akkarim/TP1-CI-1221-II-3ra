/* 
 * File:   AlgoritmosArbol.h
 * Author: Jimmy
 *
 * Created on 15 de octubre de 2017, 11:06 PM
 */

#ifndef ALGORITMOSARBOL_H
#define ALGORITMOSARBOL_H

#include <iostream>
#include <array>
#include <iterator>


#include "Arbol/hijoIzqHD1.h"
//#include "Arbol/hijoIzqHD3.h"
#include "Cola/arrCircular.h"


#include "Arbol/NodohIHD1.h"
//#include "Arbol/nodoHD3.h"

typedef hijoIzqHD1 Arbol;
//typedef hijoIzqHD3 Arbol;

typedef NodohIHD1 *nodo;
//typedef nodoHD3 *nodo;

typedef arrCircular<nodo> Cola;
typedef arrCircular<int> colaI;


class AlgoritmosArbol {
public:
    AlgoritmosArbol();
    AlgoritmosArbol(const AlgoritmosArbol& orig);
    virtual ~AlgoritmosArbol();
    
    //EFE: Devuelve el hermano izquierdo del nodo n.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD:
    nodo hermanoIzq(Arbol* A, nodo n);
    
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
    void etiquetasHijos(Arbol* A, nodo n);
    
    //EFE: Borra los nodos hijos a partir de un nodo padre.
    //REQ: Arbol inicializado y nodo contenido en el arbol.
    //MOD: El Arbol :v.
    void borrarSubarbol(Arbol* A, nodo n);
    
    //EFE: Crea un nuevo arbol identico al arbol A.
    //REQ: Arbol inicializado.
    //MOD: El nuevo arbol.
    void copiarArbol(Arbol* A);
    Arbol copiarRecursivo(Arbol* A, nodo raizA, Arbol B, nodo raizB);
    
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
    nodo buscarRecursivo(Arbol* A, nodo, int e);
    int numNiveles;
};

#endif /* ALGORITMOSARBOL_H */

