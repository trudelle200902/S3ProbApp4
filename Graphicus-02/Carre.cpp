/********
 * Fichier: Carre.cpp
 * Auteurs: couj0902-trum1304
 * Date: 26 juin 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    Carre.h. Carre.h est une classe enfant de Rectangle.h
********/

#include "Carre.h"


	Carre::Carre(int ancx,int ancy,int c):
	Forme(ancx,ancy)
	{
		LHorizontal=c;
		LVertical=c;
	}
	
	void Carre::setDimensionsS(int c)
	{
		LHorizontal=c;
		LVertical=c;
	}
	
	void afficher(ostream & s)
	{
		cout<<"Carre(x="<<ancrage.x<<", y="<<ancrage.y<<", c="<<LVertical<<", aire="<<aire()<<")";
	}
