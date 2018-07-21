//
// Created by Bogdan Neterebskii on 21/07/2018.
//

#ifndef NBODY_FORCE_H
#define NBODY_FORCE_H

#include <utility>
#include "vector.h"
#include "body.h"

void calc_forces(Body *bodies, v3 *forces);

std::pair<v3, v3> accelerate_between(Body first, Body second);

#endif //NBODY_FORCE_H
