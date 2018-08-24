#include "Platos.h"
#include <string>
#include <vector>
using namespace std;

Platos::Platos(double Tsabor,double Tcocinado, double Tprecio,string Tresena,string Tname){
    sabor = Tsabor;
    cocinado = Tcocinado;
    precio = Tprecio;
    resena = Tresena;
    name = Tname;

}

void Platos::setSabor(double Tsabor){
    sabor=Tsabor;
}

double Platos::getSabor(){
    return sabor;
}

void Platos::setResena(string Tresena){
    resena=Tresena;
}

string Platos::getResena(){
    return resena;
}

void Platos::setCocinado(double Tcocinado){
    cocinado=Tcocinado;
}

double Platos::getCocinado(){
    return cocinado;
}

void Platos::setPrecio(double Tprecio){
    precio=Tprecio;
}

double Platos::getPrecio(){
    return precio;
}

void Platos::addIngrediente(Ingredientes* nuevo,double cantNuevo){
    Ingredients.push_back(nuevo);
    cantidadIng.push_back(cantNuevo);
}

void Platos::setName(string Tname){
    name = Tname;
}

string Platos::getName(){
    return name;
}