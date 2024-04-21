#include <stdio.h>

int checkPassword(char *b) {
	if (b[0] == 't') {
	if (b[1] == 'h') {
	if (b[2] == 'i') {
	if (b[3] == 's') {
	if (b[4] == '_') {
	if (b[5] == 'i') {
	if (b[6] == 's') {
	if (b[7] == '_') {
	if (b[8] == 'c') {
	if (b[9] == 's') {
	if (b[10] == '-') {
	if (b[11] == 'b') {
	if (b[12] == 'a') {
	if (b[13] == 's') {
	if (b[14] == 'i') {
	if (b[15] == 'c') {
	if (b[16] == 's') {
		return 1;
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	return 0;
}

int main(int argc, char **argv) {
	char buffer[64];

	printf("Howdy, so that's your first crackme challenge?\n");
	printf("Then, tell me the password: ");
	scanf("%62s", buffer);

	if (checkPassword(buffer)) {
		printf("You are the chosen one!\n");
	} else {
		printf("Nope\n");
	}
}
