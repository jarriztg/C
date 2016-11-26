#include <stdio.h>

int longitud(char *a) {
	char *b = a;
	while(*b != '\0') { b++; };
	return b-a;
}

int main() {
	char *texto = "prueba de longitud";
	printf("La longitud de la cadena 'texto' es: %d, \n%s %i %s.\n", longitud(texto),
	"Es decir, la cadena 'prueba de longitud' cuenta con" , longitud(texto), "caracteres");
	return 0;
}
