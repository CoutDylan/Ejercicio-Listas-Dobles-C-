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

void mostrarLista2(Nodo *);

void juntarListas(Nodo *&, Nodo *&, int, int);



void menu(Nodo*punta,Nodo *punta2){

	int opmenu,i,p,pos,x,n,daton,nodos2,nnodos;
	
	do{
	cout<<endl;
	cout<<"************************MENU**********************"<<endl;
	cout<<"1. Crear Lista A (Paso 1)  "<<endl; 
    cout<<"2. Mostrar elementos de la lista(Paso 2)          "<<endl;
	cout<<"3. Crear Lista B (Paso 3)  "<<endl;
	cout<<"4. Mostrar elementos de la lista B(Paso 4)"<<endl;
	cout<<"5. Insertar lista B en lista A: "<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Digite el numero 7 para salir."<<endl;
	cout<<"Opcion: "<<"#";
	cin>>opmenu;
	cout<<"*****************************************"<<endl;
	
	switch (opmenu){
		
	    case 1:cout<<"|||INSERTOR DE LISTAS|||"<<endl;
		
		cout<<"Cuantos nodos desea insertar en la lista A ( externa ) :"<<endl;
		cin>>nnodos;	 
	    
	    insertarListaA(punta,nnodos);
	    
	    cout<<"*************************"<<endl;
	    
	    system("pause");
	    
	    system("cls");
	    
	    break;
	    
	    case 2:MostrarListas(punta);
	    
	    break;
	    
	    case 3: cout<<"|||INSERTOR DE LISTAS|||"<<endl;	 
	    
	    cout<<"Cuantos nodos desea insertar en la lista B ( interna ) :"<<endl;
	    
    	cin>>nodos2;

	    insertarListaB(punta2,nodos2);
	    
	    cout<<"*************************"<<endl;
	    
	    system("pause");
	    
	    system("cls"); 
	    
	    break;   
	    
	    case 4: 
	    
	    mostrarLista2(punta2);
	    
	    break;
	    
	    case 5:
	    	
	    juntarListas(punta,punta2,nnodos,nodos2);
	    	
	    break;
	    
	    case 6:
	    	
	   
	    break;
	}
	
  }while(opmenu !=7);
  
};


void insertarListaA(Nodo *&punta, int n){//puntero tipo nodo y por referencia
int i;
int nnodos;



	while(i<nnodos)
	{
		
		cout<<"HOLA"<<endl;
		
		Nodo *nuevo_nodo=new Nodo();
		
		Nodo *aux1=punta;
		
		nuevo_nodo->dato;

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
	Nodo *aux;
	aux=punta;
	int i=0;
	
	while(aux != NULL){ //hasta que sea null va a mostrar las listas
	
		cout <<' '<< i+1 <<") " << aux->dato << endl;
		
		aux=aux->liga;
		
		i++;	
	
	}
	system("pause");
	
	system("cls");
};

void insertarListaB(Nodo *&punta2,int nodos2){
	
	int i=0,dato;
	Nodo *aux;

	
		
	while(i<nodos2){
		
		cout<<"Que dato desea ingresar en la posicion "<<i+1<<" de la lista"<<endl;
		cin>>dato;
		
		Nodo *q=new Nodo();
		
		q->dato=dato;
		
		if(punta2==NULL){
			
			punta2=q;
		}
		
		
			
		else{
			
			aux=punta2;
				
			while(aux->liga!=NULL){
			
				aux=aux->liga;
				
			}
			
			aux->liga=q;
			
		}
		
		i++;
		
	}

};

void mostrarLista2(Nodo *punta2){

	int i=0;
	Nodo *aux;
	aux=punta2;
	
	while(aux != NULL){ 
	
		cout <<' '<< i+1 <<") " << aux->dato << endl;
		
		aux=aux->liga;
		
		i++;	
	
	}

};

void juntarListas(Nodo *&punta,Nodo *&punta2,int nodos1,int nodos2){
	
	int p,i=0,j=0;
	Nodo *aux1LA;
	Nodo *aux2LA;
	Nodo *aux1LB;
	aux1LA=punta;
	aux2LA=punta;
	aux1LB=punta2;
	cout<<"En que posicion de A desea insertar la lista B:"<<endl;
	cin>>p;

	while (i<p){
		
		aux1LA=aux1LA->liga;
		
		i++;
		
	}
	
	while(j<p+1){
		
		aux2LA=aux2LA->liga;
		
		j++;
	}



	while(i<=nodos2 && aux1LB->liga!=NULL ){
	
	Nodo *x=new Nodo();
			
			x->dato=aux1LB->dato;
			
			aux1LB=aux1LB->liga;
			

		aux1LA->liga=x;
		
		x->liga=aux2LA;
		
		i++;
	}
};




	

