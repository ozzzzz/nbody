//
// Created by Bogdan Neterebskii on 02/08/2018.
//

#include <utility>
#include "simulation.h"
#include "acceleration.h"
//#include "trajectory.h"
//#include "vector.h"
#include <stdio.h>

using namespace std;

void simulate(Body *bodies, int n, float dt, int iterations, Trajectory *trajs) {

    v3 *accs = new v3[n];

    for (int i = 0; i < iterations; ++i) {
        accelerations(bodies, n, accs);

//        show_positions(bodies, n);

        for (int j = 0; j < n; ++j) {
            trajs[j].addTraj(i, bodies[j].position);
            bodies[j].move(dt);
            bodies[j].accelerate(dt, accs[j]);
        }
    }




}