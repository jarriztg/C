#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *r = "String estatico";
  char *s = (char *)malloc(sizeof(char)+15);
  strcpy(s,r);
  s[1] = 'X';
  printf("String: %s\n", s);
  free(s);
}
