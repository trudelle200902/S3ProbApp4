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
	int getSize() const;
	int getCapacity() const;
	void clear();
	Type* remove(int index);
	bool isEmpty() const;
	Type* getEllementAt(int index);
	
	void afficher(std::ostream& s) const;
	
private:
	Type** tab;
	int size = 0;
	int capacity = 10;
	
	void doubleCapaciter();
};

#endif
