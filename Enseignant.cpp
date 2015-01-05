#include "Enseignant.h"
using namespace std;


/* Constructeur*/
Enseignant::Enseignant(string n, string p) : Utilisateur(n,p)
{       
}

Enseignant::Enseignant()
{

}

/* Destructeur */
Enseignant::~Enseignant()
{
}


string Enseignant::getStatut(){
	return "enseignant";
	//est-ce qu'il ne faudrait pas un statut int ? genre 0 pour étu, 1 pour prof ?
}
