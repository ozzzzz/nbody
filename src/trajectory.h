//
// Created by Bogdan Neterebskii on 02/08/2018.
//

#ifndef NBODY_TRAJECTORY_H
#define NBODY_TRAJECTORY_H

#include "vector.h"
//#include <string>

using namespace std;

class Trajectory {
public:
    v3 *traj;
    int iterations;

    Trajectory(int iters) {
        this->iterations = iters;
        this->traj = new v3 [iters];
    };

    ~Trajectory() {
        delete [] this->traj;
    };

    void addTraj(int iteration, v3 x);

//    void show() {
//        for (int i = 0; i < this->iterations; ++i) {
//            this->traj[i].show();
//        }
//    }

    void toFile(int filepath);

//    void toFileSparsed(int filepath, int);



};

#endif //NBODY_TRAJECTORY_H
