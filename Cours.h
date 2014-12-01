#ifndef COURS

#define COURS

#include<string>
#include<ctime>
#include<vector>

#include"Etudiant.h"
#include"Enseignant.h"
#include"Ressource.h"



class Cours
{
      private :
              
      std::string nom;
      std::time_t dateDebut;
      std::time_t dateFin;
      int statut; /*-1 si le cours est en attente,0 si il est validé, 1 si il est commencé */
      Enseignant prof;
      /* COLLECTIONS */
      std::vector<Etudiant> lp;
      std::vector<Etudiant> la;
      std::vector<Ressource> lr;

      int nbMaxInscrits;
      
      
      public :
             
      Cours(); /* Constructeur*/
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
      int rechercheEtudiant(Etudiant &e);
      int inscrire(Etudiant &e);
      void addRessource (Ressource &r);
      Ressource getRessource(std::string nom);
      int getMaxInscrit();
      bool lpPleine();   
      
};

#endif
