/* 
 * File:   listaHijos.cpp
 * Author: Jimmy
 * 
 * Created on 9 de octubre de 2017, 12:29 PM
 */

#include <iostream>
#include "listaHijos.h"
using namespace std;

listaHijos::listaHijos() {
}

listaHijos::listaHijos(const listaHijos& orig) {
}

listaHijos::~listaHijos() {
}

void listaHijos::iniciar() {
    primero = new NodoLH();
    cantidadNodos = 0;
}

void listaHijos::destruir() {
    nodo temp = primero;
    nodo aux = new NodoLH();
    nodo aux2 = new NodoLH();

    while (temp != 0) {
        nodo hijo = temp->sig;
        while (hijo != 0) {
            aux = hijo->sig;
            delete hijo;
            hijo = aux;
        }
        aux2 = temp->inferior;
        delete temp;
        temp = aux2;
    }
    delete aux;
    delete aux2;
    delete temp;
    delete primero;
}

void listaHijos::vaciar() {
    nodo temp = primero;
    nodo aux = new NodoLH();
    nodo aux2 = new NodoLH();

    while (temp != 0) {
        nodo hijo = temp->sig;
        while (hijo != 0) {
            aux = hijo->sig;
            delete hijo;
            hijo = aux;
        }
        aux2 = temp->inferior;
        delete temp;
        temp = aux2;
    }
    delete aux;
    delete aux2;
    delete temp;
    primero = 0;
    cantidadNodos = 0;

}

bool listaHijos::vacia() {
    if (primero == 0) {
        return true;
    } else {
        return false;
    }
}

listaHijos::nodo listaHijos::agregarHijo(int e, int i, nodo n) {
    nodo temp = new NodoLH(e);
    temp->inferior = primero->inferior;
    primero->inferior = temp;
    cantidadNodos++;

    nodo aux = new NodoLH();
    aux->inferior = temp;

    nodo iter = n->sig;
    if (i == 1) {
        aux->sig = iter;
        n->sig = aux;
    } else {
        int contador = 1;
        while (contador < i && iter->sig != 0) {
            iter = iter->sig;
            contador++;
        }
        aux->sig = iter->sig;
        iter->sig = aux;
    }
    n->cantidadHijos++;
    return temp;
}

void listaHijos::borrarHoja(nodo n) {
    //Eliminar de la lista de hijos del padre
    nodo temp = primero;
    bool eliminado = false;
    while (temp != 0 && !eliminado) {
        nodo hijo = temp->sig;
        while (hijo != 0 && !eliminado) {
            if (hijo->inferior == n) {
                hijo->inferior = 0;
                eliminado = true;
                temp->cantidadHijos--;
                //eliminar el nodo
                nodo iter = temp->sig;
                if (iter == hijo) {
                    temp->sig = hijo->sig;
                } else {
                    while (iter->sig != hijo) {
                        iter = iter->sig;
                    }
                    iter->sig = hijo->sig;
                }
                delete hijo;

            } else {
                hijo = hijo->sig;
            }
        }
        temp = temp->inferior;
    }
    //eliminar de la lista principal
    nodo aux = primero;
    while (aux->inferior != n && aux != 0) {
        aux = aux->inferior;
    }
    if (aux->inferior == n) {
        aux->inferior = n->inferior;
        cantidadNodos--;
    }
    delete n;

}

void listaHijos::ponerRaiz(int e) {
    primero->etiqueta = e;
    cantidadNodos++;

}

listaHijos::nodo listaHijos::raiz() {
    return primero;
}

listaHijos::nodo listaHijos::padre(nodo n) {
    nodo temp = primero;
    while (temp != 0) {
        nodo hijo = temp->sig;
        while (hijo != 0) {
            if (hijo->inferior == n) {
                return temp;
            } else {
                hijo = hijo->sig;
            }
        }
        temp = temp->inferior;
    }
}

listaHijos::nodo listaHijos::hijoMasIzquierdo(nodo n) {
    return n->sig->inferior;
}

listaHijos::nodo listaHijos::hermanoDerecho(nodo n) {
    nodo temp = primero;
    while (temp != 0) {
        nodo hijo = temp->sig;
        while (hijo != 0) {
            if (hijo->inferior == n) {
                return hijo->sig->inferior;
            } else {
                hijo = hijo->sig;
            }
        }
        temp = temp->inferior;
    }
}

int listaHijos::etiqueta(nodo n) {
    return n->etiqueta;
}

void listaHijos::modEtiqueta(nodo n, int e) {
    n->etiqueta = e;
}

int listaHijos::numHijos(nodo n) {
    return n->cantidadHijos;
}

int listaHijos::numNodos() {
    return cantidadNodos;
}

listaHijos::nodo listaHijos::traductor(int e) {

}

void listaHijos::Listar() {
    nodo temp = primero;
    while (temp != 0) {
        cout << temp->etiqueta << "->";
        temp = temp->inferior;
    }
    cout << "NULL" << endl;

}

void listaHijos::ListarHijos(nodo n) {
    nodo temp = n->sig;
    while (temp != 0) {
        cout << temp->inferior->etiqueta << "->";
        temp = temp->sig;
    }
    cout << "null" << endl;
}