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
        cout << "No root in interval" << endl;
        return 0;
    }

    double c;
    int iterations = 0;

    while (abs(b - a) > eps) {
        c = (a + b) / 2;
        iterations++;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << "Dichotomy iterations: " << iterations << endl;

    return (a + b) / 2;
}


double Dichotomy::solveNewton(double x0) {

    double x = x0;
    if (x <= 0) x = 0.1;

    int iterations = 0;

    while (true) {

        iterations++;

        double fx = f(x);
        double dfx = df(x);

        double x1 = x - fx / dfx;

        if (abs(x1 - x) < eps) {
            cout << "Newton iterations: " << iterations << endl;
            return x1;
        }

        x = x1;
    }
}
