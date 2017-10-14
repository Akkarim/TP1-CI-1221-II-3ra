/* 
 * File:   arrCircular.h
 * Author: luisd
 *
 * Created on 25 de septiembre de 2017, 09:09 PM
 */

#ifndef ARRCIRCULAR_H
#define ARRCIRCULAR_H
#define MAX 10
class arrCircular {
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
    void encolar(int e);
    
    //EFE: Desencola el elemento en top    
    //REQ: C inicializado.
    //MOD: La cola C.
    int desencolar();
    
    //EFE: Retorna el elemento que se encuentra en el frente de la cola.    
    //REQ: C inicializado y no vacía.
    //MOD:
    int frente();
    
    void display();
    
private:
};

#endif /* ARRCIRCULAR_H */