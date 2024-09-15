//horse.cpp
#include "horse.hpp"

#include <cstdlib> 

//constructors 
Horse::Horse() {
	    position = 0;
}

Horse::Horse(int pos) {
	    this->position = pos;
}
void Horse::move() {
	position += rand() % 2;
}

void Horse::setPosition(int pos) {
	    this->position = pos;
}

int Horse::getPosition() {
	    return position;
}
