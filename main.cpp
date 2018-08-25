#include "Ingredientes.h"
#include "Platos.h"
#include "Bodega.h"
#include "Clientes.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Administracion();
void Clientesl();
void CrearIngrediente();
void CrearPlato();


Bodega* bodega = new Bodega();

vector<Clientes*> clientes;

int main(){
    char resp='s';
    while(resp=='s' || resp =='S'){
        int opc=0;
        cout<<endl;
        cout<<"BIENVENIDO AL RESTAURANTE LAGOS ENAMORADO"<<endl<<"1)Administracion"<<endl<<"2)Clientes"<<endl<<
            "3)Listar Bodega y Menu"<<endl<<"Seleccione una opcion:"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
                Administracion();
            break;
            case 2:
                Clientesl();
            break;
            case 3:
                if(bodega->Ingredients.empty()){
                    cout<<"***bodega vacia***"<<endl;
                }else{
                    bodega->printPlat();
                
                    cout<<endl;
                }
                if(bodega->menu.empty()){
                    cout<<"***menu vacio***"<<endl;
                }
                else{
                    bodega->printIng();
                }
            break;
            default:
                cout<<"Opcion no valida"<<endl;
            break;
        }
    
        cout<<"Desea reiniciar?s/n"<<endl;
        cin>>resp;
    }
    



    return 0;
}

void Administracion(){
    int opc=0;
    cout<<endl<<"1)Nuevo Ingrediente"<<endl<<"2)Nuevo Plato"<<endl<<"Seleccione Opcion:"<<endl;
    cin>>opc;
    cout<<endl;
    switch(opc){
        case 1:
            CrearIngrediente();
        break;
        case 2:
            if(bodega->Ingredients.empty()){
                cout<<"ERROR NO HAS CREADO INGREDIENTES PARA CREAR PLATILLOS"<<endl;
            }
            else{
                CrearPlato();
            }
        break;
        default:
            cout<<"Opcion no valida"<<endl;
        break;
    }
}

void Clientesl(){
    int opc=0,opc2=0, plato=0;
    string name;
    Clientes* temp = new Clientes(name);
    cout<<"1) Nuevo Cliente"<<endl<<"2) Ingresar"<<endl<<"Ingrese una opcion:"<<endl;
    cin>>opc;
    switch(opc){

        case 1:
            cout<<"Ingrese nombre:"<<endl;
            cin>>name;
            clientes.push_back(temp);
           
        break;
        case 2:
            
            for(int i = 0; i < clientes.size(); i++){
                cout<<i+1<<")"<<clientes[i]->getName()<<endl;
            }
            cout<<"Quien eres?Ingresa Numero:"<<endl;
            cin>>opc2;
            cout<<endl<<"****BIENVENIDO****"<<endl<<"Nombre: "<<clientes[opc2-1]->getName()<<endl<<"Evaluacion:"<<clientes[opc2-1]->getEvaluacionm()<<endl<<"DInero gastado: "<<clientes[opc2-1]->getDinerog();
            cout<<"***COMPRA UN PLATO***";
            bodega->printPlat();
            cout<<endl<<"Ingrese un numero de platillo:"<<endl;
            cin>>plato;
            
        break;
        default:
            cout<<"Opcion no valida"<<endl;
        break;
    }
}

void CrearIngrediente(){
    string name,type;
    int opc=0;
    double aporte=0,duracion=0,cantidad=0;
    cout<<"CREAR INGREDIENTE"<<endl<<"Ingrese nombre:"<<endl;
    cin>>name;
    cout<<" 1)Lacteos"<<endl<<" 2)Frutas"<<endl<<" 3)Vegetales"<<endl<<" 4)Otros"<<endl<<"Ingrese tipo:"<<endl;
    cin>>opc;
    
    while(opc<1 || opc>4){
        cout<<"Error Ingrese opcion de nuevo:"<<endl;
        cin>>opc;
    }

    switch(opc){
        case 1:
            type="Lacteo";
        break;
        case 2:
            type="Fruta";
        break;
        case 3:
            type="Vegetal";
        break;
        case 4:
            type="Otro";
        break;
    }

    cout<<"Ingrese cantidad de aporte al sabor:"<<endl;
    cin>>aporte;
    cout<<"Ingrese duracion:";
    cin>>duracion;
    cout<<"Ingrese cantidad en inventario:"<<endl;
    cin>>cantidad;
    Ingredientes* temp=new Ingredientes(name,type,aporte,duracion,cantidad);  
    bodega->addIngrediente(temp);
    cout<<"INGREDIENTE SE AGREGO EXITOSAMENTE"<<endl;



}

void CrearPlato(){
    string name,resena;
    int opc=0,sabor=0;
    Ingredientes* temp;
    double precio,cant;
    char resp='s';

    cout<<"CREAR PLATILLO"<<endl<<"Ingrese nombre:"<<endl;
    cin>>name;
    cout<<"Ingrese Precio:"<<endl;
    cin>>precio;
    cout<<"Ingrese una pequeña reseña:"<<endl;
    cin>>resena;
    Platos* newPlato = new Platos(0,0,precio,resena,name);
    
    while(resp=='s'||resp=='S'){
        cout<<"SELECCIONE INGREDIENTES EN PLATILLO"<<endl;
        bodega->printIng();
        cin>>opc;
        while(opc<1 || opc>bodega->Ingredients.size()){
            cout<<"ERROR ingrese ingrediente de nuevo:";
            cin>>opc;
        }
        cout<<"Ingrese cantidad de "<<bodega->Ingredients[opc-1]->getName()<<":"<<endl;
        cin>>cant;
        newPlato->addIngrediente(bodega->Ingredients[opc-1],cant);
        sabor+=bodega->Ingredients[opc-1]->getAporte();
        cout<<"Desea ingresar otro ingrediente?s/n"<<endl;
        cin>>resp;

    }
    bodega->addPlato(newPlato);
    cout<<"PLATO CREADO"<<endl;

}