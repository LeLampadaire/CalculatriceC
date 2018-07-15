#include <stdio.h>
#include "os.h"

int main(void)
{
	int a = 0;
	int b = 0;
	char fonction;
	int quit = 0;

	while(quit == 0){
		printf("Indiquer le premier chiffre : ");
		scanf("%d", &a);

		printf("Indiquer la fonction : ");
		scanf("%s", &fonction);

		printf("Indiquer le deuxieme chiffre : ");
		scanf("%d", &b);

		int reponse = calcul(a, fonction, b);
		printf("La reponse est : %d \n", reponse);

		printf("\n1 = Oui\n0 = Non\nVoulez vous quitter : ");
		scanf("%d", &quit);
	}

	return 0;
}

