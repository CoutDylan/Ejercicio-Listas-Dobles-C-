#include <fstream>
#include <string>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct nodo{
    	struct nodo *ante;    
    	struct nodo *sgte;
		int digito;  
};


struct nodo * crearLista(int cifras)
{
	struct nodo *cabeza;
    cabeza = new(struct nodo);
    cabeza->sgte=NULL;
    cabeza->ante=NULL;
    cabeza->digito = cifras ;
    return cabeza;
}


 void insertarInicio(struct nodo *cabeza, int valor)
{
	struct nodo *nuevo,*p;
	nuevo = new (struct nodo);
	nuevo->digito=valor;
	nuevo->sgte=cabeza->sgte;
	nuevo->ante=cabeza;
	
	p=cabeza->sgte;
	cabeza->sgte=nuevo;
	if(p!=NULL)
	{
		p->ante=nuevo;
	}
}

void mostrarListaN(struct nodo *cabeza)
{
	int i=1;
	struct nodo *p;
	p=cabeza;
	cout<<"Cifras: "<<endl;
	while(p!=NULL)
	{
		cout<<' '<<i++<<")"<<p->digito<<endl;
		p=p->sgte;
	}
}
