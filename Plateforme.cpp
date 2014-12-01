#include "Plateforme.h"


/* Ajouter une fonction qui permet de trouver a quel endroit(position) ce trouve un objet dans une liste */

using namespace std;

/* Constructeur*/
Plateforme::Plateforme(): nbMaxCours(0)
{
	// On initialise la taille des vectors
	lUti.reserve(50);
	lCours.reserve(50);
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
}

/* Destructeur */
Plateforme::~Plateforme()
{
}

void Plateforme::addCours(Cours &cours)
{
     lCours.push_back(cours); 
}

void Plateforme::addUtilisateur(Utilisateur &u)
{
     lUti.push_back(u);
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

<<<<<<< HEAD
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
              }

// Devrait fonctionner, mais je comprend pas le reste de l'algo :
//LCours = reste de LCours
//ATTENTION faut creer un lite supprimer le premier de la liste puis la copier dans l'ancienne
bool Plateforme::getCours(string nom, Cours &c)
{
	for (unsigned int i = 0; i < lCours.size(); i++) {
		if (lCours[i].getNom().compare(nom) == 0){
			c = lCours[i];
			return true;
		}
	}
	return false;     
}

/* Fonction corrig�e par le prof!
Utiliser comme ca :
Utilisateur u;
bool succes = plateforme->getUti("gna", u);
SI on a trouv� l'utilisateur, il est dans u et succes vaut TRUE, sinon succes vaux FALSE

Je comprends pas le reste de l'algo :
lUti = reste de lUti
ATTENTION faut creer un lite supprimer le premier de la liste puis la copier dans l'ancienne
*/
bool Plateforme::getUti(string login, Utilisateur &u)
{
	for (unsigned int i = 0; i < lUti.size(); i++) {
		// Si le login de l'utilisateur � l'indice i == le login de u
		if (lUti[i].getLogin().compare(login) == 0) {
			u = lUti[i];
			return true;
		}
	}
	return false;
}
      
bool Plateforme::existeLogin(string login)
{
	for (unsigned int i = 0; i<lUti.size(); ++i)
	{
		if ((lUti[i].getLogin()).compare(login) == 0)
			return true;
	}
	return false;
}

string Plateforme::creerLogin(string statut, string nom)
{
	if (statut.compare("etudiant") == 0)
		return "e_" + nom;
	if (statut.compare("enseignant") == 0)
		return "p_" + nom;  
	return "admin";
}


// Fonction pas finie, je (Florine) comprend pas l'algo
vector<Cours> Plateforme::getCoursEtu(Etudiant &e)
{
	//creer une liste vide lcourEtu
	vector<Cours> lCoursEtu;
	// Pour chaque cours c
	for (unsigned int i = 0; i < lCours.size(); i++){
		// si cours valide 
		if (lCours[i].getStatut() == 0){

		}
	}


	/*
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
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
<<<<<<< HEAD
     &c.setStatut(i);     
}

boolean Plateforme::datePassee(ctime d1, ctime d2)
{
  return d1==d2;
=======
     c.setStatut(i);     
}

bool Plateforme::datePassee(time_t d1, time_t d2)
{
	double temps = difftime(d2, d1);
	// SI D2 < D1
	if (temps > 0) 
		return true;
	// SI d2 <= d1
	return false;
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
}

void Plateforme::deconnexion()
{
}

<<<<<<< HEAD
void Plateforme::supprimerCours(Cous &c)
{
     /* trouve la position du cours voulu dans vector puis */ 
     //lcours.erase(/*iterator position*/);
=======
void Plateforme::supprimerCours(Cours &c)
{
	for (int i = 0; i< (int)lCours.size(); ++i){
		// Si le nom du cours � l'indice i == le nom du cours c
		if (lCours[i].getNom().compare(c.getNom()) == 0)
			lCours.erase(lCours.begin()+i-1);
	}
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
}

void Plateforme::supprimerUti(Utilisateur &u)
{
<<<<<<< HEAD
     /*trouver la position de l'utilisateur dans Vector puis*/
    // lUti.erase(/*iterator position*/)
=======
	for (int i = 0; i< (int)lUti.size(); ++i){
		// Si le login de l'utilisateur � l'indice i == le login de u
		if (lUti[i].getLogin().compare(u.getLogin()) == 0)
			lUti.erase(lUti.begin()+ i-1);
	}
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
}
