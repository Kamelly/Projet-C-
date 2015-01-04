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
		printf("Vous etes l'admin! \n");
	}
	else{
		string statut = login.substr(0, 1);
		cout << statut << ;
		if (statut == "e"){
			// Etudiant
		}
		else{
			// Enseignant
		}
	}
	system("pause");
	return 0;

}