#pragma once

#include <string>

class Ort
{
	int m_x;
	int m_y;

	std::string m_name;

public:
	Ort(int x, int y, std::string name);
	Ort();
	~Ort();

	int getX();
	int getY();
	std::string getName();

};

