#ifndef NODOHD3_H
#define NODOHD3_H

class nodoHD3 {
public:

    nodoHD3();
    nodoHD3(int e);
    virtual ~nodoHD3();

    int etiqueta;
    nodoHD3 *padre;
    nodoHD3 *hI;
    nodoHD3 *hijoMI;
    nodoHD3 *hD;

private:

};
#endif /* NODOHD3_H */
