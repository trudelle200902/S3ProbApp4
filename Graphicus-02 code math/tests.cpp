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
	cout<<"Etape9: Etat de la couche 2"<<endl;
	cout<<"---------------------------------"<<endl;
	Couche interm=canevas.getCouche(2);
	cout<<"couche 2: "<<interm.Etat<<endl;
	cout<<"\n";
	//Etape10: Etat de la couche 3
	cout<<"Etape10: Etat de la couche 3"<<endl;
	cout<<"---------------------------------"<<endl;
	interm=canevas.getCouche(3);
	cout<<"couche 3: "<<interm.Etat<<endl;
	cout<<"\n";
	//Etape11: Etat de la couche 4
	cout<<"Etape11: Etat de la couche 4"<<endl;
	cout<<"---------------------------------"<<endl;
	interm=canevas.getCouche(4);
	cout<<"couche 4: "<<interm.Etat<<endl;
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
	cout<<"\n";
	cout<<"TEST UNITAIRE VECTEUR\n";
	cout<<"---------------------------------"<<endl;
	Vecteur<Forme> vecteur1;
	cout<<"Vecteur1 creer avec succes\n";
	cout<<"capacity: "<<vecteur1.getCapacity()<<endl;
	cout<<"size: "<<vecteur1.getSize()<<endl;
	cout<<"\n";
	cout<<"Commece a ajouter 11 forme de le vecteur\n";
	for(int i = 0; i<11;i++)
	{
		vecteur1.insert(new Rectangle);
	}
	cout<<"Fin de l'ajout des 11 formes\n";
	cout<<"capacity: "<<vecteur1.getCapacity()<<endl;
	cout<<"size: "<<vecteur1.getSize()<<endl;
	vecteur1.afficher(cout);
	cout<<"\n";
	cout<<"modification de la forme a l'index 4:\n";
	vecteur1.getElementAt(4)->translater(3,4);
	vecteur1.afficher(cout);
	cout<<"\n";
	cout<<"retirer la forme qui a ete modifier et la detruire:\n";
	Forme* formeIndex4 = vecteur1.remove(4);
	delete formeIndex4;
	vecteur1.afficher(cout);
	cout<<"capacity: "<<vecteur1.getCapacity()<<endl;
	cout<<"size: "<<vecteur1.getSize()<<endl;
	cout<<"\n";
	cout<<"vider le vecteur:\n";
	vecteur1.clear();
	cout<<"capacity: "<<vecteur1.getCapacity()<<endl;
	cout<<"size: "<<vecteur1.getSize()<<endl;
	cout<<"affichage du vecteur:\n";
	vecteur1.afficher(cout);
	cout<<"fin d'affichage du vecteur:\n";
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
