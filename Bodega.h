#ifndef BODEGA_H
#define BODEGA_H

#include "Ingredientes.h"
#include "Platos.h"
#include <vector>
using namespace std;

class Bodega{
        
    public:
        vector<Platos*> menu;
        Bodega();
        vector<Ingredientes*> Ingredients;
        void addIngrediente(Ingredientes*);
        void addPlato(Platos*);
        void printPlat();
        void printIng();
};
#endif