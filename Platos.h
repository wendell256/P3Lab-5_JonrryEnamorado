#ifndef PLATOS_H
#define PLATOS_H

#include "Ingredientes.h"
#include <string>
#include <vector>
using namespace std;

class Platos{
    private:
        double sabor,cocinado,precio;
        string resena;
        vector<Ingredientes*>Ingredients;
        vector<double> cantidadIng;
    public:
        Platos(double,double,double,string);
        void setResena(string);
        string getResena();
        void setSabor(double);
        double getSabor();
        void setCocinado(double);
        double getCocinado();
        void setPrecio(double);
        double getPrecio();
        void addIngrediente(Ingredientes*,double);

};

#endif