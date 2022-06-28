/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"
#include <typeinfo>
void Tests::tests_validation()
{
	//Creation d'un canevas
	Canevas canevas;
	//Etape1: Activer la couche 1 du canevas
	cout<<"Etape1: Activation de la couche 1"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.activerCouche(1);
	//Etape2: Ajout des 3 formes dans la couche 1
	cout<<"Etape2: Ajout des 3 formes a la couche 1"<<endl;
	cout<<"---------------------------------"<<endl;
	Forme* r1=new Rectangle(0,0,2,3);
	canevas.ajouterForme(r1);
	cout<<"Rectancle 0,0,2,3 ajoute\n";
	Forme* s1= new Carre(2,3,4);
	canevas.ajouterForme(s1);
	cout<<"Carre 2,3,4 ajoute\n";
	Forme* c1= new Cercle(7,8,6);
	canevas.ajouterForme(c1);
	cout<<"Cercle 7,8,6 ajoute\n";
	//Etape3: Activer la couche 1 du canevas
	cout<<"Etape3: Activation de la couche 2"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.activerCouche(2);
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
	cout<<"Etape6:Afficher l'aire du canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Aire du canevas="<<canevas.aire()<<endl;
	cout<<"\n";
	//Etape7: Activer la couche 0 du canevas
	cout<<"Etape7: Activation de la couche 0"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.activerCouche(0);
		//SousEtape7a: Ajout de 3 formes a la couche 0
		cout<<"SousEtape7a: Ajout des 3 formes a la couche 0"<<endl;
		cout<<"---------------------------------"<<endl;
		Forme* r3= new Rectangle;
		canevas.ajouterForme(r3);
		cout<<"Rectancle 0,0,1,1 ajoute"<<endl;
		Forme* s2= new Carre;
		canevas.ajouterForme(s2);
		cout<<"Carre 0,0,1 ajoute"<<endl;
		Forme* c2= new Cercle;
		canevas.ajouterForme(c2);
		cout<<"Cercle 0,0,1 ajoute"<<endl;
		cout<<"Affichage du contenu des couches"<<endl;
		canevas.afficher(cout);
		cout<<"\n";
	//Etape8: Activer la couche 1 du canevas
	cout<<"Etape8: Activation de la couche 1"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.activerCouche(1);
		//SousEtape8a: Translation sur la couche 1 de x=5 et y=5
		cout<<"SousEtape8b: Translation sur la couche 1 (5,5)"<<endl;
		cout<<"---------------------------------"<<endl;
		canevas.translater(5,5);
		cout<<"\n";
	//Etape9: Etat de la couche 2
	cout<<"Etape9: Reinitialisation et Etat de la couche 2"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"couche 2: ";
	canevas.getCouche(2)->Reinitialiser();
	Couche* interm=canevas.getCouche(2);
	switch(interm->Etat)
	{
	case Initialisee:
		cout<<"Initialisee\n";
		break;
		
	case Active:
		cout<<"Active\n";
		break;
	
	case Inactive:
		cout<<"Inactive\n";
		break;
	}
	
	cout<<"\n";
	//Etape10: Etat de la couche 3
	cout<<"Etape10: Etat de la couche 3"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"couche 3: ";
	interm=canevas.getCouche(3);
	switch(interm->Etat)
	{
	case Initialisee:
		cout<<"Initialisee\n";
		break;
		
	case Active:
		cout<<"Active\n";
		break;
	
	case Inactive:
		cout<<"Inactive\n";
		break;
	}
	cout<<"\n";
	//Etape11: Etat de la couche 4
	cout<<"Etape11: Etat de la couche 4"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"couche 4: ";
	interm=canevas.getCouche(4);
	switch(interm->Etat)
	{
	case Initialisee:
		cout<<"Initialisee\n";
		break;
		
	case Active:
		cout<<"Active\n";
		break;
	
	case Inactive:
		cout<<"Inactive\n";
		break;
	}
	cout<<"\n";
	//Etape12: Afficher le canevas
	cout<<"Etape12:Afficher le canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.afficher(cout);
	cout<<"\n";
	//Etape13: Afficher l'aire totale du canevas
	cout<<"Etape13: Afficher l'aire du canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Aire du canevas="<<canevas.aire()<<endl;
	cout<<"\n";
	//Etape14: Retirer 1ere forme de la couche 1
	cout<<"Etape14: Retrait de la 1ere forme de la couche 1"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.retirerForme(0);
	//Etape15: Afficher le canevas
	cout<<"Etape15: Afficher le canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.afficher(cout);
	cout<<"\n";
	//Etape16: Afficher l'aire totale du canevas
	cout<<"Etape16: Afficher l'aire du canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Aire du canevas="<<canevas.aire()<<endl;
	cout<<"\n";
	//Etape17: Reinitialisation du canevas
	cout<<"Etape17: Reinitialisation du canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.reinitialiser();
	//Etape18: Afficher le canevas
	cout<<"Etape18: Afficher le canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	canevas.afficher(cout);
	cout<<"\n";
	//Etape19: Afficher l'aire totale du canevas
	cout<<"Etape19: Afficher l'aire du canevas"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Aire du canevas="<<canevas.aire()<<endl;
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
	cout<<"Test Forme1:\n";
	cout<<"---------------------\n";
	cout<<"+Rectangle(1,2,4,6)\n";
	Rectangle r1(1,2,4,6);
	cout<<"Ancrage: ("<<r1.getAncrage().x<<","<<r1.getAncrage().y<<")\n";
	cout<<"+Translater de (5,5)\n";
	r1.translater(5,5);
	cout<<"Ancrage: ("<<r1.getAncrage().x<<","<<r1.getAncrage().y<<")\n";
	cout<<"+setAncrage a (1,1) avec coordonnee {1,1}\n";
	Coordonnee c{1,1};
	r1.setAncrage(c);
	cout<<"Ancrage: ("<<r1.getAncrage().x<<","<<r1.getAncrage().y<<")\n";
	
	
}

