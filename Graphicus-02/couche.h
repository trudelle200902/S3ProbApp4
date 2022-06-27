/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include "Vecteur.h"
#include "forme.h"

using namespace std;

enum DiffEtats
{
	Initialisee,
	Active,
	Inactive
};

class Couche
{
public:
	Couche();
	~Couche();
	bool AjoutForme(Forme* point);
	Forme* RetraitForme(int index);
	Forme* FormeStockee(int index);
	double aire();
	bool Translate(int x, int y);
	bool Reinitialiser();
	bool setEtat(DiffEtats EtatIn);
	void AfficherContenu(ostream & s);
	DiffEtats Etat=Initialisee;
	
private:
	Vecteur<Forme>* nForme;
	bool IsEmpty=false;
};

#endif
