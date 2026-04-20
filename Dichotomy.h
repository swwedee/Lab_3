#ifndef DICHOTOMY_H
#define DICHOTOMY_H

class Dichotomy {
private:
    double a, b;
    double eps;

    double f(double x);
    double df(double x);

public:
    void setA(double a);
    void setB(double b);
    void setEps(double eps);

    double solveDichotomy(int &iterations);
    double solveNewton(double x0, int &iterations);
};

#endif