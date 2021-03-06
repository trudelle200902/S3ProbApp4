/********
 * Fichier: graphicus-02.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"

using namespace std;

int main()
{
	Tests tests;
	tests.tests_application();
	tests.tests_validation();
	tests.tests_unitaires_rectangle();
	tests.tests_unitaires_cercle();
	tests.tests_unitaires_carre();
	tests.tests_unitaires_formes();
	tests.tests_unitaires_couche();
	tests.tests_unitaires_vecteur();
	tests.tests_unitaires_canevas();
	return 0;
}

