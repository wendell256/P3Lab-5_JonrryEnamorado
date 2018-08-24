#ifndef PLATOS_H
#define PLATOS_H

#include "Ingredientes.h"
#include <string>
#include <vector>
using namespace std;

class Platos{
    private:
        double sabor,cocinado,precio;
        string resena,name;
        vector<Ingredientes*>Ingredients;
        vector<double> cantidadIng;
    public:
        Platos(double,double,double,string,string);
        void setResena(string);
        string getResena();
        double getSabor();
        void setSabor(double);
        void setCocinado(double);
        double getCocinado();
        void setPrecio(double);
        double getPrecio();
        void addIngrediente(Ingredientes*,double);
        void setName(string);
        string getName();
};

#endif