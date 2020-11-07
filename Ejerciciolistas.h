#include <iostream>
#include <fstream>
using namespace std;
struct Nodo{ //struct Nodo
	int dato;
	Nodo *liga; //liga
	
};	
void insertarLista(Nodo*,int);
void menu(Nodo*punta){

	int opmenu,i,p,pos,x,n;
	do{
	cout<<endl;
	cout<<"************************MENU**********************"<<endl;
	cout<<"0. "<<endl;
	cout<<"1. Insertar elemento"<<endl; 
	cout<<"2. "<<endl;
	cout<<"3. "<<endl;
	cout<<"4. "<<endl;
	cout<<"5. "<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Digite el numero 10 para salir."<<endl;
	cout<<"Opcion: "<<"#";
	cin>>opmenu;
	cout<<"*****************************************"<<endl;
	
	switch (opmenu){
	    case 1:cout<<"|||INSERTOR DE LISTAS|||"<<endl;	
		cout<<"\nDigite un dato #"<<i+1<<":" ;
	    cin>>n; 
	    insertarLista(punta,n);
	    cout<<"*************************"<<endl;
	    i++;
	    system("pause");
	    system("cls");
	    break;
	    
	    case 2:
	    	
	    break;
	    
	    case 3: 
	    
	    break;
	    
	    case 4: 
	    
	    break;
	    
	    case 10:
	    	
	    break;
	    
	}
	
  }while(opmenu !=10);
};
struct nodo * crearpunta(){
struct nodo * punta;
punta=NULL;
return punta;
}
void insertarLista(Nodo *&punta, int n){//puntero tipo nodo y por referencia
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
}
