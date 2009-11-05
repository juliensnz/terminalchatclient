/*
 *  structures.c
 *  client
 *
 *  Created by Julien SANCHEZ on 05/11/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "structures.h"



identifiants* newId()
{
	identifiants* id = (identifiants*)malloc(sizeof(identifiants));
	id->login ;
	id->mdp ;
	return id;
}