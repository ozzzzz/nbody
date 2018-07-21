//
// Created by Bogdan Neterebskii on 21/07/2018.
//

#ifndef NBODY_VECTOR_H
#define NBODY_VECTOR_H

#include <math.h>
#include <stdio.h>

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
        printf("(%f, %f, %f)\n", this->x, this->y, this->z);
    }

};

v3 add(v3 a, v3 b) {
    return v3(a.x + b.x, a.y + b.y, a.z + b.z);
}

v3 sub(v3 a, v3 b) {
    return v3(a.x - b.x, a.y - b.y, a.z - b.z);
}

v3 mul(v3 a, v3 b) {
    return v3(a.x * b.x, a.y * b.y, a.z * b.z);
}

v3 div(v3 a, v3 b) {
    return v3(a.x / b.x, a.y / b.y, a.z / b.z);
}

float distance(v3 a, v3 b) {
    v3 diff = sub(a, b);
    v3 squared = mul(diff, diff);
    return sqrt(squared.x + squared.y + squared.z);
}

#endif //NBODY_VECTOR_H
