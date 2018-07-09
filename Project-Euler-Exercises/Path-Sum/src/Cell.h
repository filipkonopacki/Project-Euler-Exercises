#pragma once
#include <string>
#include <iostream>

class Cell
{
private:
	/*cell features
		m_xcoord - x coordinate
		m_ycoord - y coordinate
		m_value - cost for traveling to that cell
	*/
	int m_xcoord, m_ycoord,m_cost;

	/*evaluation factors:
		g - distance for traveling from the initial state to the goal state
		h - heuristic estimation of the cost remaining to the goal state
		f - heuristic evaluation factor, equal to sum of g and h
	*/
	unsigned int g, h, f;

	struct destination 
	{
		std::string m_direction;
		Cell* m_destination_ptr = nullptr;
	}west,east,north,south;
	

public:
	Cell(int x, int y, int value);
	// getter section
	int GetCoordinates();
	int GetCost();
	unsigned int GetDistance();
	unsigned int GetHeuristic();
	unsigned int GetEvaluationFactor();
	
	
	
};