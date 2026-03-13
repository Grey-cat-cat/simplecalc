#ifndef C_H
#define C_H

template <typename T>
T Add(T a, T b) {
    return a + b;
}

template <typename T>
T Sub(T a, T b) {
    return a - b;
}

template <typename T>
T Mult(T a, T b) {
    return a * b;
}

int Div(float a, float b);

#endif