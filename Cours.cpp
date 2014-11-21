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

string getNom()
{
    return nom;
}

time getDateDebut()
{
     return dateDebut;
}

time getDateFin()
{
     return dateFin;
}

int getStatut()
{
    return statut;
}

void setStatut(int s)
{
     statut = s;
}

Enseignant getProf()
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

int rechercheEtudiant(Etudiant &e)
{
    // si dans lp return 1
    //si dans la return 2
    // else return 0
}

int inscrire(Etudiant &e)
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
 
void addRessource(Ressource &r)
{
     lr.insert(&r);
}
  
Ressource getRessource(string nom)
{
          //chercher la resssource dans la liste puis la renvoyer
}

int getMaxInscrit()
{
    return nbMaxInscrits;
}

boolean lpPleine()
{
   return (lp.size >= getMaxInscrit());
} 
