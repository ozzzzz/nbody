#include <iostream>

#include "utils.h"
#include <utility>

int main() {
    Body *x1 = new Body(v3(0), v3(0.0), EARTH_MASS);
    Body *x2 = new Body(v3(384400000.0, 0.0, 0.0), v3(0.5,-0.5,-0.5), MOON_MASS);
    x2->move(0.1);
    v3 a = v3(1.0, 2.0, 0.0);
    v3 b = v3(1.0, 5.0, 4.0);

    v3 c = add(a, b);


    std::cout << (x2->position).x << std::endl;
    std::cout << (x2->position).y << std::endl;
    std::cout << (x2->position).z << std::endl;

    accelerate_between(*x1, *x2).first.show();
    accelerate_between(*x1, *x2).second.show();
//    std::cout << (c.y) << std::endl;
//    std::cout << (c.z) << std::endl;
    return 0;
}