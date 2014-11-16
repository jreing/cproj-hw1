#include <stdio.h>
int main(){
	long num;
	int i,j,rem=1,length=1;
	setbuf(stdout, NULL);
	printf ("Enter a long number and two different indices to swap, separated by spaces:\n");
	scanf("%ld%d%d", &num, &i, &j);

	printf ("%ld %d %d", num, i, j);
	rem=num;
	while (rem>10){
		rem=rem/10;
		length++;
		//printf ("%d %d", rem, length);
	}
	printf ("len: %d", length);
	return 0;
}
