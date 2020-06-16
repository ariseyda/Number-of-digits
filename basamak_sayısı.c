#include<stdio.h>

// A computer program receives an integer and displays whether the entered number has one digit or two digits or more than two digits.

int main(){
	
	int n;
	int digit;
	
	printf("Please enter an integer:");
	scanf("%d",&n);
	
	while(n>0){
		
		n=n/10;
		digit++;
		
		
		
	}
	
	printf("Number of digits:%d",digit);
	
	
}
