#ifndef DEF_COURS
#define COURS

#include<string>
#include<ctime>
#include<vector>
#include<Etudiant.h>
#include<Enseignant.h>
#include<Ressource.h>


class Cours
{
      private :
              
      std::string nom;
      std::time dateDebut;
      std::time dateFin;
      int statut; /*-1 si le cours est en attente,0 si il est validé, 1 si il est commencé */
      Enseignant prof;
      /* COLLECTIONS */
      std::vector<Etudiant> lp();
      std::vector<Etudiant> la();
      std::vector<Ressource> lr();
      int nbMaxInscrits;
      
      
      public :
             
      Cours(); /* Constructeur*/
      std::string getNom();
      std::time getDateDebut();
      std::time getDateFin();
      int getStatut();
      void setStatut(int statut);
      Enseignant getProf(); 
      vector <Etudiant> getListePrinc();
      vector <Etudiant> getListeAttente();
      vector <Ressource> getListeRessource();
      int getPlace(Etudiant &e, vector<Etudiant> i);
      int rechercheEtudiant(Etudiant &e);
      int inscrire(Etudiant &e);
      void addRessource (Ressource &r);
      Ressource getRessource(std::string nom);
      int getMaxInscrit();
      boolean lpPleine();   
      
};

#endif
