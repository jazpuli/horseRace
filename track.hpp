#ifndef TRACK_H
#define TRACK_H

#include <iostream>
#include "horse.hpp"

class Track {
        private:
        int length;
	int horseNum;
	Horse *horses;
        
	public:
	Track();
	bool isWinner();
	void printTrack();
	void moveHorses();
	void start();
	void getUserInput();
};


#endif
