#include "structure.h"

#include <stdio.h>
#include <stdlib.h>

transmission * newTransmission()
{
	transmission* tr = (transmission *)malloc(sizeof(transmission));
	tr->type = 0;
	tr->message = "";
	return tr;
}

identifiant * newId()
{
	identifiant *id = (identifiant *)malloc(sizeof(identifiant));
	id->login = "";
	id->mdp = "";
	return id;
}


