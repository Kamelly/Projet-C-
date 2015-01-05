#include "Utilisateur.h"
#include "Enseignant.h"
using namespace std;


Utilisateur::Utilisateur(string log) :  nom(""), prenom(""), mail("")
{
	login = login;
}

Utilisateur::Utilisateur(string n, string p)
{
	
	
	login = "";
	nom = n;
	prenom = p;
	mail = "";
}

Utilisateur::Utilisateur() : login(""), nom(""), prenom(""), mail(""){

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
