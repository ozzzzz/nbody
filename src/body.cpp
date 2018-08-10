//
// Created by Bogdan Neterebskii on 02/08/2018.
//

#include "body.h"

void show_positions(Body *bodies, int n) {
    for (int i = 0; i < n; ++i) {
        bodies[i].position.show();
    }
}
