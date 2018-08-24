#ifndef INGREDIENTES_H
#define INGREDIENTES_H

#include <string>
using namespace std;

class Ingredientes{
    private:
            string name, type;
            int aporte,duracion;
    public:
            void setName(string);
            string getName();
            void setType(string);
            string getType();
            void setAporte(int);
            int getAporte();
            void setDuracion(int);
            int getDuracion();
};

#endif