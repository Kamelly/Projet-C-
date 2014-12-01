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
        // idem que dans enseignant : 0 pour étu, 1 pour enseignant ?
}

int Etudiant::getNbCours(){
       return nbCours;
}
