/* 
 * File:   NodohIHD1.h
 * Author: Jimmy
 *
 * Created on 16 de octubre de 2017, 10:50 PM
 */

#ifndef NODOHIHD1_H
#define NODOHIHD1_H

class NodohIHD1 {
public:
    NodohIHD1();
    NodohIHD1(int e);
    NodohIHD1(const NodohIHD1& orig);
    virtual ~NodohIHD1();
    
    int etiqueta;
    NodohIHD1 *hijoIzq;
    NodohIHD1 *hermanoDer;
    int hijos;
    
private:

};

#endif /* NODOHIHD1_H */

