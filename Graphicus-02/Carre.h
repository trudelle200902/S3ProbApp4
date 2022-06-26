#ifndef CARRE_H
#define CARRE_H

#include "Rectangle.h"



class Carre:public Rectangle
{
private:
	cote;
public:
	Carre(int c=1);
	void DimensionsCarre(int c);
}
