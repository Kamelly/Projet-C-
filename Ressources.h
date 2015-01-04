#pragma once

#ifndef RESSOURCES
#define RESSOURCES

#include<string>
//#include "Cours.h"

class Ressources
{

private:

	std::string nom;
	std::string commentaire;

public:
	Ressources();
	~Ressources();

	std::string getNom();
};

#endif

