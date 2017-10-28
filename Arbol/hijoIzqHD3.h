/* 
 * File:   hijoIzqHD3.h
 * Author: Isaac
 *
 * Created on 27 de septiembre de 2017, 11:03 PM
 */

#ifndef HIJOIZQHD3_H
#define HIJOIZQHD3_H

#include "nodoHD3.h"
class hijoIzqHD3 {
    
    typedef nodoHD3 *nodo;
    
public:
    hijoIzqHD3();
    virtual ~hijoIzqHD3();

    //EFE: Inicia un árbol(A) vacío.    
    //REQ:
    //MOD:
    void iniciar();

    //EFE: Destruye el árbol(A), lo deja inutilizable.    
    //REQ:
    //MOD:
    void destruir();

    //EFE: Destruye el árbol(A) de manera recursiva, lo deja inutilizable.    
    //REQ:
    //MOD:
    void destruirRe(nodo n);

    //EFE: Vacia A, se puede volver a utilizar.    
    //REQ: A inicializado, no vacío.
    //MOD: El árbol A.
    void vaciar();

    //EFE: Retorna verdadero si A esta vacío.    
    //REQ: A inicializado.
    //MOD:
    bool vacia();

    //EFE: Pone la raíz al árbol con la etiqueta e.    
    //REQ: A inicializado.
    //MOD: El árbol A.
    void ponerRaiz(int etiqueta);

    //EFE: Agrega un hijo al nodo n, con la etiqueta e.    
    //REQ: A no vacío, y n existente.
    //MOD: El árbol A.
    nodo agregarHijo(int e, int posicion, nodo n);

    //EFE: Elimina el n de A.    
    //REQ: Que n exista en el árbol. A no vacío.
    //MOD: El árbol A.
    void borrarHoja(nodo n);

    //EFE: Busca n y cambia su etiqueta por e.    
    //REQ: A no vacío y n valido.
    //MOD: Cambia la etiqueta de n por e.
    void modEtiqueta(nodo n, int e);

    //EFE: Retorna un nodo con la raiz A.    
    //REQ: A no vacío
    //MOD: 
    nodo raiz();

    //EFE: Busca el padre de N.    
    //REQ: A no vacío y válido.
    //MOD:
    nodo padre(nodo n);

    //EFE: Retorna el hijo que está más  a la izquierda de n.    
    //REQ: A inicializado, no vacío y n válido.
    //MOD:
    nodo hijoMasIzquierdo(nodo n);

    //EFE: Retorna al hermano derecho inmediato de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    nodo hermanoDerecho(nodo n);

    //EFE: Retorna la etiqueta de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    int etiqueta(nodo n);

    //EFE: Retorna el número de nodos.    
    //REQ: A inicializado y un contador.
    //MOD: 
    int numnodos();

    //EFE: Retorna la cantidad de hijos de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    int numHijos(nodo n);

private:
    
    int cantidadnodos = 0;
    nodo raizA;

   };

#endif /* HIJOIZQHD3_H */