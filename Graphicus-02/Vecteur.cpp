#include "Vecteur.h"
#include "forme.h"


template <typename Type>
Vecteur<Type>::Vecteur()
{
	tab = new Type*[capacity];
}

template <typename Type>
Vecteur<Type>::~Vecteur()
{
	if (!isEmpty())
	{
		cout<<"deleting\n";
		delete [] tab;
		cout<<"deleted\n";
	}
}

template <typename Type>
bool Vecteur<Type>::insert(Type* newElement)
{
	if(size >= capacity)
	{
		doubleCapaciter();
	}

	tab[size] = newElement;
	size++;
	return true;
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
	size=0;
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
	size--;
	return out;
}

template <typename Type>
bool Vecteur<Type>::isEmpty() const
{
	return size == 0;
}

template <typename Type>
Type* Vecteur<Type>::getElementAt(int index)
{	
	if (index < 0 || index >= size)
	{
		return nullptr;
	}
	return tab[index];
}

template<>
void Vecteur<Forme>::afficher(ostream & s) const
{
	for(int i =0; i<size;i++)
	{
		tab[i]->afficher(s);
	}
}

template <typename Type>
void Vecteur<Type>::doubleCapaciter()
{
	Type** temp;
	temp = new Type*[2*capacity];
	for(int i =0; i<size; i++)
	{
		temp[i] = tab[i];
	}
	delete [] tab;
	tab = temp;
	capacity*=2;
}

template class Vecteur<Forme>;
