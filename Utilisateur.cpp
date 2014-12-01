#include "Utilisateur.h"
using namespace std;

/* Constructeur*/
Utilisateur::Utilisateur() : login(""),nom(""),prenom(""),mail("")
{
              
}

/* Destructeur */
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
