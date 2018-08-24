#include "Platos.h"
#include <string>
#include <vector>
using namespace std;

Platos::Platos(double Tsabor,double Tcocinado, double Tprecio,string Treseña){
    sabor = Tsabor;
    cocinado = Tcocinado;
    precio = Tprecio;
    reseña = Treseña;

}

void Platos::setReseña(string Treseña){
    reseña=Treseña;
}

string Platos::getReseña(){
    return reseña;
}

void Platos::setSabor(double Tsabor){
    sabor=Tsabor;
}

double Platos::getSabor(){
    return sabor;
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