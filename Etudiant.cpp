#include "Etudiant.h"

using namespace std;


Etudiant::Etudiant()
{
	Utilisateur();
	nbCours = 0;
}

/* Destructeur */
Etudiant::~Etudiant()
{
}

string Etudiant::getStatut(){
	return "etudiant";
	// idem que dans enseignant : 0 pour �tu, 1 pour enseignant ?
}

int Etudiant::getNbCours(){
	return nbCours;
}
