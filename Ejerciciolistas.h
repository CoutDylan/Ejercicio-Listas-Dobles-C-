#include <iostream>
#include <fstream>
using namespace std;
struct Nodo{ //struct Nodo
	int dato;
	Nodo *liga; //liga
	
};	
void insertarListaA(Nodo*&,int);
void insertarListaB(Nodo*&,int);
void MostrarListas(Nodo *);
void menu(Nodo*punta){

	int opmenu,i,p,pos,x,n;
	do{
	cout<<endl;
	cout<<"************************MENU**********************"<<endl;
	cout<<"1. Crear Lista A (Paso 1)  "<<endl; 
    cout<<"2. Mostrar elementos de la lista(Paso 2)          "<<endl;
	cout<<"3. Crear Lista B (Paso 3)  "<<endl;
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
	    case 3: cout<<"|||INSERTOR DE LISTAS|||"<<endl;	 
	    insertarListaB(punta,n);
	    cout<<"*************************"<<endl;
	    i++;
	    system("pause");
	    system("cls"); 
	    break;   
	    case 4: 
	    break;
	    case 5:
	    break;
	    
	}
	
  }while(opmenu !=5);
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

void insertarListaB(Nodo *&punta, int p){
	int i,x,n;
    Nodo *q;
 	Nodo* Nuevo=new Nodo();
	char opcion;
	int nnodos2;
	Nuevo->dato=p;
	cout<<"Cuantos nodos desea insertar en la lista B ( interna ) :"<<endl;
    cin>>nnodos2;
    while(i<nnodos2)
{
cout<<"HOLA 2"<<endl;
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
	if(punta==NULL){
		cout<<"Lista vacia, desea crear una nueva lista? (S/N): ";
		cin>>opcion;
		if (opcion == 'S'){
			Nuevo->liga=NULL;
			punta=Nuevo;
			
		}
		}
		else{
			q=punta;
			i=1;
		}
		    cout<<"Digite el nodo de la lista A en el que desea insertar la lista B (lista interna):"<<endl;
			cin>>p;
			while(q->liga != NULL){
				
				if(p==i){
					Nuevo->liga=q->liga;
					q->liga=Nuevo;	
				}
				else{
					i++;
					q=q->liga;
				}
				
				if(q->liga==NULL){
					cout<<"No existe esta posicion, desea insertarla de ultima (S/N)";
					cin>>opcion;
						if (opcion=='S'){
							Nuevo->liga=NULL;
							q->liga=Nuevo;
						}
				}
				return;
				}
				
			
			
			
		
		}
	
	/*
	cout<<"Digite el nodo de la lista A en el que desea insertar la lista B (lista interna):"<<endl;
	cin>>p;
	Nodo *nuevo_nodo=new Nodo();
	Nodo *x=punta;
	x=punta;
	while(x->liga!=p){
		x=x->liga;
x->liga=nuevo_nodo;
*/
struct Nodo * crearpunta2(){
struct Nodo * punta2;
punta2=NULL;
return punta2;
}
