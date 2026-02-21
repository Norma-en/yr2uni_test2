#ifndef DISK_H
#define DISK_H

class Disk {
public:
	// Member variables
	double x, y, radius;

	// Constructor
	Disk(double x, double y, double r);

	// Member functions
	void move(double dx, double dy);
	double distance(Disk& d);
};

#endif // !DISK_H
