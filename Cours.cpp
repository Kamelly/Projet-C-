#include "Cours.h"
using namespace std;

/* Constructeur*/
Cours::Cours() : nom("")
{
               
}

/* Destructeur */
Cours::~Cours()
{
}

string Cours::getNom()
{
    return nom;
}

time Cours::getDateDebut()
{
     return dateDebut;
}

time Cours::getDateFin()
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


vector <Etudiant> getListePrinc()
{
       return lp;   
}

vector <Etudiant> getListeAttente()
{
       return la;
}

vector <Ressource> getListeRessource()
{
       return lr;
}


int getPlace(Etudiant &e, vector<Etudiant> i)
{
    //compte en parcourant ? 
}

int Cours::rechercheEtudiant(Etudiant &e)
{
    // si dans lp return 1
    //si dans la return 2
    // else return 0
}
 
int Cours::inscrire(Etudiant &e)
{
    if (lpPleine())
    { 
         la.push_back(&e);
         return getPlace(&e, la);
    }
    else
    {
        lp.push_back(&e);
        return 0;
    }
}
 
void Cours::addRessource(Ressource &r)
{
     lr.insert(&r);
}
  
Ressource Cours::getRessource(string nom)
{
}

Collection<Cours> Cours::getListe(int statut)
{
}

int Cours::getMaxInscrit()
{
    return nbMaxInscrits;
}

boolean Cours::lpPleine()
{
   return (lp.size >= getMaxInscrit());
} 
