#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <stdio.h>
#include "funciones.h"

using namespace std;

int main ()
{

    struct nodo  *cabeza1,*cabeza2;
    int cifras1=0,cifras2=0,i=0,n=0,digito=0,h,k;
    int numero1,numero2;
	cout<<"Digite un numero de minimo 4 digitos:";
	cin>>numero1;
	h=numero1;
	while(h>0)
	{
		h/=10;
		cifras1++;
	}
	h=numero1;
	cabeza1=crearLista(cifras1);
	if (cifras1>=4)
	{
		while(h>0)
		{
			digito=h%10;
			h/=10;
			insertarInicio(cabeza1,digito);
		}
	}
	else
	{
		cout<<"el numero de digitos ingresados no es valido"<<endl;		
	}
	cout<<"Digite un numero de minimo 4 digitos:";
	cin>>numero2;
	k=numero2;
	while(k>0)
	{
		k/=10;
		cifras2++;
	}
	k=numero2;
	cabeza2=crearLista(cifras2);
	if (cifras2>=4)
	{
		while(k>0)
		{
			digito=k%10;
			k/=10;
			insertarInicio(cabeza2,digito);
		}
		mostrarListaN(cabeza1);
		mostrarListaN(cabeza2);
		cout<<"La suma es: "<<numero1<<" + "<<numero2<<" = "<<numero1+numero2;
	}
	else
	{
		cout<<"el numero de digitos ingresados no es valido"<<endl;		
	}
	return 0;
}
