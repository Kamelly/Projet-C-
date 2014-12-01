<<<<<<< HEAD
#ifndef DEF_ENSEIGNANT
#define ENSEIGNANT

#include<string>
#include<Utilisateur.h>
=======
#ifndef ENSEIGNANT
#define ENSEIGNANT

#include<string>
#include"Utilisateur.h"
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d


class Enseignant
{ 
      
      public :
             
      Enseignant(); /* Constructeur*/
      ~Enseignant(); /*Destructeur */
      virtual std::string getStatut();
      
};

#endif
