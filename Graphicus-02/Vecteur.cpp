#include "vecteur.h"
#include "forme.h"

#include <iostream>

template <typename Type>
Vecteur<Type>::Vecteur()
{
	tab = new Type*[capacity];
}

template <typename Type>
Vecteur<Type>::~Vecteur()
{
	if (tab != NULL)
	{
		std::cout << "destruc 1" << std::endl;
		delete [] tab;
		std::cout << "destruc 2" << std::endl;
	}
}

template <typename Type>
bool Vecteur<Type>::insert(Type* newEllement)
{
	if(size >= capacity)
	{
		Type** temp = new Type*[2*capacity];
		for(int i =0; i<size; i++)
		{
			temp[i] = tab[i];
		}
		delete [] tab;//
		tab = temp;
		capacity*=2;
	}
	std::cout << "1" << std::endl;
	
	//delete [] tab;
	std::cout << "2" << std::endl;
	tab[size] = newEllement;
	size++;
	return false;
}

template <typename Type>
void Vecteur<Type>::getSize() const
{
	
}

template <typename Type>
void Vecteur<Type>::getCapacity() const
{
	
}

template <typename Type>
void Vecteur<Type>::clear()
{
	
}

template <typename Type>
void Vecteur<Type>::remove(int index)
{
	
}

template <typename Type>
bool Vecteur<Type>::isEmpty() const
{
	return false;
}

template <typename Type>
Type* Vecteur<Type>::getEllementAt(int index)
{	
	return nullptr;
}

template<>
void Vecteur<Forme>::afficher(std::ostream& s) const
{
	for(int i =0; i<size;i++)
	{
		tab[i]->afficher(s);
	}
}

template <typename Type>
void Vecteur<Type>::doubleCapaciter()
{
	
}

template class Vecteur<int>;
template class Vecteur<Forme>;
