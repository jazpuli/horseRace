//horse.hpp
#ifndef HORSE_H
#define HORSE_H

#include <iostream>

class Horse {

	private: 
	int position;

	public:
	Horse();
	Horse(int position);
	void move();
	void setPosition(int position);
	int getPosition();

};


#endif
