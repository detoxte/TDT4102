#pragma once

class Car {
public:
	Car(int freeSeats) : freeSeats{ freeSeats } {};

	bool hasFreeSeats() const;
	void reserveFreeSeat();
	int freeSeats;
};