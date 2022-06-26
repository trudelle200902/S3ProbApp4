/********
 * Fichier: forme.cpp
 * Auteurs: couj0902-trum1304
 * Date: 26 juin 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    Rectangle.h. Rectangle.h est une classe enfant de forme.h.
********/

#include "Rectangle.h"

Rectangle::Rectangle(int x1,int y1)
{
	LHorizontal=x1;
	LVertical=y1;
}

double Rectangle::aire()
{
	Aire=LHorizontal*LVertical;
}

void afficher(ostream & s)
{
	
}

void DimensionsRectangle(int x2, int y2)
{
	LHorizontal=x2;
	LVertical=y2;
}

