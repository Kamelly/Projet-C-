#ifndef DEF_PLATEFORME
#define PLATEFORME

#include<string>
#include<ctime>
#include<vector>
#include<Utilisateur.h>
#include<Cours.h>

class Plateforme
{
      private :
              
      std::string logActif;
      int nbMaxCours;
      std::vector<Utilisateur> lUti();
      std::vector<Cours> lCours();
      
      
      public :
             
      Plateforme(); /*Constructeur*/
      ~Plateforme(); /*Destructeur*/
      void addCours(Cours &cours);
      void addUtilisateur(Utilisateur &u);
      void setLogActif(std::string login);
      std::vector<Cours> getLcours();
      std::vector<Utilisateur> getLuti();
      Cours getCours(std::string nom);
      Utilisateur getUti(std::string login);
      boolean existeLogin(std::string login);
      std::string creerLogin(int statut, std::string nom);
      std::vector<Cours> getCoursEtu(Etudiant &e);
      std::vector<Cours> getCoursProf(Enseignant &e);
      void envoyerNotification(std::string message, Utilisateur &u);
      void validerCours(Cours &c, int i);
      boolean datePassee(std::ctime d1, std::ctime d2);
      void deconnexion();
      void supprimerCours(Cous &c);
      void supprimerUti(Utilisateur &u);
      
};

#endif
