/* 
 * File:   arrSPadre.h
 * Author: luisd
 *
 * Created on 25 de septiembre de 2017, 09:11 PM
 */

#ifndef ARRSPADRE_H
#define ARRSPADRE_H

typedef int nodo;
static int ndoNull = 0;

struct casilla{
    int etiqueta;
    int padre;  
};

class arrSPadre {
public:
    arrSPadre();
    ~arrSPadre();

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

    //EFE: Pone la raíz al árbol con la etiqueta e.    
    //REQ: A inicializado.
    //MOD: El árbol A.
    void ponerRaiz(int etq);

    //EFE: Agrega un hijo al nodo n, con la etiqueta e.    
    //REQ: A no vacío, y n existente.
    //MOD: El árbol A.
    casilla agregarHijo(int e, nodo n);

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
    int cantidadnodos;
    int ultLleno;
    casilla a[20];
};

#endif /* ARRSPADRE_H */