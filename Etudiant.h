#pragma once

#ifndef ETUDIANT
#define ETUDIANT

#include<string>
#include "Utilisateur.h"

class Etudiant : public Utilisateur
{
private:

	int nbCours;

public:

	Etudiant(); /* Constructeur*/
	~Etudiant(); /*Destructeur */
	int getNbCours();
	virtual std::string getStatut();
	//std::string getLogin();
};

#endif