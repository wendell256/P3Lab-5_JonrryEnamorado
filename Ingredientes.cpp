#include "Ingredientes.h"
#include <string>
#include <vector>

using namespace std;

Ingredientes::Ingredientes(string Tname,string Ttype,double Taporte,double Tduracion){
    name = Tname;
    type = Ttype;
    aporte = Taporte;
    duracion = Tduracion;

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