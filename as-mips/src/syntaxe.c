#define _POSIX_C_SOURCE 200112L
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>

#include <global.h>
#include <notify.h>
#include <lex.h>
#include <gen_list.h>
#include <syntaxe.h>


/**
 * @param liste_lexemes_p
 * @return nothing
 * @brief Cette fonction permet de dire s'il y a une instruction du dictionnaire valable sur une ligne
 */
void bonneInstruction(Liste_t* liste_lexemes_p) {

	Liste_t* p_1=liste_lexemes_p;
	Liste_t* p_2=liste_lexemes_p;
	while (p_1->fin_liste_p->donnees_p->nature!=L_SYMBOLE) { /* On cherche le premier symbole (seul lexeme sucsecptible d'être une instruction) */
		p_1->fin_liste_p=p_1->fin_liste_p->suivant_p;
		p_2->fin_liste_p=p_2->fin_liste_p->suivant_p;
	}
	/* On arrive à un lexeme SYMBOLE */
	if ((p_1->fin_liste_p->donnees_p->nature)==L_SYMBOLE) {
		/* Comparaison du nom de symbole à l'ensemble des instructions possibles du dictionnaire */
		FILE* f_p=fopen("dictionnaire_instruction.txt","r"); /*  */
	}
}
