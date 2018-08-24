#ifndef PLATOS_H
#define PLATOS_H

#include <string>
#include <vector>
using namespace std;

class Platos{
    private:
        double cantidadIng,sabor,cocinado,precio;
        string reseña;
    public:
        void setCantidadIng(double);
        double getCantidadIng();
        void setReseña(string);
        string getReseña();
        void setSabor(double);
        double getSabor();
        void setCocinado(double);
        double getCocinado();
        void setPrecio(double);
        double getPrecio();
};