#ifndef UTILISATEUR
#define UTILISATEUR

#include<string>
#include<ctime>
#include<vector>


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
      virtual std::string getStatut();
      std::string getLogin();
      std::string getNom();
      std::string getMail();
      std::string getPrenom();
      
};

#endif
