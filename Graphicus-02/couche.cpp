/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
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

	for(int i=0;i<(nForme.getSize());i++)
	{
		Forme* Element=nForme.getElementAt(i);
		if(Element==nullptr)
		{
			return false;
		}
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


