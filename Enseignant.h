#ifndef ENSEIGNANT
#define ENSEIGNANT

#include<string>
#include"Utilisateur.h"


class Enseignant
{ 
      
      public :
             
      Enseignant(); /* Constructeur*/
      ~Enseignant(); /*Destructeur */
      virtual std::string getStatut();
      
};

#endif
