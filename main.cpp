#include <iostream>
#include "Dichotomy.h"

using namespace std;

int main() {

    double a = 0.4;
    double b = 1.0;
    double eps = 0.0001;

    Dichotomy obj; // ❗ тільки ОДИН раз

    obj.setA(a);
    obj.setB(b);
    obj.setEps(eps);

    double rootD = obj.solveDichotomy(); // ❗ без параметрів
    cout << "Dichotomy root: " << rootD << endl;

    double x0 = 0.8;
    double rootN = obj.solveNewton(x0); // ❗ тільки 1 параметр
    cout << "Newton root: " << rootN << endl;

    return 0;
}