void Tests::tests_unitaires_cercle()
{
	cout<<"Test Cercle1:\n";
	cout<<"---------------------\n";
	cout<<"+Cercle(6,11,3)\n";
	Cercle c1(6,11,3);
	c1.afficher(cout);
	cout<<"+Redimensionne a 5\n";
	c1.setDimensionsC(5);
	c1.afficher(cout);
	cout<<"\n";
	
	cout<<"Test Cercle2:\n";
	cout<<"---------------------\n";
	cout<<"+Cercle\n";
	Cercle c2;
	c2.afficher(cout);
	cout<<"\n";
}

void Tests::tests_unitaires_rectangle()
{
	cout<<"Test Rectangle1:\n";
	cout<<"---------------------\n";
	cout<<"+Rectangle(8,2,3,4)\n";
	Rectangle r1(8,2,3,4);
	r1.afficher(cout);
	cout<<"+Redimensionne a (5,3)\n";
	r1.setDimensionsR(5,3);
	r1.afficher(cout);
	cout<<"\n";
	
	cout<<"Test Rectangle2:\n";
	cout<<"---------------------\n";
	cout<<"+Rectangle\n";
	Rectangle r2;
	r2.afficher(cout);
	cout<<"\n";
}

void Tests::tests_unitaires_carre()
{
	cout<<"Test Carre1:\n";
	cout<<"---------------------\n";
	cout<<"+Carre(7,1,2)\n";
	Carre s1(7,1,2);
	s1.afficher(cout);
	cout<<"+Redimensionne a (6)\n";
	s1.setDimensionsS(6);
	s1.afficher(cout);
	cout<<"\n";
	
	cout<<"Test Carre2:\n";
	cout<<"---------------------\n";
	cout<<"+Carre\n";
	Carre s2;
	s2.afficher(cout);
	cout<<"\n";
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
