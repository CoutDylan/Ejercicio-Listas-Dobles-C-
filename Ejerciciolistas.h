#include <iostream>
#include <fstream>
using namespace std;
struct Nodo{ //struct Nodo
	int dato;
	Nodo *liga; //liga
	
};	
void insertarListaA(Nodo*&,int);
void MostrarListas(Nodo *);
void menu(Nodo*punta){

	int opmenu,i,p,pos,x,n;
	do{
	cout<<endl;
	cout<<"************************MENU**********************"<<endl;
	cout<<"1. Insertar elemento"<<endl; 
    cout<<"2. Mostrar elementos de la lista                  "<<endl;
	cout<<"3. "<<endl;
	cout<<"4. "<<endl;
	cout<<"5.Salir "<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Digite el numero 5 para salir."<<endl;
	cout<<"Opcion: "<<"#";
	cin>>opmenu;
	cout<<"*****************************************"<<endl;
	
	switch (opmenu){
	    case 1:cout<<"|||INSERTOR DE LISTAS|||"<<endl;	 
	    insertarListaA(punta,n);
	    cout<<"*************************"<<endl;
	    i++;
	    system("pause");
	    system("cls");
	    break;
	    case 2:MostrarListas(punta);
	    break;
	    
	    case 3: 
	    
	    break;
	    
	    case 4: 
	    
	    break;
	    
	    case 5:
	    	
	    break;
	    
	}
	
  }while(opmenu !=10);
};
struct Nodo * crearpunta(){
struct Nodo * punta;
punta=NULL;
return punta;
}

void insertarListaA(Nodo *&punta, int n){//puntero tipo nodo y por referencia
int i;
int nnodos;
cout<<"Cuantos nodos desea insertar en la lista A ( externa ) :"<<endl;
cin>>nnodos;
while(i<nnodos)
{
cout<<"HOLA"<<endl;
Nodo *nuevo_nodo=new Nodo();
Nodo *aux1=punta;
nuevo_nodo->dato=n;

if(punta==NULL){
	punta=nuevo_nodo;
	
}
else{
	while(aux1->liga!=NULL){
		aux1=aux1 ->liga;
		
	}
	aux1->liga=nuevo_nodo;

}
i++;
}
}
////////////////////////////////////////////
void MostrarListas(Nodo *punta){
//	Nodo *actual = new Nodo();
//	actual=punta; //primera posicion de la lista
	int i=0;
	while(punta != NULL){ //hasta que sea null va a mostrar las listas
	cout <<' '<< i+1 <<") " << punta->dato << endl;
	punta=punta->liga;
	i++;
		
	}
	system("pause");
	system("cls");
};

void insertarListaB(Nodo *&punta, int p, int x){
	cout<<"Digite el nodo de la lista A en el que desea insertar la lista B (lista interna):"<<endl;
	cin>>p;
	Nodo *x=punta;
	x=punta;
	while(x->liga!=p){
		x=x->liga;
}
struct Nodo * crearpunta2(){
struct Nodo * punta2;
punta=NULL;
return punta2;
}
}

