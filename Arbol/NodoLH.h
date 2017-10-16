/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: Jimmy
 *
 * Created on 16 de octubre de 2017, 12:10 AM
 */

#ifndef NODOLH_H
#define NODOLH_H

class NodoLH {
public:
    NodoLH();
    NodoLH(int e);
    NodoLH(const NodoLH& orig);
    virtual ~NodoLH();
    
    int etiqueta;
    NodoLH *sig;
    NodoLH *inferior;
    int cantidadHijos;
    
    
private:

};

#endif /* NODO_H */

