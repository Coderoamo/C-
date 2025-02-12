#include <stdio.h>

int main() {
	
	int units;
	
	printf("Calculator for Electricity Bill based on units\n");
	printf("Enter Units: ");
	scanf("%d", &units);
	
	if(units < 1 && units > 100) {
		printf("Bill to pay: $ %d", 5 + 50);
	}
}