#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUF_SIZE 2048

// Define our structure type
struct ascii_morse {
	
	char character;
	char *morse;
	//morse = malloc(5*sizeof(char));
};

// morse.c headers
int morse(char *user_input, struct ascii_morse[]);
int isCharInString (char * string, char character);
void makeUppercase(char * string);
void printMorse (char * input, struct ascii_morse table[]);
void printCharacters (char * input, struct ascii_morse table[]);


