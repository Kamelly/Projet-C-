#ifndef DEF_UTILISATEUR
#define UTILISATEUR

#include<string>
#include<ctime>
#include<vector>
#include<Etudiant.h>
#include<Enseignant.h>
#include<Plateforme.h>


class Utilisateur
{
      private :
              
      std::string login;
      std::string nom;
      std::string prenom;
      std::string mail;      
      
      public :
             
      Utilisateur(); /* Constructeur*/
      ~Utilisateur(); /*Destructeur */
      virtual std::string getStatut() = 0;
      std::string getLogin();
      std::string getNom();
      std::string getMail();
      std::string getPrenom();
      
};

#endif
