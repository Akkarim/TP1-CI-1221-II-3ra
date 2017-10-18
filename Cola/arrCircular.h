/* 
 * File:   arrCircular.h
 * Author: luisd
 *
 * Created on 25 de septiembre de 2017, 09:09 PM
 */
#ifndef ARRCIRCULAR_H
#define ARRCIRCULAR_H
#include <iostream>
#include <string>
using namespace std;

#define MAX 10
template <class T> class arrCircular {
public:
    struct{
        int a[MAX];
        int front;
        int rear;
    };
    arrCircular();
    virtual ~arrCircular();
    
    //EFE: Crea una cola(C) vacía.    
    //REQ:
    //MOD:
    void iniciar();
    
    //EFE: Destruye la cola, la deja inutilizable.    
    //REQ:
    //MOD:
    void destruir();
    
    //EFE: Vacia la cola, se puede volver a utilizar.    
    //REQ: Cola inicializado, no vacío.
    //MOD: La cola C.
    void vaciar();
    
    //EFE: Retorna verdadero si C esta vacía.    
    //REQ: C inicializado.
    //MOD:
    bool vacia();
    
    //EFE: Mete el elemento e en la cola.    
    //REQ: C inicializado.
    //MOD: La cola C.
    void encolar(T e);
    
    //EFE: Desencola el elemento en top    
    //REQ: C inicializado.
    //MOD: La cola C.
    T desencolar();
    
    //EFE: Retorna el elemento que se encuentra en el frente de la cola.    
    //REQ: C inicializado y no vacía.
    //MOD:
    T frente();
    
    void display();
    
private:
};

template <typename T>
arrCircular<T>::arrCircular() {
}

template <typename T>
arrCircular<T>::~arrCircular() {
}

template <typename T> 
void arrCircular<T>::iniciar() {
    this->front = -1;
    this->rear = -1;
}

template <typename T> 
void arrCircular<T>::destruir() {
}

template <typename T> 
void arrCircular<T>::vaciar() {
    this->rear = -1;
    this->front = -1;
}

template <typename T> 
bool arrCircular<T>::vacia() {
    if (front == -1 && rear == -1) {
        return true;
    } else {
        return false;
    }
}

template <typename T> 
void arrCircular<T>::encolar(T e) {
    if ((rear + 1) % MAX == front) {
        cout << "Queue is full\n";
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        this->a[rear] = e;
    }
}

template <typename T> 
T arrCircular<T>::desencolar() {
    T value;
    if (vacia()) {
        cout << "Queue is empty\n";
    } else {
        value = a[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
    return value;
}

template <typename T> 
T arrCircular<T>::frente() {
    return this->a[this->front];
}

template <typename T> 
void arrCircular<T>::display() {
    if (vacia())
        cout << "Queue is empty\n";
    else {
        int i;
        if (front <= rear) {
            for (i = front; i <= rear; i++)

                cout << a[i] << " ";
        } else {
            i = front;
            while (i < MAX) {
                cout << a[i] << " ";
                i++;
            }
            i = 0;
            while (i <= rear) {
                cout << a[i] << " ";
                i++;
            }
        }
    }
}
#endif /* ARRCIRCULAR_H */