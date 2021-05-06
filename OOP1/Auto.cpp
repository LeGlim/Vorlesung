#include "Auto.h"
#include "Ort.h"
#include <math.h>

Auto::Auto(std::string name, Ort *startOrt, int durchschnittsVerbrauch)
{
	m_name = name;
	m_durchschnittsVerbrauch = durchschnittsVerbrauch;

	m_ort = startOrt;
}


Auto::~Auto()
{
}

void Auto::drive(Ort *toLocation)
{
	int distx = toLocation->getX() - m_ort->getX();
	if (distx < 0) {
		distx *= -1;
	}
	int disty = toLocation->getY() - m_ort->getY();
	if (disty < 0) {
		disty *= -1;
	}

	m_strecke += sqrt((distx * distx) + (disty * disty));
	m_ort = toLocation;
}


int Auto::getStrecke()
{
	return m_strecke;
}

int Auto::getVerbrauch()
{
	return m_durchschnittsVerbrauch * m_strecke / 100;
}
