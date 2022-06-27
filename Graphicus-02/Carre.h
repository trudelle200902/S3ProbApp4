#ifndef CARRE_H
#define CARRE_H

#include "Rectangle.h"



class Carre:public Rectangle
{
private:
	int cote;
public:
	Carre(int ancx=0,int ancy=0,int c=1);
	void setDimensionsS(int c);
	void afficher(ostream & s);
};
#endif
