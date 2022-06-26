#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

//c quoi ellement contingu en memoire?
template <typename Type>
class Vecteur{
public:
	Vecteur();
	~Vecteur();
	
	bool insert(Type* newEllement);
	void getSize() const;
	void getCapacity() const;
	void clear();
	void remove(int index);
	bool isEmpty() const;
	Type* getEllementAt(int index);
	
	void afficher(std::ostream& s) const;
	//template<>
	//void Vecteur<Forme>::afficher();
	
private:
	Type** tab;
	int size;
	int capacity = 10;
	
	void doubleCapaciter();
};

#endif
