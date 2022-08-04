#include <stdio.h>
    
int main(){

    int number, sum;
	
	printf("Algorithm to calculate the sum of the first n positive integers..\n");
    	printf("----------------------------------------------------------------\n");

	printf("Enter the value of n:\n");
	scanf("%d", &number);
	sum = 0;
	int i = 1;
	
	while (i <= number){
		sum += i;
		i += 1;
	}  
	printf("The sum of the first %d positive integers is %d.\n", number, sum);
	return 0;
}
