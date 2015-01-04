#include "Etudiant.h"

using namespace std;


Etudiant::Etudiant()
{
	nbCours = 0;
}


Etudiant::~Etudiant()
{
}

string Etudiant::getStatut(){
	return "etudiant";
	// idem que dans enseignant : 0 pour étu, 1 pour enseignant ?
}

int Etudiant::getNbCours(){
	return nbCours;
}

