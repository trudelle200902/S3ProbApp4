#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"


class cercle:public forme
{
private:
	rayon;
public:
	Cercle(int r=1);
	double aire();
  	void afficher(ostream & s);
  	void DimensionsCercle(int r);
}
