#include "labo.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
/*
* Faire une fonction qui retourne un sous-tableau de character de celui passer.(paramètre texte)
*/
char* sousTexte(char* texte, int from, int to) {
	if (texte == NULL || from < 0 || to < 0 || from > to)
		return NULL;

	int tailleSousTexte = to - from + 1;
	if (tailleSousTexte <= 0)
		return NULL;

	char* sousTexte = (char*)malloc((tailleSousTexte + 1) * sizeof(char));
	if (sousTexte == NULL)
		return NULL;

	for (int i = 0; 1 < tailleSousTexte; i++) {
		sousTexte[i] = texte[from + i];
	}
	sousTexte[tailleSousTexte] = '\0';

	return sousTexte;
}



/*
* Faire une fonction qui copie le contenu du tableau de character dans la propriété de data
* de la structure string.
*/

typedef struct {
	char* data;
	int length;
} String;
void set_String(char* text, String* s) {
	if (text == NULL || s == NULL)
		return;

	int length = strlen(text);

	s->data = (char*)malloc((length + 1) * sizeof(char));
	if (s->data == NULL)
		return;

	strcpy(s->data, text);

	s->length = length;

}

/*
* Faire une fonction qui vérifie si un mot est un palindrome i.e. kayak, racecar...
* Si le mot est un palindrome retourner 1 sinon 0
*/
int String_is_palindrome(String* s) {

	for (int i = 0; i < sizeof(String); i++) {
		if (s[i] == s[sizeof(String) - i]) {
			printf("1");
		else {
			printf("0");
		}
		}

	}

}

/*
* Implémenter la fonction bubble sort et trier le tableau
*/
void bubbleSort(int elements[], int n) {

	bool échanger = false;

	for (int i = 0; i <= sizeof(elements) - 1; i++)
	{
		if (elements[i] > elements[n + 1])
		{
			bool échanger = true;
			elements[i] = elements[n + 1];
			elements[i + 1] = elements[n];
		}
		if (i >= sizeof(elements) - 1 && échanger == true) {
			bool échanger = false;
			i--;
		}
	}

}

//implementer