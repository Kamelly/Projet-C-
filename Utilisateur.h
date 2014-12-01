<<<<<<< HEAD
#ifndef DEF_UTILISATEUR
=======
#ifndef UTILISATEUR
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
#define UTILISATEUR

#include<string>
#include<ctime>
#include<vector>
<<<<<<< HEAD
#include<Etudiant.h>
#include<Enseignant.h>
#include<Plateforme.h>
=======
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d


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
<<<<<<< HEAD
      virtual std::string getStatut() = 0;
=======
      virtual std::string getStatut();
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
      std::string getLogin();
      std::string getNom();
      std::string getMail();
      std::string getPrenom();
      
};

#endif
