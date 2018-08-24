#ifndef INGREDIENTES_H
#define INGREDIENTES_H

#include <string>
using namespace std;

class Ingredientes{
    private:
            string name, type;
            double aporte,duracion,inventario,cantidad;
    public:
            Ingredientes(string,string,double,double,double);
            void setName(string);
            string getName();
            void setType(string);
            string getType();
            void setAporte(double);
            double getAporte();
            void setDuracion(double);
            double getDuracion();
            void setInventario(double);
            double getInventario();
            void setCantidad(double);
            double getCantidad();
};

#endif