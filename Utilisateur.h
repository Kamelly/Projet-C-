#pragma once

#ifndef UTILISATEUR
#define UTILISATEUR

#include<string>
#include<ctime>
#include<vector>

class Utilisateur
{

private:

	
	std::string nom;
	std::string prenom;
	std::string mail;


public:
	Utilisateur();
	Utilisateur(std::string log);
	Utilisateur(std::string n, std::string p);
	~Utilisateur();

	std::string login;

	std::string getStatut();

	std::string getLogin();
	std::string getNom();
	std::string getMail();
	std::string getPrenom();
};

#endif

