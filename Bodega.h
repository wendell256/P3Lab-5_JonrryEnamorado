#ifndef BODEGA_H
#define BODEGA_H

#include "Ingredientes.h"
#include <vector>
using namespace std;

class Bodega{
    private:
        vector<Ingredientes*> Ingredients;
    public:
        void addIngrediente(Ingredientes);
        vector<Ingredientes*> getIngredientes();

};
#endif