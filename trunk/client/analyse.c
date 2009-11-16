#include "analyse.h"

#include <string.h>

transmission* analyse(char* entree)
{
	transmission *tr;
	tr = newTransmission();
	int longueurEntree = strlen(entree);

	if(entree[0] == '!')
	{
			if( strcmp( entree , "members" ))
		{
			tr->type = 3;
			return tr;
		}
		else if(strcmp(entree,"members"))
		{
			tr->type = 4;
			return tr;
		}
		else
		{
			printf("la commande entre n'est pas valide");
			tr->type=0;
			return  tr;
		}
	}
	else if(entree[0] == '@')
	{
		tr->type=2;
		tr->message = "";
		strcat (tr->message,entree);
		strcat (tr->message," ");
		char * chaine = inputChaine();
		strcat (tr->message,chaine);
		return tr;
	}
	else
	{
		printf("Erreur de parsing");
		tr->type=0;
		tr->message = "";
		return tr;
	}
	tr->type=0;
	tr->message = "";
	return tr;
}



