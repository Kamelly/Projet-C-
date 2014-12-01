<<<<<<< HEAD
#ifndef DEF_ETUDIANT
#define ETUDIANT

#include<string>
#include<Utilisateur.h>
=======
#ifndef ETUDIANT
#define ETUDIANT

#include<string>
#include "Utilisateur.h"
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d


class Etudiant
{
      private :
              
      int nbCours;     
      
      public :
             
      Etudiant(); /* Constructeur*/
      ~Etudiant(); /*Destructeur */
      int getNbCours();
      virtual std::string getStatut();
      
};

#endif
