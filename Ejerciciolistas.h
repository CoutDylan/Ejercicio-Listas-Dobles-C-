#include <iostream>
#include <fstream>
using namespace std;
struct Nodo{ //struct Nodo
	int dato;
	Nodo *liga; //liga
	
};	
void menu(Nodo*punta){

	int opmenu,i,p,pos,x;
	do{
	cout<<endl;
	cout<<"************************MENU**********************"<<endl;
	cout<<"0. "<<endl;
	cout<<"1. "<<endl; 
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
		case 0:

	    break;
	    
	    case 1:

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
