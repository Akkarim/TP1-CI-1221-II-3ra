/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: Jimmy
 * 
 * Created on 16 de octubre de 2017, 12:10 AM
 */

#include "NodoLH.h"

NodoLH::NodoLH() {
    sig = 0;
    inferior = 0;
    cantidadHijos = 0;
}

NodoLH::NodoLH(int e) {
    etiqueta = e;
    sig = 0;
    inferior = 0;
    cantidadHijos = 0;
}

NodoLH::NodoLH(const NodoLH& orig) {
}

NodoLH::~NodoLH() {
}

