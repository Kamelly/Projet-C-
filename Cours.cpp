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

/*
Enseignant getProf()
{
           return prof;
}

int rechercheEtudiant(Etudiant &e)
{
}
 
int inscrire(Etudiant &e)
{
}
 
void addRessource(Ressource &r)
{
}
  
Ressource getRessource(string nom)
{
}

Collection<Cours> getListe(int statut)
{
}

int getMaxInscrit()
{
}

boolean lpPleine()
{
} */
