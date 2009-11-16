/*
 *  structures.h
 *  client
 *
 *  Created by Julien SANCHEZ on 05/11/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */



//Fichier header des strucures de l'application client

#include <stdio.h>

typedef struct tr{
	int type;
	char* message;
}transmission;

typedef struct id{
	char* login;
	char* mdp;
}identifiant;


transmission * newTransmission();
identifiant* newId();
