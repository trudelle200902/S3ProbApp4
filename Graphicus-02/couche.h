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

class Couche
{
public:
	bool AjoutForme(forme* point);
	forme* RetraitForme(int index);
	forme* FormeStockee(int index);
	float AireTotale();
	bool Translate(int x, int y);
	bool ChangerEtat(Etat);
	void AfficherContenu(flot)
};

#endif
