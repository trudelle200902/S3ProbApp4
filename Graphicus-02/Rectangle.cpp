/********
 * Fichier: forme.cpp
 * Auteurs: couj0902-trum1304
 * Date: 26 juin 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    Rectangle.h. Rectangle.h est une classe enfant de forme.h.
********/

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int ancx,int ancy,int dimx,int dimy)
:Forme(ancx,ancy)
{
	LHorizontal=dimx;
	LVertical=dimy;
}

double Rectangle::aire()
{
	return (double)(LHorizontal*LVertical);
}

void Rectangle::afficher(ostream & s)
{
	s<<"Rectangle(x="<<ancrage.x<<", y="<<ancrage.y<<", l="<<LVertical<<", h="<<LHorizontal<<", aire="<<aire()<<")\n";
}

void Rectangle::setDimensionsR(int dimx, int dimy)
{
	LHorizontal=dimx;
	LVertical=dimy;
}

