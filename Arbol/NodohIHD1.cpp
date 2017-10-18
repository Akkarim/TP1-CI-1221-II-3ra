/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodohIHD1.cpp
 * Author: Jimmy
 * 
 * Created on 16 de octubre de 2017, 10:50 PM
 */

#include "NodohIHD1.h"

NodohIHD1::NodohIHD1() {
    hermanoDer = 0;
    hijoIzq = 0;
    hijos = 0;
}

NodohIHD1::NodohIHD1(int e) {
    etiqueta = e;
    hijoIzq = 0;
    hermanoDer = 0;
    hijos = 0;
}

NodohIHD1::NodohIHD1(const NodohIHD1& orig) {
}

NodohIHD1::~NodohIHD1() {
}

