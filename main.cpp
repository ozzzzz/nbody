#include <iostream>
#include "utils.h"
#include <utility>
//#include <string>

int main() {

    int iterations = 10000;
    Body *x1 = new Body(v3(0), v3(0.0), EARTH_MASS);
    Body *x2 = new Body(v3(384400000.0, 0.0, 0.0), v3(0, 1.02305556, 0), MOON_MASS);
//    x2->move(0.1);
//    v3 a = v3(1.0, 2.0, 0.0);
//    v3 b = v3(1.0, 5.0, 4.0);
//
//    v3 c = add(a, b);
    Body *bodies;
//    = new Body [2];
    bodies[0] = *x1;
    bodies[1] = *x2;

//    Trajectory **trajs = new Trajectory*[2];
    Trajectory *trajs = static_cast<Trajectory*>(operator new[] (2 * sizeof(Trajectory)));
    for (int i = 0; i < 2; ++i) {
        new (trajs + i) Trajectory(iterations);
    }


    simulate(bodies, 2, 100, iterations, trajs);

    for (int j = 0; j < 2; ++j) {
//        trajs[j].show();

//        cout << "!!!";
        // big big problem
//        std::string s = "asd";
        trajs[j].toFile(j);
    };

//    string aaa = "Hello, world!";
//    std::cout << str << std::endl;
    delete x1;
    delete x2;
//    delete [] bodies;
//    delete [] trajs;

    return 0;
}

