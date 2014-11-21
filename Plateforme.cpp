#include "Plateforme.h"


/* Ajouter une fonction qui permet de trouver a quel endroit(position) ce trouve un objet dans une liste */

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
     lCours.push_back(&cours); 
}

void Plateforme::addUtilisateur(Utilisateur &u)
{
     lUti.push_back(&u);
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
/* tant que liste non vide faire 
 Cours cour = lCours.front();
if(cour.getNom() == nom)
{
return cour;
}
LCours = reste de LCours
ATTENTION faut creer un lite supprimer le premier de la liste puis la copier dans l'ancienne 
*/
     
}

Utilisateur Plateforme::getUti(string login)
{
/* tant que liste non vide faire 
 Utilisateur uti = lUti.front();
if(uti.getNom() == login)
{
return uti;
}
lUti = reste de lUti
ATTENTION faut creer un lite supprimer le premier de la liste puis la copier dans l'ancienne 
*/
}
      
boolean Plateforme::existeLogin(string login)
{
        /*if( login est dans lUti) 
        return true ;
        else
        return false*/
}

string Plateforme::creerLogin(int statut, string nom)
{
       
}


vector<Cours> Plateforme::getCoursEtu(Etudiant &e)
{
/* creer une liste vide lcourEtu
 Pour chaque cours c
 si cours valide 
 { 
pour chaque etudiant e de la liste du cour
if( &e == e)
{
lcourEtu.add(c);
}
}
sinon
{
     parcour liste princ + liste attente
     }
     */

}

vector<Cours> Plateforme::getCoursProf(Enseignant &e)
{
}


void Plateforme::envoyerNotification(string message, Utilisateur &u)
{
     /* recupere le mail de l'utilisateur 
     envoyer un message "String"
     */
}

void Plateforme::validerCours(Cours &c, int i)
{
     &c.setStatut(i);     
}

boolean Plateforme::datePassee(ctime d1, ctime d2)
{
  return d1==d2;
}

void Plateforme::deconnexion()
{
}

void Plateforme::supprimerCours(Cous &c)
{
     /* trouve la position du cours voulu dans vector puis */ 
     //lcours.erase(/*iterator position*/);
}

void Plateforme::supprimerUti(Utilisateur &u)
{
     /*trouver la position de l'utilisateur dans Vector puis*/
    // lUti.erase(/*iterator position*/)
}
