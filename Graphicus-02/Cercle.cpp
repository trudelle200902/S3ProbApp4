/********
 * Fichier: Cercle.cpp
 * Auteurs: couj0902-trum1304
 * Date: 26 juin 2022 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    Cercle.h. Cercle.h est une classe enfant de forme.h.
********/

#include "Cercle.h"
#define Pi 3.14159265

Cercle(int r1)
{
	rayon=r1;
}

double aire()
{
	Aire=rayon*rayon*Pi;
}

void afficher(ostream & s)
{
}

void DimensionsCercle(int r2)
{
	rayon=r2;
}
