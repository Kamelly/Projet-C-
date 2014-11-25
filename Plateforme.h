#ifndef PLATEFORME
#define PLATEFORME

#include<string>
#include<ctime>
#include<vector>
#include<iterator>
#include"Utilisateur.h"
#include"Cours.h"

class Plateforme
{
      private :
              
      std::string logActif;
      int nbMaxCours;
      std::vector<Utilisateur> lUti;
      std::vector<Cours> lCours;
      
      
      public :
             
      Plateforme(); /*Constructeur*/
      ~Plateforme(); /*Destructeur*/
      void addCours(Cours &cours);
      void addUtilisateur(Utilisateur &u);
      void setLogActif(std::string login);
      std::vector<Cours> getLcours();
      std::vector<Utilisateur> getLuti();
      bool getCours(std::string nom, Cours &c);
      bool getUti(std::string login, Utilisateur &u);
      bool existeLogin(std::string login);
      std::string creerLogin(std::string statut, std::string nom);
      std::vector<Cours> getCoursEtu(Etudiant &e);
      std::vector<Cours> getCoursProf(Enseignant &e);
      void envoyerNotification(std::string message, Utilisateur &u);
      void validerCours(Cours &c, int i);
      bool datePassee(time_t d1, time_t d2);
      void deconnexion();
      void supprimerCours(Cours &c);
      void supprimerUti(Utilisateur &u);
      
};

#endif
