/* TASK
 *
 * For each integer 'n' in the interval [a, b](given as input) :
 *	If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
 *	Else if n > 9 and it is an even number, then print "even".
 *	Else if n > 9 and it is an odd number, then print "odd".
 */
#include <stdio.h>
#include <stdlib.h>

char* oddoreven(int i);

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    const char num[][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(a != 0 && b != 0){	    
	for (int i = a; i <= b; i++){
		if (i <= 9){
			printf("%s\n", num[i-1]);
		}
		else{
			printf("%s\n", oddoreven(i));
		}
	}
    }
    return 0;
}

char* oddoreven(int i){
	if (i%2==0){
		return "even";
	}
	else{
		return "odd";
	}
}
