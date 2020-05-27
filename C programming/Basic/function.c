#include<stdio.h>

int sumfour(int a, int b, int c, int d);

int main(){// v-----------------------<---------
        int ans = sumfour(1, 2, 3, 4); //      |
	printf("\n%d", ans); //		       |
} // 					       ^
 //  					       |
int sumfour(int a, int b, int c, int d) { //   |
        int sum = 0; //			       |
        sum += a; // sum = 0+1 = 1	       |
        sum += b; // sum = 1+2 = 3             |
        sum += c; // sum = 3+3 = 6	       |
        sum += d; // sum = 6+4 = 10            |
        return ( sum ); // return 10 >----------
}


