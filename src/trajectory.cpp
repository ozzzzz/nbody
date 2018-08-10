//
// Created by Bogdan Neterebskii on 05/08/2018.
//

#include "trajectory.h"
#include <fstream>
#include <iostream>
#include <string>

void Trajectory::toFile(int filepath) {
    ofstream fs;
    fs.open("/tmp/traj/" + to_string(filepath) + ".txt");
    for (int i = 0; i < this->iterations; ++i) {
        fs << this->traj[i].to_string() << endl;
    }
    fs.close();
};

void Trajectory::addTraj(int iteration, v3 x) {
    this->traj[iteration] = x;
};