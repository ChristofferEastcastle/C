#include <stdio.h>
#include <string.h>

int main() {
	char str[256];
	char key[256];
	scanf("%s", str);
	scanf("%s", key);
	
	for (int i = 0; i < strlen(str); i++) {
		char ch = str[i];
		
		if (i % 2 == 1) {
			ch += key[i] % 65;
			if (ch > 90) ch -= 26;
		} else {
			ch -= key[i] % 65;
			if (ch < 65) ch += 26;
		}
		printf("%c", ch);
	}
	return 0;
}
