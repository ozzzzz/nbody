//
// Created by Bogdan Neterebskii on 21/07/2018.
//

#ifndef NBODY_ACCELERATION_H
#define NBODY_ACCELERATION_H

#include <utility>
#include "vector.h"
#include "body.h"

using namespace std;

/**
    Calculates all accelerations for the bodies.
    While calculations matrix NxN constructed, thus complexity of the algorithm is O(N^2).

    @param array of bodies, number of bodies, pointer for resulting accelerations
    @return void
*/
void accelerations(Body *bodies, int n, v3 *accs);

/**
    Calculates acceleration for the two bodies.

    @param two bodies
    @return pair with two accelerations corresponding for the bodies
*/
pair<v3, v3> accelerations_between(Body first, Body second);

#endif //NBODY_ACCELERATION_H
