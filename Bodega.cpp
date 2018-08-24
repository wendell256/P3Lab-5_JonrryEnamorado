#include "Bodega.h"
#include <iostream>
#include <vector>
using namespace std;

Bodega::Bodega(){

}

void Bodega::addIngrediente(Ingredientes* nuevo){
    Ingredients.push_back(nuevo);
}

void Bodega::printIng(){
    for(int i=0;i<Ingredients.size();i++){
        cout<<i+1<<")"<<Ingredients[i]->getName()<<endl;
    }
}

void Bodega::addPlato(Platos* nuevo){
    menu.push_back(nuevo);
}

void Bodega::printPlat(){
    for(int i=0;i<menu.size();i++){
        cout<<i+1<<")"<<menu[i]->getName()<<endl;
    }
}
