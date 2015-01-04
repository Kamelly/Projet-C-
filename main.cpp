#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include"Plateforme.h"

using namespace std;

long double x, y;
string login;

int main(int argc, const char* argv[])
{
	Plateforme p = Plateforme();
	printf("\nBienvenue sur la Plateforme de Gestion de Cours!\n");
	cout << "Entrez votre login : ";
	getline(cin, login);
	cout << "Bonjour, " << login << "!\n";
	if (login == "admin"){
		/*******************************************ADMIN***********************************************/
		int chosenInt = -1;
		int go_on = 1;

		char* menu =
			"Accueil Admin \n\n0 Quitter \n1 Ajouter un utilisateur \n2 Supprimer un utilisateur \n3 Valider/Refuser un cours \n4 Consulter liste de tous les utilisateur \n5 Deconnexion \n\n";

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
				/****************Ajouter un utilisateur **********/
			case 1:

				go_on = 0;
				break;
				/****************Supprimer un utilisateur **********/
			case 2:

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
				p.deconnexion();
				go_on = 0;
				break;
			default:
				printf("Choix inexistant !!!!\n");
				printf("%s", menu);

			}// fin switch
		} //fin while
	}
	else{
		string statut = login.substr(0, 1);
		cout << statut ;
		if (statut == "e"){
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
		else{
			if (statut == "p"){
				/*******************************************ENSEIGNANT***********************************************/
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
				} //fin while
			}
		}
	}
	system("pause");
	return 0;

}
