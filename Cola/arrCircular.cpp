/* 
 * File:   arrCircular.cpp
 * Author: luisd
 * 
 * Created on 25 de septiembre de 2017, 09:09 PM
 */

#include "arrCircular.h"
#include <iostream>
#include <string>
using namespace std;

arrCircular::arrCircular() {
}

arrCircular::~arrCircular() {
}

void arrCircular::iniciar() {
    this->front = -1;
    this->rear = -1;
}

void arrCircular::destruir() {
}

void arrCircular::vaciar() {
    this->rear = -1;
    this->front = -1;
}

bool arrCircular::vacia() {
    if (front == -1 && rear == -1) {
        return true;
    } else {
        return false;
    }
}

void arrCircular::encolar(int e) {
    if ((rear + 1) % MAX == front) {
        cout << "La cola esta llena we\n";
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        this->a[rear] = e;
    }
}

int arrCircular::desencolar() {
    int value;
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

int arrCircular::frente() {
    return this->front;
}

void arrCircular::display() {
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