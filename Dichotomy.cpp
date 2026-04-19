#include <iostream>
#include <cmath>
#include "Dichotomy.h"

using namespace std;

double Dichotomy::f(double x) {
    return x + sqrt(x) + cbrt(x) - 2.5;
}

double Dichotomy::df(double x) {
    return 1 + 1/(2*sqrt(x)) + 1/(3*pow(x, 2.0/3.0));
}

void Dichotomy::setA(double a) {
    this->a = a;
}

void Dichotomy::setB(double b) {
    this->b = b;
}

void Dichotomy::setEps(double eps) {
    this->eps = eps;
}





double Dichotomy::solveDichotomy() {

    if (f(a) * f(b) > 0) {
        cout << "No root on this interval" << endl;
        return 0;
    }

    double c;

    while (abs(b - a) > eps) {
        c = (a + b) / 2;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    return (a + b) / 2;
}




double Dichotomy::solveNewton(double x) {

    
    if (x <= 0) x = 0.1;

    for (int i = 0; i < 1000; i++) {

        double fx = f(x);
        double dfx = df(x);

        
        if (abs(dfx) < 1e-8) {
            cout << "Derivative too small!" << endl;
            return x;
        }

        double x1 = x - fx / dfx;

        if (x1 <= 0)
            x1 = x / 2;

        if (abs(x1 - x) < eps)
            return x1;

        x = x1;
    }

    cout << "Newton did not converge" << endl;
    return x;
}
