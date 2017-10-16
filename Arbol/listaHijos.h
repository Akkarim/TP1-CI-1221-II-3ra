/* 
 * File:   listaHijos.h
 * Author: Jimmy
 *
 * Created on 9 de octubre de 2017, 12:29 PM
 */

#ifndef LISTAHIJOS_H
#define LISTAHIJOS_H

#include "NodoLH.h"

class listaHijos {
    
    typedef NodoLH *nodo;

public:
    listaHijos();
    listaHijos(const listaHijos& orig);
    virtual ~listaHijos();

    //EFE: Inicia un árbol(A) vacío.    
    //REQ:
    //MOD:
    void iniciar();

    //EFE: Destruye el árbol(A), lo deja inutilizable.    
    //REQ:
    //MOD:
    void destruir();

    //EFE: Vacia A, se puede volver a utilizar.    
    //REQ: A inicializado, no vacío.
    //MOD: El árbol A.
    void vaciar();

    //EFE: Retorna verdadero si A esta vacío.    
    //REQ: A inicializado.
    //MOD:
    bool vacia();

    //EFE: Agrega un hijo al nodo n, con la etiqueta e.    
    //REQ: A no vacío, y n existente.
    //MOD: El árbol A.
    nodo agregarHijo(int e, int i, nodo);

    //EFE: Elimina el n de A.    
    //REQ: Que n exista en el árbol. A no vacío.
    //MOD: El árbol A.
    void borrarHoja(nodo);

    //EFE: Busca n y cambia su etiqueta por e.    
    //REQ: A no vacío y n valido.
    //MOD: Cambia la etiqueta de n por e.
    void modEtiqueta(nodo, int e);

    //EFE: Pone la raíz al árbol con la etiqueta e.    
    //REQ: A inicializado.
    //MOD: El árbol A.
    void ponerRaiz(int e);

    //EFE: Retorna un nodo con la raiz A.    
    //REQ: A no vacío
    //MOD: 
    nodo raiz();

    //EFE: Busca el padre de N.    
    //REQ: A no vacío y válido.
    //MOD:
    nodo padre(nodo);

    //EFE: Retorna el hijo que está más  a la izquierda de n.    
    //REQ: A inicializado, no vacío y n válido.
    //MOD:
    nodo hijoMasIzquierdo(nodo);

    //EFE: Retorna al hermano derecho inmediato de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    nodo hermanoDerecho(nodo);

    //EFE: Retorna la etiqueta de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    int etiqueta(nodo);

    //EFE: Retorna el número de nodos.    
    //REQ: A inicializado y un contador.
    //MOD: 
    int numNodos();

    //EFE: Retorna la cantidad de hijos de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    int numHijos(nodo);

    void Listar();

    nodo traductor(int e);

    void ListarHijos(nodo n);

private:
    nodo primero;
    int cantidadNodos;
    
};

#endif /* LISTAHIJOS_H */
