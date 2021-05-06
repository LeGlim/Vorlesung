#pragma once

#include <string>
#include "Ort.h"


class Auto
{
	std::string m_name;
	int m_x;
	int m_y;
	Ort *m_ort;
	int m_durchschnittsVerbrauch;
	int m_strecke;

public:
	Auto(std::string name, Ort *ort, int durchschnittsVerbrauch);
	~Auto();

	void drive(Ort *toLocation);
	int getStrecke();
	int getVerbrauch();
};

