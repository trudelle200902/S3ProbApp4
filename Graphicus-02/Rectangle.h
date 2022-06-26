#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

class Rectangle: public forme
{
protected:
	LHorizontal;
	LVertical;
	Aire;

public:
	Rectangle(int x=1,int y=1);
	double aire();
  void afficher(ostream & s);
  void DimensionsRectangle(int x, int y);
}
	
