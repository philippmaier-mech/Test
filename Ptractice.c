#include <stdio.h>
#include <string.h>

int main(void) {

	char spruch[10][80] = { "Es Kommt, wie es kommt!", "Aus Fehlern wird man klug!" };

	printf("%s\n", spruch[0]);
	printf("%s\n", spruch[1]);

	return 0;
}
