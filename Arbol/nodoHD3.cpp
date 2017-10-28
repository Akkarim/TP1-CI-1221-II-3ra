/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoHD3.cpp
 * Author: luisd
 * 
 * Created on 28 de octubre de 2017, 04:13 PM
 */

#include "nodoHD3.h"

nodoHD3::nodoHD3() {
    etiqueta = 0;
    hD = 0;
    hI = 0;
    hijoMI = 0;
    padre = 0;
}

nodoHD3::nodoHD3(int e) {
    etiqueta = e;
    hD = 0;
    hI = 0;
    hijoMI = 0;
    padre = 0;
}
nodoHD3::~nodoHD3() {
}




