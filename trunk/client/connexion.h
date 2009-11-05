/*
 *  connexion.h
 *  client
 *
 *  Created by Julien SANCHEZ on 05/11/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include <string.h>

struct identifiant 
{
	char* login;
	char* mdp;
};

typedef struct identifiant identifiants;

identifiants* newId();

void inputConnexion(identifiants *id);