#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include"Plateforme.h"
#include "Utilisateur.h"
#include "Cours.h"

using namespace std;

long double x, y;
string login;

int main(int argc, const char* argv[])
{

	printf("\nBienvenue sur la Plateforme de Gestion de Cours!\n");
	Plateforme p = Plateforme();
	login = p.deconnexion();
	Utilisateur u = Utilisateur("a");
	// Si le login correspond a un utilisateur

	bool connu = false;
	while (!connu){
		if (p.getUti(login, u) || login == "admin"){
			connu = true;
		}
		// Sinon
		else{
			printf("Utilisateur inconnu\n");
			login = p.deconnexion();
		}
	}
	
	if (login == "admin"){
		/*******************************************ADMIN***********************************************/
		int chosenInt = -1;
		int go_on = 1;
		string nom = "nom";
		string prenom = "prenom";
		

		char* menu =
			"Accueil Admin \n\n0 Quitter \n1 Ajouter un utilisateur \n2 Supprimer un utilisateur \n3 Valider/Refuser un cours \n4 Consulter liste de tous les utilisateur \n5 Deconnexion \n\n";

		char* invite = "--> Quel est votre choix  ? ";
		printf("%s", menu);
		while (go_on == 1) {
			printf("%s", invite);
			scanf_s("%d", &chosenInt);
			int chosenInt2 = -1;
			int go_on2 = 1;		
			Utilisateur e;

			switch (chosenInt) {
				/****************Quitter **********/
			case 0:
				go_on = 0;
				break;
				/****************Ajouter un utilisateur **********/
			case 1:
				printf("Creation d'un utilisateur\n");

				printf("\n Nom :");
				//getline(cin,nom);
				//printf("\nNom reçu : %s \n", nom);
				//scanf_s("%s", &nom);
				printf("\n Prenom :\n");
				//getline(cin, prenom);
				//scanf_s("%s", &prenom);
				printf("%s %s", nom, prenom);
				
				
				while (go_on2 == 1){
					printf("\n0 Creation Enseignant \n1 Creation etudiant\n");
					printf("\nQuel est votre choix ?\n");

					scanf_s("%d", &chosenInt);
					switch (chosenInt2){
					case 0:
						//e = Enseignant(nom, prenom);
						go_on = 0;
						break;
					case 1:
						//e = Etudiant(nom, prenom);
						go_on = 0;
						break;
					default:
						printf("Choix inexistant\n");
						break;
					}
				}
				
				go_on = 0;
				break;
				/****************Supprimer un utilisateur **********/
			case 2:
				printf("Suppression d'un utilisateur \n");
				go_on = 0;
				break;
				/****************Valider/Refuser un cours **********/
			case 3:

				go_on = 0;
				break;
				/****************Consulter liste tous cours **********/
			case 4:

				go_on = 0;
				break;
				/****************Deconnexion **********/
			case 5:
				login = p.deconnexion();
				go_on = 0;
				break;
			default:
				printf("Choix inexistant !!!!\n");
				printf("%s", menu);
				break;
			}// fin switch
		} //fin while
	}
	else{
			string statut = login.substr(0, 1);
			if (statut == "p"){
				/*******************************************ENSEIGNANT***********************************************/
				//				Enseignant e = Enseignant();
				int chosenInt = -1;
				int go_on = 1;

				char* menu =
					"Accueil Enseignant \n\n0 Quitter \n1 Ajouter un cours \n2 Supprimer un cours \n3 Consulter mes cours \n4 Deconnexion \n\n";

				char* invite = "--> Quel est votre choix  ? ";

				printf("%s", menu);
				while (go_on == 1) {
					printf("%s", invite);
					scanf_s("%d", &chosenInt);
					switch (chosenInt) {
						/****************Quitter **********/
					case 0:
						go_on = 0;
						break;
						/****************Ajouter un cours **********/
					case 1:

						go_on = 0;
						break;
						/****************Supprimer un cours **********/
					case 2:

						go_on = 0;
						break;
						/****************Consulter mes cours **********/
					case 3:

						go_on = 0;
						break;
						/****************Deconnexion **********/
					case 4:

						go_on = 0;
						break;
					default:
						printf("Choix inexistant !!!!\n");
						printf("%s", menu);

					}// fin switch
				}
			}
			else{
				/*******************************************ETUDIANT***********************************************/
				// TESTER SI DANS LISTE

				int chosenInt = -1;
				int go_on = 1;

				char* menu =
					"Acceuil Etudiant \n\n0 Quitter \n1 Consulter mes cours \n2 Inscription à un cours \n3 Desinscription à un cours \n4 Deconnexion \n\n";

				char* invite = "--> Quel est votre choix  ? ";

				printf("%s", menu);
				while (go_on == 1) {
					printf("%s", invite);
					scanf_s("%d", &chosenInt);
					switch (chosenInt) {
						/****************Quitter **********/
					case 0:
						go_on = 0;
						exit(0);
						break;
						/****************Consulter mes cours **********/
					case 1:
						//p.getCoursEtu()
						go_on = 0;
						break;
						/****************Inscription à un cours **********/
					case 2:

						go_on = 0;
						break;
						/****************Desinscription à un cours **********/
					case 3:

						go_on = 0;
						break;
						/****************Deconnexion **********/
					case 4:

						go_on = 0;
						break;
					default:
						printf("Choix inexistant !!!!\n");
						printf("%s", menu);

					}// fin switch
				} //fin while
			}
		}
		system("pause");
		return 0;
	
}
