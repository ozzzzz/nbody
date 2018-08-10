//
// Created by Bogdan Neterebskii on 21/07/2018.
//

#ifndef NBODY_VECTOR_H
#define NBODY_VECTOR_H

#include <math.h>
#include <stdio.h>
#include <string>

class v3 {
public:
    v3() = default;

    v3(float def) {
        this->x = def;
        this->y = def;
        this->z = def;
    };

    v3(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    };

    float x;
    float y;
    float z;

    void show() {
        printf("%f %f %f\n", this->x, this->y, this->z);
    };

    std::string to_string() {
        return std::to_string(this->x) + " " + std::to_string(this->y) + " " + std::to_string(this->z);
    };

};

v3 add(v3 a, v3 b);

v3 sub(v3 a, v3 b);

v3 mul(v3 a, v3 b);

v3 div(v3 a, v3 b);

float distance(v3 a, v3 b);

#endif //NBODY_VECTOR_H
