#include "Cell.h"

Cell::Cell(int x, int y, int cost)
	:m_xcoord(x), m_ycoord(y), m_cost(cost)
{
	east.m_direction = "east";
	west.m_direction = "west";
	north.m_direction = "north";
	south.m_direction = "south";
}

int Cell::GetCoordinates(){return }