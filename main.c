#include <stdio.h>
#include <stdlib.h>

struct prenotazioni
{
	char cognome[15];
	int ora;
	char reparto[1];
};

void main()
{
	
	int LUNG=20;
	int i,a,orario,tasto;
	struct prenotazioni array_orario[LUNG];
	struct prenotazioni array_elenco[LUNG];
	struct prenotazioni array_reparto[LUNG];
	i=8;
	for(i; i<20; i++)
	{
		a=i%2;
		if(a==0)
		{
			array_orario[i].ora=i;
			printf("Nome dell utente prenotato alle ore %d: ",i);
			scanf("%s",&array_elenco[i].cognome);
			printf("Inserire il reparto[a,b,c]: ");
			scanf("%s",&array_reparto[i].reparto);
			
		}
		else
		{
			continue;
		}
	}
	printf("\n\nQuesti sono gli orari di oggi: \n\n");
	i=8;
	for(i; i<20; i++)
	{
		a=i%2;
		if(a==0)
		{
			printf("cognome: %s, orario : %d, reparto: %s \n\n", array_elenco[i].cognome,array_orario[i].ora,array_reparto[i].reparto);
		}
		else
		{
			continue;
		}
	}
	
	printf("Premi 1 per uscire dal programma...");
	scanf("%d",&tasto);
	while(1==1)
	{
		if(tasto==1)
		{
			break;
		}
		else
		{
			continue;
		}
	}

}
	



