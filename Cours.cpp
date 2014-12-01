#include "Cours.h"
using namespace std;

/* Constructeur*/
Cours::Cours() : nom("")
{
	la.reserve(50);
	lp.reserve(50);
	lr.reserve(50);
}

/* Destructeur */
Cours::~Cours()
{
}

string Cours::getNom()
{
    return nom;
}

time_t Cours::getDateDebut()
{
     return dateDebut;
}

time_t Cours::getDateFin()
{
     return dateFin;
}

int Cours::getStatut()
{
    return statut;
}

void Cours::setStatut(int s)
{
     statut = s;
}

Enseignant Cours::getProf()
{
    return prof;
}



vector <Etudiant> Cours::getListePrinc()
{
       return lp;   
}

vector <Etudiant> Cours::getListeAttente()

{
       return la;
}


vector <Ressource> Cours::getListeRessource()
{
       return lr;
}


int Cours::getPlace(Etudiant &e, vector<Etudiant> i)
{
    //compte en parcourant ? 
}

int Cours::rechercheEtudiant(Etudiant &e)
{
	for (unsigned int i = 0; i < lp.size(); i++){
		//if ()
			return 1
	}
	for (unsigned int j = 0; j < la.size(); j++){
		//if ()
			return 2;
	}
	return 0;
    // si dans lp return 1
    //si dans la return 2
    // else return 0
}
 
int Cours::inscrire(Etudiant &e)
{
    if (lpPleine())
    { 
         la.push_back(e);
         return getPlace(e, la);
    }
    else
    {
        lp.push_back(e);
        return 0;
    }
}
 
void Cours::addRessource(Ressource &r)
{
     lr.push_back(r);
}
  
Ressource Cours::getRessource(string nom)
{
}


Collection<Cours> Cours::getListe(int statut)
{
}
/*vector <Cours> Cours::getListe(int statut)
{
}*/


int Cours::getMaxInscrit()
{
    return nbMaxInscrits;
}


boolean Cours::lpPleine()
{
   return ((int)lp.size() >= getMaxInscrit());
} 
