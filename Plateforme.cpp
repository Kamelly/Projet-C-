#include "Plateforme.h"


using namespace std;

/* Constructeur*/
Plateforme::Plateforme(): nbMaxCours(0)
{
	// On initialise la taille des vectors
	lUti.reserve(50);
	lCours.reserve(50);
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

// Mélanie P : En fait, tu as fait d'une autre manière que celle que j'avais à l'esprit mais ça marche tout aussi bien 

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

 
/* Fonction getUti corrigée par le prof!
Utiliser comme ca :
Utilisateur u;
bool succes = plateforme->getUti("gna", u);
SI on a trouvé l'utilisateur, il est dans u et succes vaut TRUE, sinon succes vaux FALSE

*/
bool Plateforme::getUti(string login, Utilisateur &u)
{
	for (unsigned int i = 0; i < lUti.size(); i++) {
		// Si le login de l'utilisateur à l'indice i == le login de u
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


vector<Cours> Plateforme::getCoursEtu(Etudiant &e)
{
	//creer une liste vide lcourEtu
	vector<Cours> lCoursEtu;
	vector<Etudiant> listeEtudiantP;
	vector<Etudiant> listeEtudiantA;
	// Pour chaque cours i
	for (unsigned int i = 0; i < lCours.size(); i++)
    {
        listeEtudiantP = LCours[i].getListePrinc();
        // pour chaque etudiant de la liste principal
        for(unsigned int j = 0 ; j < listeEtudiantP.size() ; j++)
        {
                     if(listeEtudiant[j].compare(e) == 0)
                     {
                      lCoursEtu.push_back(i);
                     }
        }
       	// si le cours est en attente 
		if (lCours[i].getStatut() == -1)
        {
          listeEtudiantA = LCours[i].getListeAttente();
          // Pour chaque etudiant de la liste d'attente
         for(unsigned int j = 0 ; j < listeEtudiantA.size() ; j++)
           {
             if(listeEtudiant[j].compare(e) == 0)
              {
                lCoursEtu.push_back(i);
              }
           }
        }
    }
    return lCoursEtu;
}


vector<Cours> Plateforme::getCoursProf(Enseignant &e)
{
  vector<Cours> lCoursProf;
  for (unsigned int i = 0 ; i< lCours.size(); i++)
    {
      if((lCours[i].getProf()).compare(e) == 0)
	{
	  // ajouter le cour dans la liste des cours du prof
	  lCoursProf.push_back(i);
	}
    }

}

// On va la modifier pour qu'au lieu d'envoyer un mail elle donne une liste de notification quand le gars se connecte (mel P)
// Ca veut dire qu'il faut ajouter une liste de notification (collection<String>) dans utilisateur.... (mel B)
void Plateforme::envoyerNotification(string message, Utilisateur &u)
{
  for (unsigned int i = 0; i < lUti.size(); i++)
    {
      if ((lUti[i].getLogin()).compare(u) == 0)
	{
	  string mail = getmail() ;
	  // l'envoyer et ajouter un message
	}
    }
}
      

void Plateforme::validerCours(Cours &c, int i)
{
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
}


// A faire mais je ne sais pas comment 
void Plateforme::deconnexion()
{
}

void Plateforme::supprimerCours(Cours &c)
{
	for (int i = 0; i< (int)lCours.size(); ++i){
		// Si le nom du cours à l'indice i == le nom du cours c
		if (lCours[i].getNom().compare(c.getNom()) == 0)
			lCours.erase(lCours.begin()+i-1);
	}
}

void Plateforme::supprimerUti(Utilisateur &u)
{
	for (int i = 0; i< (int)lUti.size(); ++i){
		// Si le login de l'utilisateur à l'indice i == le login de u
		if (lUti[i].getLogin().compare(u.getLogin()) == 0)
			lUti.erase(lUti.begin()+ i-1);
	}
}
  vector <Cours> Cours::getListe(int statut)
    {
          vector<Cours> lCoursStatut;
          for ( unsigned int i = 0; i< lCours.size() ; i++)
          {
              if (lCours[i].getStatut() == statut)
              { 
                lCoursStatut.push_back(i); 
              } 
          }
          return lCoursStatus;                                                     
}
