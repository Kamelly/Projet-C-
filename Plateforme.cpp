#include "Plateforme.h"

using namespace std;

/* Constructeur*/
Plateforme::Plateforme(): nbaxCours(0)
{
}

/* Destructeur */
Plateforme::~Plateforme()
{
}

void addCours(Cours &cours)
{
}

void addUtilisateur(Utilisateur &u)
{
}

void setLogActif(string login)
{
     logActif = login;
}
 
vector<Cours> getLcours()
{
   return lCours;
}

vector<Utilisateur> getLuti()
{
 return lUti;
}

Cours getCours(string nom)
{
}

Utilisateur getUti(string login)
{
}
      
boolean existeLogin(string login)
{
}

string creerLogin(int statut, string nom)
{
}


vector<Cours> getCoursEtu(Etudiant &e)
{
}

vector<Cours> getCoursProf(Enseignant &e)
{
}


void envoyerNotification(string message, Utilisateur &u)
{
}

void validerCours(Cours &c, int i)
{
}

boolean datePassee(ctime d1, ctime d2)
{
}

void deconnexion()
{
}

void supprimerCours(Cous &c)
{
}

void supprimerUti(Utilisateur &u)
{
}
