/*
 *  connexion.c
 *  client
 *
 *  Created by Julien SANCHEZ on 05/11/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "connexion.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

identifiants* newId()
{
	identifiants* id = (identifiants*)malloc(sizeof(identifiants));
	id->login = "julien";
	id->mdp = "jtlila";
	return id;
}

void inputConnexion(identifiants *id){
	
	char login[20], mdp[20];
	printf("Identification :\n");
	printf("login : ");
	scanf("%s",&login);
	printf("mdp : ");
	scanf("%s",&mdp);

	id->login = login;
	id->mdp = mdp;


}

	
