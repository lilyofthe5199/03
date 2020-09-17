#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	
	printf("input an alphabet :");
	scanf("%c", &c);
	
	printf("input alphapet is %c (%d), and the next on is %c (%d)\n", c, c, c+1, c+1);
	
	return 0;

}
