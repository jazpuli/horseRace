#include "track.hpp"

#include <iostream>

void Track::getUserInput() {
	horseNum = 0;
	while (horseNum < 2) {
		std::cout << "\nEnter number of horses: \n";
		std::cin >> horseNum;
		if (horseNum < 2) {
			std::cout << "Number of horses cannot be less than 2, try again!";
		}
	}
	    
	length = 0;
	while (length < 2) {
		std::cout << "\nEnter track's length: \n";
		std::cin >> length;
		if (length < 2) {
			std::cout << "The track's length cannot be less than 2, try again!";
		}
	}
}

Track::Track() {
	getUserInput();
	horses = new Horse[horseNum];
}
        
bool Track::isWinner() {
	for (int i = 0; i < horseNum; i++) {
		if (horses[i].getPosition() >= length) {
			std::cout << "Horse " << (i + 1) << " won, yay!\n";
			 return true;
		}
	}
	return false;
}

void Track::printTrack() {
	for (int i = 0; i < horseNum; i++) {
		for (int j = 0; j < length; j++) {
			if (horses[i].getPosition() == j) {
				std::cout << (i + 1);
			} else {
				std::cout << ".";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void Track::moveHorses() {
	for (int i = 0; i < horseNum; i++) {
		horses[i].move();
	}
}

void Track::start() {
	std::cout << std::endl;
	while(!isWinner()) {
		moveHorses();
		printTrack();
	}
}
