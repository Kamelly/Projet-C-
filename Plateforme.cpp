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

void Plateforme::addCours(Cours &cours)
{
}

void Plateforme::addUtilisateur(Utilisateur &u)
{
}

void Plateforme::setLogActif(string login)
{
     logActif = login;
}
 
vector<Cours> Plateforme::getLcours()
{
   return lCours;
}

vector<Utilisateur> Plateforme::getLuti()
{
 return lUti;
}

Cours Plateforme::getCours(string nom)
{
}

Utilisateur Plateforme::getUti(string login)
{
}
      
boolean Plateforme::existeLogin(string login)
{
}

string Plateforme::creerLogin(int statut, string nom)
{
}


vector<Cours> Plateforme::getCoursEtu(Etudiant &e)
{
}

vector<Cours> Plateforme::getCoursProf(Enseignant &e)
{
}


void Plateforme::envoyerNotification(string message, Utilisateur &u)
{
}

void Plateforme::validerCours(Cours &c, int i)
{
}

boolean Plateforme::datePassee(ctime d1, ctime d2)
{
}

void Plateforme::deconnexion()
{
}

void Plateforme::supprimerCours(Cous &c)
{
}

void Plateforme::supprimerUti(Utilisateur &u)
{
}
