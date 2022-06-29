/********
 * Fichier: tests.cpp
* Auteurs: couj0902-trum1304
 * Date: 28 juin 2022 (derniere modification)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.
********/

#include "tests.h"
#include <typeinfo>
void Tests::tests_validation()
{
	//Creation d'un canevas
	Canevas canevas;
	//Etape1: Activer la couche 1 du canevas
	cout<<"Etape1: Activation de la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevas.activerCouche(1);
	//Etape2: Ajout des 3 formes dans la couche 1
	cout<<"Etape2: Ajout des 3 formes a la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	Forme* r1=new Rectangle(0,0,2,3);
	canevas.ajouterForme(r1);
	cout<<"Rectancle 0,0,2,3 ajoute\n";
	Forme* s1= new Carre(2,3,4);
	canevas.ajouterForme(s1);
	cout<<"Carre 2,3,4 ajoute\n";
	Forme* c1= new Cercle(7,8,6);
	canevas.ajouterForme(c1);
	cout<<"Cercle 7,8,6 ajoute\n";
	//Etape3: Activer la couche 2 du canevas
	cout<<"Etape3: Activation de la couche 2"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevas.activerCouche(2);
	//Etape4: Ajout d'une forme dans la couche 2
	cout<<"Etape4: Ajout d'une formee a la couche 2"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	Forme* r2= new Rectangle(0,0,4,5);
	canevas.ajouterForme(r2);
	cout<<"Rectancle 0,0,4,5 ajoute"<<endl;
	cout<<"\n";
	//Etape5: Afficher le canevas
	cout<<"Etape5:Afficher le canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevas.afficher(cout);
	cout<<"\n";
	//Etape6: Afficher l'aire totale du canevas
	cout<<"Etape6:Afficher l'aire du canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Aire du canevas="<<canevas.aire()<<endl;
	cout<<"\n";
	//Etape7: Activer la couche 0 du canevas
	cout<<"Etape7: Activation de la couche 0"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevas.activerCouche(0);
		//SousEtape7a: Ajout de 3 formes a la couche 0
		cout<<"SousEtape7a: Ajout des 3 formes a la couche 0"<<endl;
		cout<<"/////////////////////////////////"<<endl;
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
	cout<<"/////////////////////////////////"<<endl;
	canevas.activerCouche(1);
		//SousEtape8a: Translation sur la couche 1 de x=5 et y=5
		cout<<"SousEtape8b: Translation sur la couche 1 (5,5)"<<endl;
		cout<<"/////////////////////////////////"<<endl;
		canevas.translater(5,5);
		cout<<"\n";
	//Etape9: Etat de la couche 2
	cout<<"Etape9: Reinitialisation et Etat de la couche 2"<<endl;
	cout<<"/////////////////////////////////"<<endl;
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
	cout<<"/////////////////////////////////"<<endl;
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
	cout<<"/////////////////////////////////"<<endl;
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
	cout<<"/////////////////////////////////"<<endl;
	canevas.afficher(cout);
	cout<<"\n";
	//Etape13: Afficher l'aire totale du canevas
	cout<<"Etape13: Afficher l'aire du canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Aire du canevas="<<canevas.aire()<<endl;
	cout<<"\n";
	//Etape14: Retirer 1ere forme de la couche 1
	cout<<"Etape14: Retrait de la 1ere forme de la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevas.retirerForme(0);
	//Etape15: Afficher le canevas
	cout<<"Etape15: Afficher le canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevas.afficher(cout);
	cout<<"\n";
	//Etape16: Afficher l'aire totale du canevas
	cout<<"Etape16: Afficher l'aire du canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Aire du canevas="<<canevas.aire()<<endl;
	cout<<"\n";
	//Etape17: Reinitialisation du canevas
	cout<<"Etape17: Reinitialisation du canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevas.reinitialiser();
	canevas.reinitialiser();
	//Etape18: Afficher le canevas
	cout<<"Etape18: Afficher le canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevas.afficher(cout);
	cout<<"\n";
	//Etape19: Afficher l'aire totale du canevas
	cout<<"Etape19: Afficher l'aire du canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
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
   cout<<"Test Canevas1:\n";
	cout<<"---------------------\n";
	cout<<"Creation d'une couche\n";
	Canevas canevasTest;
	cout<<"Affichage de la couche\n";
	canevasTest.afficher(cout);
	cout<<"Etats des couches\n";
	cout<<"Etat couche(0)= ";
	switch(canevasTest.getCouche(0)->Etat)
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
	cout<<"Etat couche(1)= ";
	switch(canevasTest.getCouche(1)->Etat)
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
	cout<<"Etat couche(2)= ";
	switch(canevasTest.getCouche(2)->Etat)
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
	cout<<"Etat couche(3)= ";
	switch(canevasTest.getCouche(3)->Etat)
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
	cout<<"Etat couche(4)= ";
	switch(canevasTest.getCouche(4)->Etat)
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
	cout<<"\n//Activation de la couche 1\n";
	canevasTest.activerCouche(1);
	cout<<"Etats des couches\n";
		cout<<"Etat couche(0)= ";
	switch(canevasTest.getCouche(0)->Etat)
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
	cout<<"Etat couche(1)= ";
	switch(canevasTest.getCouche(1)->Etat)
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
	cout<<"Etat couche(2)= ";
	switch(canevasTest.getCouche(2)->Etat)
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
	cout<<"Etat couche(3)= ";
	switch(canevasTest.getCouche(3)->Etat)
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
	cout<<"Etat couche(4)= ";
	switch(canevasTest.getCouche(4)->Etat)
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
	cout<<"\n//Reinitialisation\n";
	canevasTest.reinitialiser();
		cout<<"Etat couche(0)= ";
	switch(canevasTest.getCouche(0)->Etat)
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
	cout<<"Etat couche(1)= ";
	switch(canevasTest.getCouche(1)->Etat)
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
	cout<<"Etat couche(2)= ";
	switch(canevasTest.getCouche(2)->Etat)
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
	cout<<"Etat couche(3)= ";
	switch(canevasTest.getCouche(3)->Etat)
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
	cout<<"Etat couche(4)= ";
	switch(canevasTest.getCouche(4)->Etat)
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
	/*Les autres fonctionnalites de Canevas sont testees dans
	tests_validation() et tests_application() car se sont des
	fonctionnalitees qui englobent une majorite du code. Des
	tests unitaires de ces fonctionnalites seraient inutiles.
	*/
}

