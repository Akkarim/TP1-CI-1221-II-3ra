/* 
 * File:   hijoIzqHD2.h
 * Author: luisd
 *
 * Created on 25 de septiembre de 2017, 09:20 PM
 */

#ifndef HIJOIZQHD2_H
#define HIJOIZQHD2_H

struct Nodo {

    Nodo() {
    };
    Nodo(int etiquetaR) : etiqueta(etiquetaR) {
    }
    ~Nodo() {
    };
    int etiqueta;
    bool ultimo = false;
    Nodo *padre = nullptr;
    Nodo *hijoMI = nullptr;
    Nodo *hD = nullptr;
};

class hijoIzqHD2 {
public:
    hijoIzqHD2();
    virtual ~hijoIzqHD2();

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
    void destruirRe(Nodo* n);
    
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
    Nodo* agregarHijo(int etiqueta, int posicion, Nodo* n);

    //EFE: Elimina el n de A.    
    //REQ: Que n exista en el árbol. A no vacío.
    //MOD: El árbol A.
    void borrarHoja(Nodo* n);

    //EFE: Busca n y cambia su etiqueta por e.    
    //REQ: A no vacío y n valido.
    //MOD: Cambia la etiqueta de n por e.
    void modEtiqueta(Nodo* n, int e);

    //EFE: Retorna un nodo con la raiz A.    
    //REQ: A no vacío
    //MOD: 
    Nodo* raiz();

    //EFE: Busca el padre de N.    
    //REQ: A no vacío y válido.
    //MOD:
    Nodo* padre(Nodo* n);

    //EFE: Retorna el hijo que está más  a la izquierda de n.    
    //REQ: A inicializado, no vacío y n válido.
    //MOD:
    Nodo* hijoMasIzquierdo(Nodo* n);

    //EFE: Retorna al hermano derecho inmediato de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    Nodo* hermanoDerecho(Nodo* n);

    //EFE: Retorna la etiqueta de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    int etiqueta(Nodo* n);

    //EFE: Retorna el número de nodos.    
    //REQ: A inicializado y un contador.
    //MOD: 
    int numNodos();

    //EFE: Retorna la cantidad de hijos de n.    
    //REQ: A no vacío, inicializado y n válido.
    //MOD:
    int numHijos(Nodo* n);

private:
    static Nodo *nodoNulo;
    int cantidadNodos = 0;
    Nodo *raizA;
};

#endif /* HIJOIZQHD2_H */