#include <stdio.h>


int main() {
     
	char ch;
	char s[10], sen[100];
	printf("ENTER A CHARACTER: ");
	scanf("%c", &ch);
	printf("ENTER A WORD: ");
	scanf("%s", s);
	printf("ENTER A SENTANCE: ");
        scanf("\n");
	scanf("%[^\n]%*c", sen);
       	/* You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.
				    In order to take a line as input, you can use scanf("%[^\n]%*c", s);
				     where s is defined as char s[MAX_LEN] 
				     where MAX_LEN is the maximum size of s. 
				     Here, [] is the scanset character.
				     ^\n stands for taking input until a newline isn't encountered.
				     %*c, it reads the newline character 
				     * indicates that this newline character is discarded.

	Note: After inputting the character and the string, inputting the sentence by the above mentioned statement won't work. 
	This is because, at the end of each line, a new line character (\n) is present.
	So, scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character from the previous line.
	This can be handled in a variety of ways and one of them being: scanf("\n"); before the last statement. */

	printf("%c\n", ch);
	printf("%s\n", s);
	printf("%s\n", sen);
	return 0;
}