void Tests::tests_unitaires_couche()
{
	cout<<"Test Couche1:\n";
	cout<<"---------------------\n";
	cout<<"+Pointeur Rectangle(0,0,3,6)\n";
	Forme* rec1=new Rectangle(0,0,3,6);
	cout<<"+Pointeur Rectangle(2,1,4,1)\n";
	Forme* rec2=new Rectangle(2,1,4,1);
	Couche coucheTest;
	cout<<"//Activation de la couche\n";
	coucheTest.setEtat(Active);
	cout<<"//Ajout de la forme\n";
	coucheTest.AjoutForme(rec1);
	coucheTest.AjoutForme(rec2);
	cout<<"//Affichage de l'aire\n";
	cout<<"Aire Couche= "<<coucheTest.aire()<<endl;
	cout<<"//Affichage du contenu de la couche avec les 2 formes\n";
	coucheTest.AfficherContenu(cout);
	cout<<"-Pointeur Rectangle(0,0,3,6)\n";
	coucheTest.RetraitForme(0);
	cout<<"//Affichage du contenu de la couche avec 1 forme restante\n";
	coucheTest.AfficherContenu(cout);
	cout<<"-Pointeur Rectangle(2,1,4,1)\n";
	coucheTest.RetraitForme(0);
	cout<<"//Affichage du contenu de la couche vide\n";
	coucheTest.AfficherContenu(cout);
	cout<<"//Reinitialisation\n";
	coucheTest.Reinitialiser();
	cout<<"//Affichage du contenu de la couche reinitialisee\n";
	coucheTest.AfficherContenu(cout);
	
	cout<<"Test Couche2:\n";
	cout<<"---------------------\n";
	cout<<"+Pointeur Carre(0,0,4)\n";
	Forme* car1=new Carre(0,0,4);
	cout<<"//Activation de la couche\n";
	coucheTest.setEtat(Active);
	cout<<"//Ajout de la forme\n";
	coucheTest.AjoutForme(car1);
	cout<<"//Affichage du contenu de la couche avec la forme\n";
	coucheTest.AfficherContenu(cout);
	cout<<"//Translation (2,2)\n";
	coucheTest.Translate(5,5);
	cout<<"//Affichage du contenu de la couche avec la forme\n";
	coucheTest.AfficherContenu(cout);
	cout<<"//Inactivation de la couche\n";
	coucheTest.setEtat(Inactive);
	cout<<"-Pointeur Carre(0,0,4) **Devrait retourner une erreur**\n";
	if(coucheTest.RetraitForme(0)==nullptr)
	{
		cout<<"Erreur, la couche est Inactive. Retrait impossible\n";
	}
	cout<<"//Affichage du contenu de la couche avec la forme\n";
	coucheTest.AfficherContenu(cout);
	cout<<"//Reinitialisation\n";
	coucheTest.Reinitialiser();
	
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
  cout<<"\n/////////////////////////////////"<<endl;
	cout<<"DEBUT DU TEST APPLICATION CAS 01\n";
	cout<<"/////////////////////////////////"<<endl;
   //Creation d'un canevas
	Canevas canevasA1;
	//Etape1: Activer la couche 3 du canevas
	cout<<"Etape1: Activation de la couche 3"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(3);
	//Etape2: Ajout des 3 formes dans la couche 3
	cout<<"Etape2: Ajout des 3 formes a la couche 3"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	Forme* r1=new Rectangle(1,2,3,4);
	canevasA1.ajouterForme(r1);
	cout<<"Rectancle 1,2,3,4 ajoute\n";
	Forme* s1= new Carre(1,2,3);
	canevasA1.ajouterForme(s1);
	cout<<"Carre 1,2,3 ajoute\n";
	Forme* c1= new Cercle;
	canevasA1.ajouterForme(c1);
	cout<<"Cercle 0,0,1 ajoute\n";
	//Etape3: Activer la couche 1 du canevas
	cout<<"Etape3: Activation de la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(1);
	//Etape4: Ajout d'une forme dans la couche 1
	cout<<"Etape4: Ajout d'une formee a la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	Forme* c2= new Cercle(0,4,5);
	canevasA1.ajouterForme(c2);
	cout<<"Cercle 0,4,5 ajoute"<<endl;
	cout<<"\n";
	//Etape5: Afficher le canevas
	cout<<"Etape5:Afficher le canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.afficher(cout);
	cout<<"\n";
	//Etape6: Afficher l'aire totale du canevas
	cout<<"Etape6:Afficher l'aire du canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Aire du canevas="<<canevasA1.aire()<<endl;
	cout<<"\n";
	//Etape7: Afficher les etats des couches
	cout<<"Etape7: Afficher les etats des couches"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Etat couche(0)= ";
	switch(canevasA1.getCouche(0)->Etat)
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
	cout<<"Etat couche(1)= ";
	switch(canevasA1.getCouche(1)->Etat)
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
	cout<<"Etat couche(2)= ";
	switch(canevasA1.getCouche(2)->Etat)
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
	cout<<"Etat couche(3)= ";
	switch(canevasA1.getCouche(3)->Etat)
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
	cout<<"Etat couche(4)= ";
	switch(canevasA1.getCouche(4)->Etat)
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
	//Etape8: Activer la couche 3 du canevas
	cout<<"Etape8: Activation de la couche 3"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(3);
	//Etape9: Translation sur la couche 3 de x=3 et y=1
	cout<<"Etape9: Translation sur la couche 3 (3,1)"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.translater(3,1);
	cout<<"\n";
	//Etape10: Activer la couche 1 du canevas
	cout<<"Etape10: Activation de la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(1);
	//Etape11: Retirer la forme de la couche 1
	cout<<"Etape11: Retrait de la forme de la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.retirerForme(0);
	//Etape12: Afficher le canevas
	cout<<"Etape12: Afficher le canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.afficher(cout);
	cout<<"\n";
	//Etape13: Translation sur la couche 1
	cout<<"Etape13: Translation sur la couche 1 (1,1) \n**Cette etape devrait resulter en une erreur"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	if(canevasA1.translater(3,1)==false)
	{
		cout<<"Erreur:Translation impossible. La couche est vide\n";
		cout<<"\n";
	}
	//Etape14: Activer la couche 5, impossible, la couche 4 sera activee
	cout<<"Etape14: Activation de la couche 5, cela est impossible\n La couche 4, soit la derniere couche, sera activee"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(5);
	//Etape15: Afficher les etats des couches
	cout<<"Etape15: Afficher les etats des couches"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Etat couche(0)= ";
	switch(canevasA1.getCouche(0)->Etat)
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
	cout<<"Etat couche(1)= ";
	switch(canevasA1.getCouche(1)->Etat)
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
	cout<<"Etat couche(2)= ";
	switch(canevasA1.getCouche(2)->Etat)
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
	cout<<"Etat couche(3)= ";
	switch(canevasA1.getCouche(3)->Etat)
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
	cout<<"Etat couche(4)= ";
	switch(canevasA1.getCouche(4)->Etat)
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
	//Etape16: Activer la couche -1, impossible, la couche 0 sera activee
	cout<<"Etape16: Activation de la couche -1, cela est impossible\n La couche 0, soit la premiere couche, sera activee"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(-1);
	//Etape17: Afficher les etats des couches
	cout<<"Etape17: Afficher les etats des couches"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Etat couche(0)= ";
	switch(canevasA1.getCouche(0)->Etat)
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
	cout<<"Etat couche(1)= ";
	switch(canevasA1.getCouche(1)->Etat)
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
	cout<<"Etat couche(2)= ";
	switch(canevasA1.getCouche(2)->Etat)
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
	cout<<"Etat couche(3)= ";
	switch(canevasA1.getCouche(3)->Etat)
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
	cout<<"Etat couche(4)= ";
	switch(canevasA1.getCouche(4)->Etat)
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
	//Etape18: Retirer une forme de la couche 1, impossible, aucune forme
	cout<<"Etape18: Retrait d'une forme de la couche vide 1\n**Ceci devrait resulter en une erreur"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	if(!canevasA1.retirerForme(0))
	{
		cout<<"Erreur. Il n'y a aucune forme a retirer\n";
	}
	//Etape19:Reinitialisation, affichage et fin du test
	cout<<"Etape19:Reinitialisation, affichage et fin du test\n";
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.reinitialiser();
	canevasA1.afficher(cout);
	cout<<"\nFin du Test\n\n";
}

