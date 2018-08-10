//
// Created by Bogdan Neterebskii on 02/08/2018.
//

#include "vector.h"

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