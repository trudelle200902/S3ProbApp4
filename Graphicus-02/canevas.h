/********
 * Fichier: canevas.h
* Auteurs: couj0902-trum1304
 * Date: 28 juin 2022 (derniere modification)
 * Description: Declaration de la classe Canevas. La classe gere un
 *    tableau de couches en accord avec les specifications de Graphicus-02.
********/

#ifndef DESSIN_H
#define DESSIN_H

#include <iostream>
#include "forme.h"
#include "couche.h"

const int MAX_COUCHES = 5;

using namespace std;

class Canevas
{
public:
   Canevas();
   ~Canevas();
   
   bool reinitialiser();
   
   bool activerCouche(int index);
   //bool cacherCouche(int index);
   
   bool ajouterForme(Forme *p_forme);
   bool retirerForme(int index);
   
   double aire();
   bool translater(int deltaX, int deltaY);
   void afficher(ostream & s);
   Couche* getCouche(int index);
   

private:
     Couche couches[MAX_COUCHES];
     int IndexCoucheActive;
};

#endif
