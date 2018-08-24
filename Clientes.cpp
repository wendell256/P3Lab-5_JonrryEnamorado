#include "Clientes.h"

Clientes::Clientes(string Tname){
    name = Tname;

}

string Clientes::getName(){
    return name;
}

void Clientes::setEvaluacionm(double Tevaluacion){
    evaluacionm=Tevaluacion;
}

void Clientes::setDinerog(double Tdinero){
    dinerog = Tdinero;
}

double Clientes::getDinerog(){
    return dinerog;
}

double Clientes::getEvaluacionm(){
    return evaluacionm;
}