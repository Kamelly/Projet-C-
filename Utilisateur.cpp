#include "Utilisateur.h"
using namespace std;


Utilisateur::Utilisateur() : login(""), nom(""), prenom(""), mail("")
{
}


Utilisateur::~Utilisateur()
{
}

string Utilisateur::getLogin(){
	return login;
}

string Utilisateur::getNom(){
	return nom;
}

string Utilisateur::getMail(){
	return mail;
}

string Utilisateur::getPrenom(){
	return prenom;
}
