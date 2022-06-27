/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"


void tests_validation()
{
	//Creation d'un canevas
	Canevas canevas;
	//Etape1: Activer la couche 1 du canevas
	cout<<"Etape1: Activation de la couche 1"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Etat des couches avant activation"<<endl;
	cout<<"couche 0: "<<canevas.couches[0].etat<<endl;
	cout<<"couche 1: "<<canevas.couches[1].etat<<endl;
	cout<<"couche 2: "<<canevas.couches[2].etat<<endl;
	cout<<"couche 3: "<<canevas.couches[3].etat<<endl;
	cout<<"couche 4: "<<canevas.couches[4].etat<<endl;
	canevas.activerCouche(1);
	cout<<"Etat des couches apres activation"<<endl;
	cout<<"couche 0: "<<canevas.couches[0].etat<<endl;
	cout<<"couche 1: "<<canevas.couches[1].etat<<endl;
	cout<<"couche 2: "<<canevas.couches[2].etat<<endl;
	cout<<"couche 3: "<<canevas.couches[3].etat<<endl;
	cout<<"couche 4: "<<canevas.couches[4].etat<<endl;
	cout<<"\n";
	//Etape2: Ajout des 3 formes dans la couche 1
	cout<<"Etape2: Ajout des 3 formes a la couche 1"<<endl;
	cout<<"---------------------------------"<<endl;
	Forme* r1= new Rectangle(0,0,2,3);
	canevas.ajouterForme(r1);
	cout<<"Rectancle 0,0,2,3 ajoute"<<endl;
	Forme* s1= new carre(2,3,4);
	canevas.ajouterForme(s1);
	cout<<"Carre 2,3,4 ajoute"<<endl;
	Forme* c1= new Cercle(7,8,6);
	canevas.ajouterForme(c1);
	cout<<"Cercle 7,8,6 ajoute"<<endl;
	cout<<"Affichage du contenu des couches"<<endl;
	canevas.afficher(cout);
	cout<<"\n"
	//Etape3: Activer la couche 1 du canevas
	cout<<"Etape3: Activation de la couche 2"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Etat des couches avant activation"<<endl;
	cout<<"couche 0: "<<canevas.couches[0].etat<<endl;
	cout<<"couche 1: "<<canevas.couches[1].etat<<endl;
	cout<<"couche 2: "<<canevas.couches[2].etat<<endl;
	cout<<"couche 3: "<<canevas.couches[3].etat<<endl;
	cout<<"couche 4: "<<canevas.couches[4].etat<<endl;
	canevas.activerCouche(2);
	cout<<"Etat des couches apres activation"<<endl;
	cout<<"couche 0: "<<canevas.couches[0].etat<<endl;
	cout<<"couche 1: "<<canevas.couches[1].etat<<endl;
	cout<<"couche 2: "<<canevas.couches[2].etat<<endl;
	cout<<"couche 3: "<<canevas.couches[3].etat<<endl;
	cout<<"couche 4: "<<canevas.couches[4].etat<<endl;
	cout<<"\n";
	//Etape4: Ajout d'une forme dans la couche 2
	cout<<"Etape4: Ajout d'une formee a la couche 2"<<endl;
	cout<<"---------------------------------"<<endl;
	Forme* r2= new Rectangle(0,0,4,5);
	canevas.ajouterForme(r2);
	cout<<"Rectancle 0,0,4,5 ajoute"<<endl;
	cout<<"\n";
	//Etape5: Afficher le canevas
	cout<<"Etape5:Afficher le canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.afficher(cout);
	cout<<"\n";
	//Etape6: Afficher l'aire totale du canevas
	cout<<"Etape5:Afficher le canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.aire();
	cout<<"\n";
	
	
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_formes()
{
	
}

void tests_unitaires_cercle()
{

}

void tests_unitaires_rectangle()
{

}

void tests_unitaires_carre()
{

}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
