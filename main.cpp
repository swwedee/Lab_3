#include <iostream>
#include "Dichotomy.h"

using namespace std;

int main() {

    double a = 0.4;
    double b = 1.0;
    double eps = 0.0001;

    Dichotomy obj; // без new/delete — простіше

    obj.setA(a);
    obj.setB(b);
    obj.setEps(eps);

    cout << "Dichotomy method: " << obj.solveDichotomy() << endl;

    // будь-яке початкове значення (але краще > 0)
    double x0 = 0.8;
    cout << "Newton method: " << obj.solveNewton(x0) << endl;

    return 0;
}