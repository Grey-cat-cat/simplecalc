#include <iostream>

template <typename T>
T Add(T a, T b) {
    return (a + b);
}

template <typename T>
T Sub(T a, T b) {
    return (a - b);
}

template <typename T>
T Mult(T a, T b) {
    return (a * b);
}

int Div(float a, float b) {
    if (b == 0.0) {
        throw 0;
    }
    return (a / b);
}
