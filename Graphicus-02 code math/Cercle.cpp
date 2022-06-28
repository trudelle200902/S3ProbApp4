/********
 * Fichier: Cercle.cpp
 * Auteurs: couj0902-trum1304
 * Date: 26 juin 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    Cercle.h. Cercle.h est une classe enfant de forme.h.
********/

#include "Cercle.h"
#define Pi 3.14

Cercle::Cercle( int ancx, int ancy,int r)
:Forme(ancx,ancy)
{
	rayon=r;
}

double Cercle::aire()
{
	return double(rayon*rayon)*Pi;
}

void Cercle::afficher(ostream & s)
{
		s<<"Cercle(x="<<ancrage.x<<", y="<<ancrage.y<<", r="<<rayon<<", aire="<<aire()<<")\n";
}

void Cercle::setDimensionsC(int r)
{
	rayon=r;
}
