/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: luisd
 *
 * Created on 14 de octubre de 2017, 03:45 PM
 */

#include <cstdlib>
#include <iostream>
//#include "Arbol/listaHijos.h"
//#include "Arbol/hijoIzqHD1.h"

#include "Cola/arrCircular.h"
//#include "AlgoritmosArbol.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    arrCircular c;
    c.iniciar();
    c.encolar(1);
    c.encolar(2);
    c.encolar(3);
    c.display();
    cout << "Voy a desencolar " << endl;
    c.desencolar();
    c.display();
    cout <<"Estoy encolando: " << endl;
    c.encolar(4);
    c.encolar(5);
    c.display();
    int x = c.frente();
    cout << "El frente es: " << x;
    return 0;
}

