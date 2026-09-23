#include "maksimov.h"

// Сила тока: I = U / R
double current(double U, double R) {
    return U / R;
}

// Сопротивление проводника: R = U / I
double resistance(double U, double I) {
    return U / I;
}

// Мощность тока: P = U * I
double electricPower(double U, double I) {
    return U * I;
}
