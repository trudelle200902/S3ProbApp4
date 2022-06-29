/********
 * Fichier: canevas.cpp
 * Auteurs: couj0902-trum1304
 * Date: 28 juin 2022 (derniere modification)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h.
********/

#include "canevas.h"
#include <iostream>

Canevas::Canevas()
{
	couches[0].setEtat(Active);
	for(int i=1;i<MAX_COUCHES;i++)
	{
		couches[i].Etat=Initialisee;
	}
	IndexCoucheActive=0;
}

Canevas::~Canevas()
{
	
}

bool Canevas::reinitialiser()
{
	for(int i=0;i<MAX_COUCHES;i++)
	{
		couches[i].Reinitialiser();
	}
	couches[0].setEtat(Active);
	for(int i=1;i<MAX_COUCHES;i++)
	{
		couches[i].Etat=Initialisee;
	}
	IndexCoucheActive=0;
  return true;
}

bool Canevas::activerCouche(int index)
{
	
	if(index<0)
	{
		couches[0].setEtat(Active);
		couches[IndexCoucheActive].setEtat(Inactive);
		IndexCoucheActive=0;
		return false;
	}
	else if(index>=MAX_COUCHES)
	{
		couches[MAX_COUCHES-1].setEtat(Active);
		couches[IndexCoucheActive].setEtat(Inactive);
		IndexCoucheActive=MAX_COUCHES-1;
		return false;
	}
	else
	{
  couches[IndexCoucheActive].setEtat(Inactive);
	couches[index].setEtat(Active);
	IndexCoucheActive=index;
	
  return true;
  }
}

/*bool Canevas::cacherCouche(int index)
{
	
  return true;
}*/

bool Canevas::ajouterForme(Forme *p_forme)
{
	return couches[IndexCoucheActive].AjoutForme(p_forme);
}

bool Canevas::retirerForme(int index)
{
	Forme* Element=couches[IndexCoucheActive].RetraitForme(index);
	if(Element==nullptr)
	{
		return false;
	}
	delete Element;
	return true;
}

double Canevas::aire()
{
	double AireCanevas=0.0;
	double ACanevas=0.0;
	for (int i=0;i<MAX_COUCHES;i++)
	{
		ACanevas=couches[i].aire();
  	AireCanevas=ACanevas+AireCanevas;
  }
  return AireCanevas;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return couches[IndexCoucheActive].Translate(deltaX,deltaY); 
}

void Canevas::afficher(ostream & s)
{
	for(int i=0;i<MAX_COUCHES;i++)
	{
		s<<"----- Couche "<< i<<"\n";
		couches[i].AfficherContenu(s);
	}
}

Couche* Canevas::getCouche(int index)
{
	return &couches[index];
}
