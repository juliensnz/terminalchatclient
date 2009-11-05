/*
 *  structures.h
 *  client
 *
 *  Created by Julien SANCHEZ on 05/11/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

struct identifiant 
{
	char* login;
	char* mdp;
};

typedef struct identifiant identifiants;

struct transmissionIn 
{
	char* message;
	int type;
};

typedef struct transmissionIn transmission;