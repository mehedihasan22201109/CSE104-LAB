#include <stdio.h>
int main() {
	int n,i;
	printf("Input number of lines: ");
	scanf("%d", &n);

    for(i = 1; i <= n; i++) {
		printf("Square and cube of %d : %d  %d\n",i, i*i, i*i*i);
	  }

	return 0;
}
