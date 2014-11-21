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

/*
Enseignant Cours::getProf()
{
           return prof;
}

int Cours::rechercheEtudiant(Etudiant &e)
{
}
 
int Cours::inscrire(Etudiant &e)
{
}
 
void Cours::addRessource(Ressource &r)
{
}
  
Ressource Cours::getRessource(string nom)
{
}

Collection<Cours> Cours::getListe(int statut)
{
}

int Cours::getMaxInscrit()
{
}

boolean Cours::lpPleine()
{
} */
