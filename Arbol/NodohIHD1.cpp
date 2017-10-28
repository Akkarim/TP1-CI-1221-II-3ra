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

