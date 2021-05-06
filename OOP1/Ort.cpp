#include "Ort.h"
#include <string>

Ort::Ort(int x, int y, std::string name)
{
	m_x = x;
	m_y = y;
	m_name = name;
}

Ort::Ort()
{
	m_x = 0;
	m_y = 0;
}

Ort::~Ort()
{
}


int Ort::getX()
{
	return m_x;
}

int Ort::getY()
{
	return m_y;
}

std::string Ort::getName()
{
	return m_name;
}
