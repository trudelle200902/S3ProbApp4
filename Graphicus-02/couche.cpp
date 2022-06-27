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
	nForme=new Vecteur<Forme>;
}

Couche::~Couche()
{
	delete nForme;
}

bool Couche::AjoutForme(Forme* point)
{
	IsEmpty=FALSE;
	return nForme->insert(point);
}

Forme* Couche::RetraitForme(int index)
{
	return nForme->remove(index);
}

Forme* Couche::FormeStockee(int index)
{
	return nForme->getElementAt(index);
}

double Couche::aire()
{
	double Atotale=0.0;
	double A=0.0;
	for(int i=0;i<(nForme->getSize());i++)
	{
		Forme_i*=nForme->getElementAt(i);
		A=Forme_i->Aire();
		Atotale=Atotale+A;
	}
	return Atotale;
}

bool Couche::Translate(int x, int y)
{

	for(int i=0;i<(nForme->getSize());i++)
	{
		Forme* Element=nForme->getElementAt(i);
		if(Element==nullptr)
		{
			return FALSE;
		}
		Element->Translater(x,y);
	}
	return TRUE;
}

bool Couche::setEtat(DiffEtats EtatIn)
{
	Etat=EtatIn;
}

bool Couche::Reinitialiser()
{
	IsEmpty=FALSE;
	Etat=Initalisee;
	nForme->clear();
	
}
	
void Couche::AfficherContenu(ostream & s)
{
	if(IsEmpty)
	{
		cout << "Couche vide"<< endl;
	}
	else
	{ 
		for(int i=0;i<(nForme->getSize());i++)
		{
			nForme->getElementAt(i)->Afficher(ostream & s);
		}
	}
}

