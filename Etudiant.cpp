#include "Etudiant.h"
using namespace std;

/* Constructeur*/
Etudiant::Etudiant() : nbCours(0)
{       
}

/* Destructeur */
Etudiant::~Etudiant()
{
}


virtual string Etudiant::getStatut(){
        return "etudiant";
}

int Etudiant::getNbCours(){
       return nbCours;
}
