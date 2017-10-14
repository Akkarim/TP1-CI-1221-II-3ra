/* 
 * File:   ListaHijos.cpp
 * Author: Jimmy
 * 
 * Created on 9 de octubre de 2017, 12:29 PM
 */

#include <iostream>
#include "ListaHijos.h"
using namespace std;

ListaHijos::ListaHijos() {
}

ListaHijos::ListaHijos(const ListaHijos& orig) {
}

ListaHijos::~ListaHijos() {
}

void ListaHijos::iniciar() {
    primero = new Nodo();
    cantidadNodos = 0;
}

void ListaHijos::destruir() {
    Nodo *temp = primero;
    Nodo *aux = new Nodo();
    Nodo *aux2 = new Nodo();

    while (temp != 0) {
        Nodo *hijo = temp->sig;
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

void ListaHijos::vaciar() {
    Nodo *temp = primero;
    Nodo *aux = new Nodo();
    Nodo *aux2 = new Nodo();

    while (temp != 0) {
        Nodo *hijo = temp->sig;
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

bool ListaHijos::vacia() {
    if (primero == 0) {
        return true;
    } else {
        return false;
    }
}

ListaHijos::Nodo* ListaHijos::agregarHijo(int e, int i, Nodo* n) {
    Nodo *temp = new Nodo(e);
    temp->inferior = primero->inferior;
    primero->inferior = temp;
    cantidadNodos++;

    Nodo *aux = new Nodo();
    aux->inferior = temp;

    Nodo *iter = n->sig;
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

void ListaHijos::borrarHoja(Nodo* n) {
    //Eliminar de la lista de hijos del padre
    Nodo *temp = primero;
    bool eliminado = false;
    while (temp != 0 && !eliminado) {
        Nodo *hijo = temp->sig;
        while (hijo != 0 && !eliminado) {
            if (hijo->inferior == n) {
                hijo->inferior = 0;
                eliminado = true;
                temp->cantidadHijos--;
                //eliminar el nodo
                Nodo *iter = temp->sig;
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
    Nodo *aux = primero;
    while (aux->inferior != n && aux != 0) {
        aux = aux->inferior;
    }
    if (aux->inferior == n) {
        aux->inferior = n->inferior;
        cantidadNodos--;
    }
    delete n;

}

void ListaHijos::ponerRaiz(int e) {
    primero->etiqueta = e;
    cantidadNodos++;

}

ListaHijos::Nodo* ListaHijos::raiz() {
    return primero;
}

ListaHijos::Nodo* ListaHijos::padre(Nodo* n) {
    Nodo *temp = primero;
    while (temp != 0) {
        Nodo *hijo = temp->sig;
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

ListaHijos::Nodo* ListaHijos::hijoMasIzquierdo(Nodo* n) {
    return n->sig->inferior;
}

ListaHijos::Nodo* ListaHijos::hermanoDerecho(Nodo* n) {
    Nodo *temp = primero;
    while (temp != 0) {
        Nodo *hijo = temp->sig;
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

int ListaHijos::etiqueta(Nodo* n) {
    return n->etiqueta;
}

void ListaHijos::modEtiqueta(Nodo* n, int e) {
    n->etiqueta = e;
}

int ListaHijos::numHijos(Nodo* n) {
    return n->cantidadHijos;
}

int ListaHijos::numNodos() {
    return cantidadNodos;
}

ListaHijos::Nodo* ListaHijos::traductor(int e) {

}

void ListaHijos::Listar() {
    Nodo *temp = primero;
    while (temp != 0) {
        cout << temp->etiqueta << "->";
        temp = temp->inferior;
    }
    cout << "NULL" << endl;

}

void ListaHijos::ListarHijos(Nodo* n) {
    Nodo *temp = n->sig;
    while (temp != 0) {
        cout << temp->inferior->etiqueta << "->";
        temp = temp->sig;
    }
    cout << "null" << endl;
}