#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"


class Cercle:public Forme
{
protected:
	int rayon;
public:
	Cercle(int ancx=0,int ancy=0,int r=1);
	double aire();
  void afficher(ostream & s);
  void setDimensionsC(int r);
};
#endif
