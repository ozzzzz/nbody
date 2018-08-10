//
// Created by Bogdan Neterebskii on 21/07/2018.
//

#ifndef NBODY_BODY_H
#define NBODY_BODY_H

#include <stdio.h>
#include "vector.h"

class Body {
public:

    Body(v3 position, v3 velocity, float mass) {
       this->position = position;
       this->velocity = velocity;
       this->mass = mass;
    }

    v3 position;

    v3 velocity;

    float mass;

    void move(float dt) {
        v3 new_position = add(this->position, mul( v3(dt), this->velocity) );
        this->position = new_position;
    }

    void accelerate(float dt, v3 acceleration) {
        this->velocity = add(this->velocity, mul(v3(dt), acceleration));
    }

};

void show_positions(Body *bodies, int n);

#endif //NBODY_BODY_H
