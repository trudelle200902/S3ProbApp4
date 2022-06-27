#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

class Rectangle: public Forme
{
protected:
	int LHorizontal;
	int LVertical;
	

public:
	Rectangle(int ancx=0, int ancy=0,int dimx=1,int dimy=1);
	double aire();
  virtual void afficher(ostream & s);
  void setDimensionsR(int dimx, int dimy);
};
#endif
