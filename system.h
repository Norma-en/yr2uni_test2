#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <iostream>
#include <vector>
#include <random>
#include <cmath>
#include "disk.h"

class System {
public:
	// Member variables
	std::vector<Disk> disks;
	double bosSize;
	double displacement;
	std::mt19937 gen;
	std::uniform_real_distribution<doubles> dist;

	// System constructor
	System(int N, double displacement, double radius, double box_size, int seed);

	// Member functions
	void step();
	void save(const std::string &filename);
	bool overlap(int i);
	void enforceBoundaries(Disk & disk);
	double uniform(double min, double max);
};

#endif
