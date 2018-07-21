//
// Created by Bogdan Neterebskii on 21/07/2018.
//
#include <utility>
#include "force.h"
#include "constants.h"
#include "vector.h"
#include <stdio.h>

//void calc_forces(Body *bodies, v3 *forces){

//};

std::pair<v3, v3> accelerate_between(Body a, Body b) {
    float dist = distance(a.position, b.position);
    printf(">> %f", dist);
    if (dist < EPSILON) {
        return std::make_pair(v3(0.0), v3(0.0));
    } else {
        v3 common = v3(G / (dist * dist));
        printf(">>> ");
        common.show();
        v3 b_to_a = mul(common, mul(b.mass, div(sub(b.position, a.position), v3(dist))));
        v3 a_to_b = mul(common, mul(a.mass, div(sub(a.position, b.position), v3(dist))));
        return std::make_pair(b_to_a, a_to_b);
    }

    v3 diff = sub(b.position, a.position);

    v3 pos_a = a.position;
};


