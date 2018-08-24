#include "Ingredientes.h"
#include <string>
#include <vector>

using namespace std;

Ingredientes::Ingredientes(string Tname,string Ttype,double Taporte,double Tduracion,double Tcantidad){
    name = Tname;
    type = Ttype;
    aporte = Taporte;
    duracion = Tduracion;
    cantidad = Tcantidad;

}

void Ingredientes::setName(string Tname){
    name = Tname;
}

string Ingredientes::getName(){
    return name;
}

void Ingredientes::setType(string Ttype){
    type = Ttype;
}

string Ingredientes::getType(){
    return type;
}

void Ingredientes::setAporte(double Taporte){
    aporte=Taporte;
}

double Ingredientes::getAporte(){
    return aporte;
}

void Ingredientes::setDuracion(double Tduracion){
    duracion=Tduracion;
}

double Ingredientes::getDuracion(){
    return duracion;
}

void Ingredientes::setInventario(double Tinventario){
    inventario=Tinventario;
}

void Ingredientes::setCantidad(double Tcantidad){
    cantidad = Tcantidad;
}

double Ingredientes::getCantidad(){
    return cantidad;
}