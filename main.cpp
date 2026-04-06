#include <iostream>
#include "Dichotomy.h"

using namespace std;

int main() {

    double a = 0.4;
    double b = 1.0;
    double eps = 0.0001;

    Dichotomy* obj = new Dichotomy();

    obj->setA(a);
    obj->setB(b);
    obj->setEps(eps);

    cout << "Dichotomy method: " << obj->solveDichotomy() << endl;
    cout << "Newton method: " << obj->solveNewton() << endl;

    delete obj;

    return 0;
}