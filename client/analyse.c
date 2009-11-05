/*
 *  analyse.c
 *  client
 *
 *  Created by Julien SANCHEZ on 05/11/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "analyse.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//inputConnexion :

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

//