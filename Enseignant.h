#pragma once
#ifndef ENSEIGNANT
#define ENSEIGNANT

#include<string>
#include "Utilisateur.h"

class Enseignant : public Utilisateur
{
public:
	Enseignant();
	Enseignant(std::string n, std::string p);
	~Enseignant();
	virtual std::string getStatut();
};

#endif
