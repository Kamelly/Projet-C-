#include "Enseignant.h"
using namespace std;


/* Constructeur*/
Enseignant::Enseignant()
{       
	Utilisateur();
}

/* Destructeur */
Enseignant::~Enseignant()
{
}


string Enseignant::getStatut(){
	return "enseignant";
	//est-ce qu'il ne faudrait pas un statut int ? genre 0 pour �tu, 1 pour prof ?
}