void Tests::tests_application_cas_02()
{
     cout<<"\n/////////////////////////////////"<<endl;
	cout<<"DEBUT DU TEST APPLICATION CAS 02\n";
	cout<<"/////////////////////////////////"<<endl;
   //Creation d'un canevas
	Canevas canevasA2;
	//Etape1: Activer la couche 3 du canevas
	cout<<"Etape1: Activation de la couche 3"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(3);
	//Etape2: Ajout des 3 formes dans la couche 3
	cout<<"Etape2: Ajout des 3 formes a la couche 3"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	Forme* r1=new Rectangle(1,2,3,4);
	canevasA1.ajouterForme(r1);
	cout<<"Rectancle 1,2,3,4 ajoute\n";
	Forme* s1= new Carre(1,2,3);
	canevasA1.ajouterForme(s1);
	cout<<"Carre 1,2,3 ajoute\n";
	Forme* c1= new Cercle;
	canevasA1.ajouterForme(c1);
	cout<<"Cercle 0,0,1 ajoute\n";
	//Etape3: Activer la couche 1 du canevas
	cout<<"Etape3: Activation de la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(1);
	//Etape4: Ajout d'une forme dans la couche 1
	cout<<"Etape4: Ajout d'une formee a la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	Forme* c2= new Cercle(0,4,5);
	canevasA1.ajouterForme(c2);
	cout<<"Cercle 0,4,5 ajoute"<<endl;
	cout<<"\n";
	//Etape5: Afficher le canevas
	cout<<"Etape5:Afficher le canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.afficher(cout);
	cout<<"\n";
	//Etape6: Afficher l'aire totale du canevas
	cout<<"Etape6:Afficher l'aire du canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Aire du canevas="<<canevasA1.aire()<<endl;
	cout<<"\n";
	//Etape7: Afficher les etats des couches
	cout<<"Etape7: Afficher les etats des couches"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	cout<<"Etat couche(0)= ";
	switch(canevasA1.getCouche(0)->Etat)
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
	cout<<"Etat couche(1)= ";
	switch(canevasA1.getCouche(1)->Etat)
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
	cout<<"Etat couche(2)= ";
	switch(canevasA1.getCouche(2)->Etat)
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
	cout<<"Etat couche(3)= ";
	switch(canevasA1.getCouche(3)->Etat)
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
	cout<<"Etat couche(4)= ";
	switch(canevasA1.getCouche(4)->Etat)
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
	//Etape8: Activer la couche 3 du canevas
	cout<<"Etape8: Activation de la couche 3"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(3);
	//Etape9: Translation sur la couche 3 de x=3 et y=1
	cout<<"Etape9: Translation sur la couche 3 (3,1)"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.translater(3,1);
	cout<<"\n";
	//Etape10: Activer la couche 1 du canevas
	cout<<"Etape10: Activation de la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.activerCouche(1);
	//Etape11: Retirer la forme de la couche 1
	cout<<"Etape11: Retrait de la forme de la couche 1"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.retirerForme(0);
	//Etape12: Afficher le canevas
	cout<<"Etape12: Afficher le canevas"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	canevasA1.afficher(cout);
	cout<<"\n";
	//Etape13: Translation sur la couche 1
	cout<<"Etape13: Translation sur la couche 1 (1,1) \n**Cette etape devrait resulter en une erreur"<<endl;
	cout<<"/////////////////////////////////"<<endl;
	if(canevasA1.translater(3,1)==false)
	{
		cout<<"Erreur:Translation impossible. La couche est vide\n";
		cout<<"\n";
	} 
   
}
