#include <iostream>
#include <fstream>
using namespace std;
struct Nodo{ //struct Nodo
	int dato;
	Nodo *liga; //liga
	
};	
void menu(Nodo*punta){

	int opmenu,n,buscar,i,ip,pos,b;
	do{
	cout<<endl;
	cout<<"************************MENU**********************"<<endl;
	cout<<"0. Insertar desde archivo "<<endl;
	cout<<"1. Insertar elementos al inicio de la lista "<<endl;
	cout<<"2. Insertar elementos al final de la lista  "<<endl;
	cout<<"3. Mostrar elementos de la lista            "<<endl;
	cout<<"4. Buscar un elemento en la lista"<<endl;
	cout<<"5. Insertar en una posicion (Antes o Despues)"<<endl;
	cout<<"6. Eliminar elemento en una posicion"<<endl;
	cout<<"7. Eliminar elemento con una informacion"<<endl;
	cout<<"8. Eliminar elementos repetidos"<<endl;
	cout<<"9. Contar Nodos"<<endl;
	cout<<"10. Salir "<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Opcion: "<<"#";
	cin>>opmenu;
	cout<<"*****************************************"<<endl;
	
	switch (opmenu){
		case 0:
		InsertarArchivo (punta);
	    system("pause");
	    system("cls");
		break;
		case 1:
	   
		cout<<"|||INSERTOR DE LISTAS|||"<<endl;
		cout<<"\nDigite un dato #"<<i+1<<":" ;
	    cin>>n; 
	    InsertarListasInicio(punta,n);	
	    cout<<"*************************"<<endl;
	    i++;
	    
	    i=0;
	system("pause");
	system("cls");
	    break;
	
	    ///////////////////////////////////////////////
	    
	    case 2:
	   cout<<"|||INSERTOR DE LISTAS|||"<<endl;	
		cout<<"\nDigite un dato #"<<i+1<<":" ;
	    cin>>n; 
	   InsertarListasFinal(punta,n);	
	   cout<<"*************************"<<endl;
	    i++;
	    system("pause");
	    system("cls");
	    ////////////////////////////////////////////////
	    break;
	    case 3: MostrarListas(punta);
	    break;
	    case 4: cout<<"\nDigite dato a buscar: ";
	    cin>>buscar;
	    Buscardato(punta,buscar);
	    break;
	    case 5:
		 cout<<"\nDigite numero a insertar:";
	    cin>>ip;
	    Insertarpos(punta,pos,ip);
	    break;
	    case 6:
	    	cout<<"\nDigite posicion a eliminar: ";
			cin>>pos;
	    	EliminarPosicion(punta,pos);
	    break;
	    case 7:
	    cout<<"\n\tDigite numero a eliminar: ";
	   	cin>>b;
	   	EliminarElemento(punta,b);
	   	system("pause");
	    system("cls");
	    break;
	    case 8:
	    cout<<"\n Valor repetido a eliminar: ";
		 cin>>b;
        EliminarRepetidos(punta, b);
        system("pause");
	    system("cls");
	    break;
	    case 9:
	    ContarNodos(punta);
	    system("pause");
	    system("cls");
	    break;
	    case 10:
	    break;
	    
	}
	
  }while(opmenu !=10);
};
