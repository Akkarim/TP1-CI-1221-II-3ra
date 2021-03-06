/* 
 * File:   AlgoritmosArbol.cpp
 * Author: Jimmy
 * 
 * Created on 15 de octubre de 2017, 11:07 PM
 */

#include <list>

#include "AlgoritmosArbol.h"

using namespace std;

AlgoritmosArbol::AlgoritmosArbol() {
    numNiveles = 0;
}

AlgoritmosArbol::AlgoritmosArbol(const AlgoritmosArbol& orig) {
}

AlgoritmosArbol::~AlgoritmosArbol() {
}

nodo AlgoritmosArbol::hermanoIzq(Arbol* a, nodo n) {
    nodo padr = a->padre(n);
    nodo hIzq = a->hijoMasIzquierdo(padr);
    if (hIzq != n) {
        while (a->hermanoDerecho(hIzq) != n && a->hermanoDerecho(hIzq) != 0) {
            hIzq = a->hermanoDerecho(hIzq);
        }
        if (a->hermanoDerecho(hIzq) == n) {
            return hIzq;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

bool AlgoritmosArbol::etiquetasRepetidas(Arbol* A) {
    bool repetido = false;
    int i = 0;
    int buscador;
    int ndo[100];
    nodo nh;
    nodo n;
    Cola c;
    c.iniciar();
    c.encolar(A->raiz());
    while (!c.vacia()) {
        n = c.desencolar();
        ndo[i] = n->etiqueta;
        buscador = 0;
        while (buscador < i) {
            if (ndo[buscador] != ndo[i]) {
                buscador++;
            } else {
                return true;
            }
        } // end of while
        i++;
        nh = A->hijoMasIzquierdo(n);
        while (nh != 0) {
            c.encolar(nh);
            nh = A->hermanoDerecho(nh);
        }
    }
    return repetido;
}

/*int AlgoritmosArbol::numNivelesPorNiveles(Arbol* A) {
    int n = 0;
    if (!A->vacia()) {
        Cola c;
        c.iniciar();
        c.encolar(A->raiz());
        while (!c.vacia()) {
            n++;
            nodo temp = c.desencolar();
            nodo nh = A->hijoMasIzquierdo(temp);
            while (nh != 0) {
                c.encolar(nh);
                nh = A->hermanoDerecho(nh);
            }
        }
    }
    return n;
}*/

int AlgoritmosArbol::numNivelesxPreOrden(Arbol* A, nodo raiz) {
    if (A->hijoMasIzquierdo(raiz) != 0) {
        nodo nh = A->hijoMasIzquierdo(raiz);
        numNiveles++;
        while (nh != 0) {
            numNivelesxPreOrden(A, nh);
            nh = A->hermanoDerecho(nh);

        }
    }
    return numNiveles;
}

int AlgoritmosArbol::profundidad(Arbol* A, nodo n) { // Lo recorre desde el nodo n hasta la raíz
    int contador = 0;
    if (n != A->raiz()) {
        nodo nh = n; // Nodo hijo
        while (nh != A->raiz()) {
            nh = A->padre(nh);
            contador++;
        }
    }
    return contador;
}

void AlgoritmosArbol::etiquetasNivel(Arbol* A, int nivel) {
    Cola p;
    p.iniciar();
    if (!A->vacia()) {
        Cola c;
        c.iniciar();
        c.encolar(A->raiz());
        while (!c.vacia()) {
            nodo temp = c.desencolar();
            nodo nh = A->hijoMasIzquierdo(temp);
            while (nh != 0) {
                c.encolar(nh);
                if (profundidad(A, nh) == nivel) {
                    p.encolar(nh);
                }
                nh = A->hermanoDerecho(nh);
            }
        }
    }
}

    void AlgoritmosArbol::etiquetasHijos(Arbol* A, nodo n) {
        nodo nh = A->hijoMasIzquierdo(n);
        while (nh != 0) {
            cout << A->etiqueta(nh) << "->";
            nh = A->hermanoDerecho(nh);
        }
    }

    void AlgoritmosArbol::borrarSubarbol(Arbol* A, nodo n) {/* Se cae cuando pide HMI
    list<nodo> l;
    list<nodo>::iterator it;
    nodo nh;
    it = l.begin();
    l.push_front(n);
    while (it != l.end()){
        nh = A->hijoMasIzquierdo(*it);
        while (nh != 0){
            l.push_back(nh);
            nh = A->hermanoDerecho(nh);
        }
        it++;
    }
    for (list<nodo>::reverse_iterator rit = l.rbegin(); rit != l.rend(); rit++){
        A->borrarHoja(*rit);
    }
*/
    }

    void AlgoritmosArbol::copiarArbol(Arbol * A) {
       /* Arbol B;
        B.iniciar();
        B.ponerRaiz(A->etiqueta(A->raiz()));
        return copiarRecursivo(A, A->raiz(), B, B.raiz());
    }

    Arbol AlgoritmosArbol::copiarRecursivo(Arbol* A, nodo raizA, Arbol B, nodo raizB) {
        int contador = 1;
        nodo nh = A->hijoMasIzquierdo(raizA);
        while (nh != 0) {
            B.agregarHijo(A->etiqueta(nh), contador, nh);
            contador++;
            nh = A->hermanoDerecho(nh);
        }
    }*/
}

bool AlgoritmosArbol::arbolesIguales(Arbol* A, Arbol* B) {
    bool resultado = true;
    colaI cola1;
    colaI cola2;
    nodo nodo1;
    nodo nodo2;
    int etiqueta1;
    int etiqueta2;
    if ((A->raiz() && !B->raiz()) || (!A->raiz() && B->raiz()))
        resultado = false;
    else if (A->raiz() && B->raiz()) {
        if (A->etiqueta(A->raiz()) != B->etiqueta(B->raiz()))
            resultado = false;
        else {
            cola1.iniciar();
            cola2.iniciar();
            nodo1 = A->raiz();
            nodo2 = B->raiz();
            cola1.encolar(A->etiqueta(nodo1));
            cola2.encolar(B->etiqueta(nodo2));
            while (resultado && !cola1.vacia()) {
                etiqueta1 = cola1.desencolar();
                etiqueta2 = cola2.desencolar();
                nodo1 = A->hijoMasIzquierdo(nodo1);
                nodo2 = B->hijoMasIzquierdo(nodo2);
                while ((nodo1 || nodo2) && resultado) {
                    if ((nodo1 && !nodo2) || (!nodo1 && nodo2))
                        resultado = false;
                    else if (A->etiqueta(nodo1) != B->etiqueta(nodo2))
                        resultado = false;
                    else {
                        cola1.encolar(A->etiqueta(nodo1));
                        cola2.encolar(B->etiqueta(nodo2));
                        nodo1 = A->hermanoDerecho(nodo1);
                        nodo2 = A->hermanoDerecho(nodo2);
                    }
                }
            }
        }
    }
    return resultado;
}

void AlgoritmosArbol::listarPreOrden(Arbol* A, nodo raiz) {
   // cout << A->etiqueta(raiz) << "->";
    if (A->hijoMasIzquierdo(raiz) != 0) {
        nodo nh = A->hijoMasIzquierdo(raiz);
        while (nh != 0) {
            listarPreOrden(A, nh);
            nh = A->hermanoDerecho(nh);
        }
    }
}

void AlgoritmosArbol::listarPostOrden(Arbol* A, nodo raiz) {
}

void AlgoritmosArbol::listarPorNiveles(Arbol* A, nodo raiz) {
    if (!A->vacia()) {
        Cola c;
        c.iniciar();
        c.encolar(A->raiz());
        while (!c.vacia()) {
            nodo temp = c.desencolar();
            cout << temp->etiqueta << "->";
            nodo nh = A->hijoMasIzquierdo(temp);
            while (nh != 0) {
                c.encolar(nh);
                nh = A->hermanoDerecho(nh);
            }
        }
    }
}

nodo AlgoritmosArbol::buscarEtiqueta(Arbol* A, int e) {
    nodo encontrado = 0;
    if (!A->vacia()) {
        encontrado = buscarRecursivo(A, A->raiz(), e);
    }
    return encontrado;
}

nodo AlgoritmosArbol::buscarRecursivo(Arbol* A, nodo raiz, int e) {
    nodo resultado = 0;
    if (raiz->etiqueta == e) {
        resultado = raiz;
    } else {
        nodo nh = A->hijoMasIzquierdo(raiz);
        while (nh != 0) {
            resultado = buscarRecursivo(A, nh, e);
            nh = A->hermanoDerecho(nh);
        }
    }
    return resultado;
}