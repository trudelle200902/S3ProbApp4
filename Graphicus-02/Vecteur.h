/********
 * Fichier: Vecteur.h
* Auteurs: couj0902-trum1304
 * Date: 28 juin 2022 (derniere modification)
 * Description: Declaration de la classe Vecteur de Graphicus-02.
********/

#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

using namespace std;

template <typename Type>
class Vecteur{
public:
	Vecteur();
	~Vecteur();
	
	bool insert(Type* newElement);
	int getSize() const;
	int getCapacity() const;
	void clear();
	Type* remove(int index);
	bool isEmpty() const;
	Type* getElementAt(int index);
	
	void afficher(ostream & s) const;
	
private:
	Type** tab;
	int size = 0;
	int capacity = 10;
	
	void doubleCapaciter();
};

#endif
