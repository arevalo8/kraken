#ifndef LISTA_VECTORIAL_H
#define LISTA_VECTORIAL_H
#include <cassert>

template <typename T> class Lista{
        struct nodo;
    public:
        typedef nodo* posicion;
        Lista(): L(new nodo (T())) {}
        Lista (const Lista<T>& L) {copiar (L);}
        Lista<T>& operator =(const Lista<T>& L);
        void insertar(const T& x, posicion p) {p->sig = new nodo(x,p->sig);}
        void eliminar(posicion p);
        const T& elemento(posicion p) const;
        posicion buscar(const T& x) const;
        posicion siguiente(posicion p) const;
        posicion anterior(posicion p) const;
        posicion primera() const {return L;}
        posicion fin() const;
        ~Lista();

    private:
        struct nodo{
            T elemento;
            nodo* sig;
            nodo(const T& e, nodo* p=nullptr): elemento(e), sig(p) {}
        };

        nodo* L; //nodo cabecera
        void copiar(const Lista<T>& L);  
};

void Lista<T>::copiar(const Lista<T>& L){
    L=new nodo (T());
    nodo* q=L;
    for (nodo* r=L.L->sig; r; r=r->sig){
        q->sig= new nodo (r->elemento);
        q=q->sig;
    }
}

Lista<T>& Lista<T>::operator =(const Lista<T>& L){
    if(this!= L){
        this->~Lista();
        copiar(L);
    }
    return *this;
}

void Lista<T>::eliminar(Lista<T>::posicion p){
    assert (p->sig);
    nodo* q= p->sig;
    p->sig= q->sig;
    delete q;
}

const T& Lista<T>::elemento(Lista<T>::posicion p) const{
    assert(p->sig);
    return p->sig->elemento;
}

typename Lista<T>::posicion Lista<T>::buscar(const T& x){
    nodo* q=L;
    bool encontrado=false;
    while(q->sig && !encontrado){
        if(q->sig->elemento == x) encontrado=true;
        else q=q->sig;
    }
    return q;
}

typename Lista<T>::posicion Lista<T>::siguiente(Lista<T>::posicion p){
    assert(p>=0 && p<=n);
    return p->sig;
}

typename Lista<T>::posicion Lista<T>::anterior(Lista<T>::posicion p){
    nodo* q;
    assert(p!=L);
    for(q=L; q->sig!=p; q->sig);
    return q;
    
}

typename Lista<T>::posicion Lista<T>::fin(){
    nodo* p;
    for(p=L;p->sig; p=p->sig);
    return p;
}

Lista<T>::~Lista(){
    nodo* q;
    while(L){
        q=L->sig;
        delete L;
        L=q;
    }
}
#ifndef 
