#include <stdio.h>

int main(void) {
	float N;
	int count=0, M[24], i;
	
	printf("insert a float to calculate: ");
	scanf("%f", &N);
	N -= 1;
	
	while(count != 23) {
		printf("%f * 2 = %f\n", N, N*2);
	 	N *= 2;
	 	if(N >= 1.000) {
	 		M[count] = 1;
	 		N -= 1;
		 } else {
		 	M[count] = 0;
		 }
		 count++;
	}
	printf("\n\nMantissa value = ");
	for(i=0;i<count;i++) {
		printf("%d", M[i]);
	}
}
