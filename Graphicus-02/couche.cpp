/********
 * Fichier: couche.cpp
* Auteurs: couj0902-trum1304
 * Date: 28 juin 2022 (derniere modification)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h.
********/

#include "couche.h"
using namespace std;


Couche::Couche()
{
	//nForme=new Vecteur<Forme>;
}

Couche::~Couche()
{
	//delete nForme;
}

bool Couche::AjoutForme(Forme* point)
{
	if(Etat==Inactive)
	{
		return false;
	}
	IsEmpty=false;
	return nForme.insert(point);
}

Forme* Couche::RetraitForme(int index)
{
	if(Etat==Inactive)
	{
		return nullptr;
	}
	return nForme.remove(index);
}

Forme* Couche::FormeStockee(int index)
{
	return nForme.getElementAt(index);
}

double Couche::aire()
{
	if(Etat==Initialisee || nForme.isEmpty())
	{
		return 0.0;
	}
	
	double Atotale=0.0;
	double A=0.0;
	
	for(int i=0;i<(nForme.getSize());i++)
	{
		Forme* Element=nForme.getElementAt(i);
		A=Element->aire();
		Atotale=Atotale+A;
	}
	return Atotale;
}

bool Couche::Translate(int x, int y)
{
	if(nForme.getElementAt(0)==nullptr)
	{
		return false;
	}
	for(int i=0;i<(nForme.getSize());i++)
	{
		Forme* Element=nForme.getElementAt(i);
		Element->translater(x,y);
	}
	return true;
}

bool Couche::setEtat(DiffEtats EtatIn)
{
	if(EtatIn==Initialisee)
	{
		return false;
	}
	Etat=EtatIn;
	return true;
}

bool Couche::Reinitialiser()
{
	if(IsEmpty)
	{
		return false;
	}
	IsEmpty=true;
	Etat=Initialisee;
	nForme.clear();
	return true;
}
	
void Couche::AfficherContenu(ostream & s)
{
	if(IsEmpty)
	{
		s <<"Couche initialisee\n";
	}
	else if(nForme.isEmpty())
	{
		s<<"Couche vide\n";
	}
	else
	{ 
		nForme.afficher(s);
			
	}
}


