//
// Created by Bogdan Neterebskii on 21/07/2018.
//
#include <utility>
#include "acceleration.h"
#include "constants.h"
#include "vector.h"
#include <stdio.h>

using namespace std;


void accelerations(Body *bodies, int n, v3 *accs){
    // initialize matrix
    v3** matrix = new v3*[n];
    for (int i = 0; i < n; ++i)
        matrix[i] = new v3[n];
    // fill the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (i == j) {
                matrix[i][j] = v3(0);
            } else {
                // accelerations_between calculates both of accelerations,
                // thus we have not calculate full matrix, only 1/2 of it.
                pair<v3, v3> acc = accelerations_between(bodies[i], bodies[j]);
                matrix[i][j] = acc.first;
                matrix[j][i] = acc.second;
            }
        }
    }
    // fill resulting array
    for (int i = 0; i < n; ++i) {
        v3 sum = v3(0);
        for (int j = 0; j < n; ++j) {
            sum = add(sum, matrix[i][j]);
        }
        accs[i] = sum;
    }
    // delete matrix
    for (int i = 0; i < n; ++i)
        delete [] matrix[i];
    delete [] matrix;
};


pair<v3, v3> accelerations_between(Body a, Body b) {
    float dist = distance(a.position, b.position);

    // if bodies is too close make accelerations equal to zero
    if (dist < EPSILON) {
        return make_pair(v3(0.0), v3(0.0));
    } else {
        // common = G / (r^3)
        v3 common = v3(G / (dist * dist * dist));
        // aAcceleration = G * m_b * (b - a) / r^3
        v3 aAcceleration = mul(common, mul(b.mass, sub(b.position, a.position)));
        // bAcceleration = G * m_a * (a - b) / r^3
        v3 bAcceleration = mul(common, mul(a.mass, sub(a.position, b.position)));

        return make_pair(aAcceleration, bAcceleration);
    }
};


