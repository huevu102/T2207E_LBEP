#include <stdio.h>
#include <string.h>
#include "uppercase.h"

int main() {
	char s[30];
	printf("Please enter a string:\n");
	scanf("%[^\n]s", s);

	upperCase(s);

	printf("%s\n", s);
}