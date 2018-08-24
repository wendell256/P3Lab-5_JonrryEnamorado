#ifndef CLIENTES_H
#define CLIENTES_H
#include <string>
using namespace std;
class Clientes{
    private:
            string name;
            double platosc,evaluacionm,dinerog;
    public:
            Clientes(string);
            string getName();
            void setEvaluacionm(double);
            void setDinerog(double);
            double getDinerog();
            double getEvaluacionm();
};
#endif