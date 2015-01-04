#include "Cours.h"
using namespace std;



/* Constructeur*/
Cours::Cours() : nom(""), dateDebut(), dateFin(), statut(), prof(), lp(), la(), lr(), nbMaxInscrits()
{
// Je ne sais pas si l'initialiation est bonne...
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

vector <Ressources> Cours::getListeRessource()
{
	return lr;
    //return la;
}


int Cours::getPlace(Etudiant &e, vector<Etudiant> i)
{
	int comp = 1;
	for (unsigned int j = 0; j <= i.size(); j++)
	{
		if (i[j].getLogin().compare(e.getLogin()) == 0)
		{
			return comp;
		}
		comp = comp + 1;
	}
}

int Cours::rechercheEtudiant(Etudiant &e)
{
	for (unsigned int i = 0; i < lp.size(); i++){

		if (lp[i].getLogin().compare(e.getLogin()) == 0)
		{
			return 1;
		}
	}
	for (unsigned int j = 0; j < la.size(); j++){
		if (la[j].getLogin().compare(e.getLogin()) == 0)
		{
			return 2;
		}
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

void Cours::addRessource(Ressources &r)
{
	lr.push_back(r);
}

Ressources Cours::getRessource(string nom)
{
	for (unsigned int i = 0; i < lr.size(); i++){
		if (lr[i].getNom().compare(nom) == 0)
		{
			return lr[i];
		}
		else
		{
			//erreur : ressource non trouvée
		}
	}
}


int Cours::getMaxInscrit()
{
	return nbMaxInscrits;
}

bool Cours::lpPleine()
{
	return ((int)lp.size() >= getMaxInscrit());
}
