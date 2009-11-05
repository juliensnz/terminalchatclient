/*
 *  structures.h
 *  client
 *
 *  Created by Julien SANCHEZ on 05/11/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */


//Définition des structures

struct identifiant 
{
	char* login;
	char* mdp;
};

struct transmissionIn 
{
	char* message;
	int type;
};

//Nommage :

typedef struct identifiant identifiants;
typedef struct transmissionIn transmission;

//Fonctions :

identifiants* newId();

