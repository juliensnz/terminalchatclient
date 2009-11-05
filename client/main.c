
#include <stdio.h>

#include "connexion.h"


int main (int argc, const char * argv[]) {
   
	identifiants* id;
	id = newId();
	inputConnexion(id);
    return 0;
}
