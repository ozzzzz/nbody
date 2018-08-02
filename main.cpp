#include <iostream>

#include "utils.h"
#include <utility>

int main() {
    Body *x1 = new Body(v3(0), v3(0.0), EARTH_MASS);
    Body *x2 = new Body(v3(384400000.0, 0.0, 0.0), v3(0.5,-0.5,-0.5), MOON_MASS);
//    x2->move(0.1);
//    v3 a = v3(1.0, 2.0, 0.0);
//    v3 b = v3(1.0, 5.0, 4.0);
//
//    v3 c = add(a, b);
    Body *bodies;
//    = new Body [2];
    bodies[0] = *x1;
    bodies[1] = *x2;

    v3 *accs = new v3[2];

    accelerations(bodies, 2, accs);

    accs[0].show();
    accs[1].show();

//    accelerations_between(*x1, *x2).first.show();
//    accelerations_between(*x1, *x2).second.show();
//    std::cout << (c.y) << std::endl;
//    std::cout << (c.z) << std::endl;
    return 0;
}