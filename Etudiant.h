#ifndef ETUDIANT
#define ETUDIANT

#include<string>
#include "Utilisateur.h"


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
