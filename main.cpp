#include <stdio.h>
#include <iostream>
#include"Plateforme.h"

using namespace std;

long double x, y;
string login;

int main(int argc, const char* argv[])
{
	printf("\nBienvenue sur la Plateforme de Gestion de Cours!\n");
	cout << "Entrez votre login : ";
	getline(cin, login);
	cout << "Bonjour, " << login << "!\n";
	Plateforme p = Plateforme(login);
	if (login == "admin"){
		/*******************************************ADMIN***********************************************/
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
				scanf_s("%d", chosenInt);
				switch (chosenInt) {
				case 0:
					go_on = 0;
					break;
				case 1:

					go_on = 0;
					break;
				case 2:

					go_on = 0;
					break;
				case 3:

					go_on = 0;
					break;
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
			}
		}
	}
	system("pause");
	return 0;

}
