#include "../user_daten.hpp"

extern void upanteil( struct user_daten* user );

void uplstlzz( struct user_daten* user ) {

	user->jw = user->lstjahr * 100;

	uplstlzz( user );

	user->lstlzz = user->anteil1;

}