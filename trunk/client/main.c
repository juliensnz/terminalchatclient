
#include <stdio.h>

#include "analyse.h"


int main (int argc, const char * argv[]) {
	
	//Connexion : 
	
	/* identifiants* id;
		id = newId();
		inputConnexion(id); */
	
	//discution :
	int bool = 1;
	char * chaine;
	
	transmission* message;
	message = newMessage();
	
	while(bool)
	{
		inputChaine(chaine);
		analyse(chaine,message);
	}
	
    return 0;
}
