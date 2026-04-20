#include <iostream>
#include "Dichotomy.h"

using namespace std;

int main() {

    double a = 0.4;
    double b = 1.0;
    double eps = 0.0001;

    Dichotomy obj;

    obj.setA(a);
    obj.setB(b);
    obj.setEps(eps);

    int iterD, iterN;

    double rootD = obj.solveDichotomy(iterD);
    cout << "Dichotomy method: " << rootD << endl;
    cout << "Dichotomy iterations: " << iterD << endl;

    double x0 = 0.8;
    double rootN = obj.solveNewton(x0, iterN);

    cout << "Newton method: " << rootN << endl;
    cout << "Newton iterations: " << iterN << endl;

    return 0;
}