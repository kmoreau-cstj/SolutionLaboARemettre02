// But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une
//       automobile lou�e.L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage qui sont
//       soumises par le requ�rant
// Auteur : Patrice Dinelle
// Date : 2020-09-16

/*
Les diff�rentes sources de d�penses sont :
o Co�t de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du v�hicule est 7.6 litres aux 100 km.
o 1 litre d�essence co�te 1.25$
o 0.05$ du kilom�tre est exig� pour chaque kilom�tre suppl�mentaire.
*/


#include <iostream>

void main()
{
	setlocale(LC_ALL, "");         // pour afficher les accents dans la console

	//varables qui sont entrer par l'utilisateur
	int jours;
	float km;
	//variable utiliser pour arriver au prix final 
	float kmt;
	float kmprix;
	float gaz;
	float prixj ;
	//demander les question pour les calculs
	std::cout << "Veuiller entrer le nombre de jour que vous avez utiliser la vouture : ";
	std::cin >> jours;
	std::cout << "veullier entrer le nombre de km que vous avez parcourue : ";
	std::cin >> km;


	if (km / jours > 250) // si le km d�pace le nombre donn� par jour
	{
		kmt = (km - (250 * jours));// pour savour le nombre de km d'extra
		kmprix = (kmt* 0.05);	   // prix pour les km de plus
		gaz = (((km / 100)*7.6) * 1.25); // prix du gaz
		prixj = jours * 45;				 // prix par jour
		std::cout << "Le prix total de votre location est : " << prixj + gaz + kmprix << "$"; // afficher le prix final
	}
	else    // si les km donner ne sont pas tout utilis�
	{
		gaz = (((km / 100)*7.6) * 1.25); // prix du gaz
		prixj = jours * 45;				 // prix par jour
		std::cout << "Le prix total de votre location est : " << prixj + gaz << "$"; // aficheer le prix final 
	}

}

//plan de test
/*
nb de jour		nb de km		prix final
2				600				152$
5				500				272.50$
3				750				206.25$
7				2100			532$
*/
