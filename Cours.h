<<<<<<< HEAD
#ifndef DEF_COURS
=======
#ifndef COURS
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
#define COURS

#include<string>
#include<ctime>
#include<vector>
<<<<<<< HEAD
#include<Etudiant.h>
#include<Enseignant.h>
#include<Ressource.h>
=======
#include"Etudiant.h"
#include"Enseignant.h"
#include"Ressource.h"
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d


class Cours
{
      private :
              
      std::string nom;
<<<<<<< HEAD
      std::time dateDebut;
      std::time dateFin;
      int statut; /*-1 si le cours est en attente,0 si il est validé, 1 si il est commencé */
      Enseignant prof;
      /* COLLECTIONS */
      std::vector<Etudiant> lp();
      std::vector<Etudiant> la();
      std::vector<Ressource> lr();
=======
      std::time_t dateDebut;
      std::time_t dateFin;
      int statut; /*-1 si le cours est en attente,0 si il est validé, 1 si il est commencé */
      Enseignant prof;
      /* COLLECTIONS */
      std::vector<Etudiant> lp;
      std::vector<Etudiant> la;
      std::vector<Ressource> lr;
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
      int nbMaxInscrits;
      
      
      public :
             
      Cours(); /* Constructeur*/
<<<<<<< HEAD
<<<<<<< HEAD
      std::string getNom();
=======
      ~Cours(); /*Destructeur */
      int getNom();
>>>>>>> 723c17b0292328c2b12047611279656bd2ca4ac9
      std::time getDateDebut();
      std::time getDateFin();
      int getStatut();
      void setStatut(int statut);
      Enseignant getProf(); 
      vector <Etudiant> getListePrinc();
      vector <Etudiant> getListeAttente();
      vector <Ressource> getListeRessource();
      int getPlace(Etudiant &e, vector<Etudiant> i);
=======
      ~Cours(); /*Destructeur */
	  std::string getNom();
      std::time_t getDateDebut();
      std::time_t getDateFin();
      int getStatut();
      void setStatut(int statut);
      Enseignant getProf(); 
      std::vector<Etudiant> getListePrinc();
      std::vector<Etudiant> getListeAttente();
      std::vector<Ressource> getListeRessource();
      int getPlace(Etudiant &e, std::vector<Etudiant> i);
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
      int rechercheEtudiant(Etudiant &e);
      int inscrire(Etudiant &e);
      void addRessource (Ressource &r);
      Ressource getRessource(std::string nom);
      int getMaxInscrit();
<<<<<<< HEAD
      boolean lpPleine();   
=======
      bool lpPleine();   
>>>>>>> fb3ac5603c51c645041796e602c831db4e707e9d
      
};

#endif
