/********
 * Fichier: tests.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour les tests de Graphicus.
 *    Ce fichier peut etre adapte a vos besoins de tests. Ce fichier
 *    fait partie de la distribution de Graphicus.
********/

#include <iostream>
#include "Vecteur.h"
#include "canevas.h"
#include "couche.h"
#include "forme.h"
#include "Rectangle.h"
#include "Carre.h"
#include "Cercle.h"

using namespace std;

class Tests
{
public:
   // Methodes pour les tests unitaires des classes
    
	void tests_unitaires_vecteur();
	void tests_unitaires_canevas();
	void tests_unitaires_couche();
	void tests_unitaires_formes();
	void tests_unitaires_cercle();
	void tests_unitaires_rectangle();
	void tests_unitaires_carre();
	void tests_unitaires(); // Appel de tous les tests unitaires

   // Methodes pour les tests d'integration
	void tests_application_cas_01();
	void tests_application_cas_02();
	void tests_application(); // Appel de tous les tests applicatifs
	
	//Methode Validation
	void tests_validation();
};
