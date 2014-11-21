#include "Enseignant.h"
using namespace std;

/* Constructeur*/
Enseignant::Enseignant()
{       
}

/* Destructeur */
Enseignant::~Enseignant()
{
}

virtual string Enseignant::getStatut(){
        return "enseignant";
}
