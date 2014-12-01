<<<<<<< HEAD
#ifndef DEF_PLATEFORME
=======
#ifndef PLATEFORME
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
#define PLATEFORME

#include<string>
#include<ctime>
#include<vector>
<<<<<<< HEAD
#include<Utilisateur.h>
#include<Cours.h>
=======
#include<iterator>
#include"Utilisateur.h"
#include"Cours.h"
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d

class Plateforme
{
      private :
              
      std::string logActif;
      int nbMaxCours;
<<<<<<< HEAD
      std::vector<Utilisateur> lUti();
      std::vector<Cours> lCours();
=======
      std::vector<Utilisateur> lUti;
      std::vector<Cours> lCours;
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
      
      
      public :
             
      Plateforme(); /*Constructeur*/
      ~Plateforme(); /*Destructeur*/
      void addCours(Cours &cours);
      void addUtilisateur(Utilisateur &u);
      void setLogActif(std::string login);
      std::vector<Cours> getLcours();
      std::vector<Utilisateur> getLuti();
<<<<<<< HEAD
      Cours getCours(std::string nom);
      Utilisateur getUti(std::string login);
      boolean existeLogin(std::string login);
      std::string creerLogin(int statut, std::string nom);
=======
      bool getCours(std::string nom, Cours &c);
      bool getUti(std::string login, Utilisateur &u);
      bool existeLogin(std::string login);
      std::string creerLogin(std::string statut, std::string nom);
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
      std::vector<Cours> getCoursEtu(Etudiant &e);
      std::vector<Cours> getCoursProf(Enseignant &e);
      void envoyerNotification(std::string message, Utilisateur &u);
      void validerCours(Cours &c, int i);
<<<<<<< HEAD
      boolean datePassee(std::ctime d1, std::ctime d2);
      void deconnexion();
      void supprimerCours(Cous &c);
=======
      bool datePassee(time_t d1, time_t d2);
      void deconnexion();
      void supprimerCours(Cours &c);
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
      void supprimerUti(Utilisateur &u);
      
};

#endif
