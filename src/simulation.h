//
// Created by Bogdan Neterebskii on 02/08/2018.
//

#ifndef NBODY_SIMULATION_H
#define NBODY_SIMULATION_H


#include "body.h"
#include "trajectory.h"

void simulate(Body *bodies, int n, float dt, int iterations, Trajectory *trajs);

#endif //NBODY_SIMULATION_H
