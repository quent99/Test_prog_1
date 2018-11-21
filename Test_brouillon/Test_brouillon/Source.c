#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EOL '\n'
#define CLEAN_BUFFER while (getchar() != EOL)
int saisieDone, saisieOk;

int main(void)
{
/*
	float x = -10.0, y=60.0;
	int condition;
	condition = x >= 0 && x <= 20 && y > x || y == 50 && x == 2 || y == 60;
	printf("condition = %d", condition);
	
	short i = 0;
	i = i--;
	i = --i;
	i = i--;
	printf("i= %d\n", i);

	i = 0;
	i = (++i, i++, ++i, i++);
	printf("i= %d\n", i);
*
	short i = 2, j = 1, k;

	k = i >= j << 1 ? i++ << 2 : --j << 3;
	//k = (k = 5, i = j ? i++ : --j);

	printf("i= %d\n", i);
	printf("j= %d\n", j);
	printf("k= %d\n", k);

	float a;
	a = a++ ;

	int i = 8;
	if (i & (1 << 3))
	{
		printf("i\n");
	}

	int i=1;
	//for (i = 1; i < 100; i++);
	do
	{
		i++;
	}while (i < 100);
		printf("i=%d\n",i);
*/
	/*int i;
	for (i = 0; i*i < 1000; i++, printf("\n"))
	{
		printf("i=%d\n", i);
	}*/

	/*do
	{
		scanf("%c", &c);
		i++;
	} while (c != '\n');*/
	printf("tapez ligne ");
	/*while (getchar() != '\n')
	{
		i = i + (c * poid_bit);
		poid_bit = poid_bit * 2;	
	}*/

	/*do
	{
		scanf("%c", &c);
		if (c == '0')
		{
			i = i << 1;
		}
		if (c == '1')
		{
			i = i << 1 | 1;
		}
	} while ((c == '0') || (c == '1'));

	printf("i= %d et i= 0x%X\n", i,i);*/

	// SERIE 13 
	//EX1
	/*int pourcent;
	saisieDone = 0;
	do
	{
		printf("Introduire un pourcentage :");
		saisieOk = scanf("%d", &pourcent);
		CLEAN_BUFFER;
		if ((saisieOk != 1) || (pourcent < 0) || (pourcent > 100))
		{
			printf("La valeur saisie n'est pas valide.\n");
		}
		else
		{
			saisieDone = 1;
		}
	} while (!saisieDone);
	printf("Correct\n");*/

	//EX2
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Table de multiplication de %d\n", i);
		for (int j = 0; j <= 10; j++) 
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
		system("pause");
	}*/

	//EX3
	//int N,nb_premier = 1;
	//int j,i,resultat;

	/*scanf("%d", &N);
	for (i = 2; i < N; i++)
	{
		resultat = N % i;
		if (resultat == 0)
		{
			nb_premier = 0;
		}
	}
	if (nb_premier != 0)
	{
		printf("C'est un nombre premier\n");
	}
	else
	{
		printf("Non ce n'est pas un nombre premier\n");
	}*/
	/*for (j = 1; j < 1000; j++)
	{
		for (i = 2; i < j; i++)
		{
			resultat = j % i;
			if (resultat == 0)
			{
				nb_premier = 0;
			}
		}
		if (nb_premier != 0)
		{
			printf("%d ",j);
			nb_premier = 1;
		}
	}*/
	/*float f1 = 7.0f;
	printf("\\\a\a\a%g\b\a%%\a\\\n", f1);
*/
	int i;
	i = 30;
	if (0 < i < 20)
		i++;
	printf("\ni =%d \n", i);










	system("pause");
	return EXIT_SUCCESS;
}