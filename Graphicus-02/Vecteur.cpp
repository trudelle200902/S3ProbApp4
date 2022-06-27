#include "Vecteur.h"
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
		for(int i =0; i<size;i++)
		{
			tab[i] = nullptr;
			delete tab[i];
		}
		delete [] tab;
	}
}

template <typename Type>
bool Vecteur<Type>::insert(Type* newEllement)
{
	if(size >= capacity)
	{
		doubleCapaciter();
	}

	tab[size] = newEllement;
	size++;
	return false;
}

template <typename Type>
int Vecteur<Type>::getSize() const
{
	return size;
}

template <typename Type>
int Vecteur<Type>::getCapacity() const
{
	return capacity;
}

template <typename Type>
void Vecteur<Type>::clear()
{
	for(int i =0; i<size;i++)
	{
		tab[i] = nullptr;
		delete tab[i];
	}
}

template <typename Type>
Type* Vecteur<Type>::remove(int index)
{
	if (size <= index || index < 0)
	{
		return nullptr;
	}
	Type* out = tab[index];
	for(int i=index; i<size-1; i++)
	{
		tab[i] = tab[i+1];
	}
	return out;
}

template <typename Type>
bool Vecteur<Type>::isEmpty() const
{
	return size == 0;
}

template <typename Type>
Type* Vecteur<Type>::getEllementAt(int index)
{	
	if (index < 0 || index >= size)
	{
		return nullptr;
	}
	return tab[index];
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
	Type** temp = new Type*[2*capacity];
	for(int i =0; i<size; i++)
	{
		temp[i] = tab[i];
	}
	delete [] tab;
	tab = temp;
	capacity*=2;
}

template class Vecteur<Forme>;
