#
# Auteur: C.-A. Brunet
# Date: 08 janvier 2018
# Description: compilation de graphicus-02. Ce fichier fait partie de 
#	la distribution de Graphicus.
#
all: graphicus-02 clean

graphicus-02: graphicus-02.o tests.o canevas.o couche.o forme.o Vecteur.o Rectangle.o Cercle.o Carre.o
	g++ -Wall -o graphicus-02 graphicus-02.o tests.o canevas.o couche.o forme.o Vecteur.o Rectangle.o Cercle.o Carre.o

graphicus-02.o: graphicus-02.cpp tests.h canevas.h couche.h forme.h Vecteur.h coordonnee.h
	g++ -g -Wall -c graphicus-02.cpp 

tests.o: tests.cpp tests.h canevas.h couche.h forme.h Vecteur.h coordonnee.h
	g++ -g -Wall -c tests.cpp 

canevas.o: canevas.cpp canevas.h couche.h forme.h Vecteur.h coordonnee.h
	g++	-g -Wall -c canevas.cpp

couche.o: couche.cpp couche.h forme.h Vecteur.h coordonnee.h
	g++	-g -Wall -c couche.cpp

forme.o: forme.cpp forme.h coordonnee.h
	g++	-g -Wall -c forme.cpp
	
Vecteur.o: Vecteur.cpp Vecteur.h forme.h coordonnee.h
	g++	-g -Wall -c Vecteur.cpp 
	
Carre.o:Carre.cpp Carre.h Rectangle.h forme.h coordonnee.h
	g++ -g -Wall -c Carre.cpp

Rectangle.o: Rectangle.h forme.h coordonnee.h
	g++ -g -Wall -c Rectangle.cpp

Cercle.o:Cercle.h forme.h coordonnee.h
	g++ -g -Wall -c Cercle.cpp

clean:
	rm  -f *.o
