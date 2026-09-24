#include "krivov.h"
#include <cmath>

// Будущая цена товара: цена * (1 + инф/100)^n
double futurePrice(double price, double inf, int n) {
    return price * pow(1 + inf / 100.0, n);
}

// Покупательная способность: сумма / (1 + инф/100)^n
double purchasingPower(double sum, double inf, int n) {
    return sum / pow(1 + inf / 100.0, n);
}
