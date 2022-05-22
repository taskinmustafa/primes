#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>
#include <limits.h>
int isprime(int number);
int main(int argc, char **argv){
	FILE *fptr;
	fptr = fopen("primes.txt","w");	
	for (int i=1; i< 100000000/6 ; i++){
		if (isprime(6*i-1)){
			fprintf(fptr, "%d\n", 6*i-1);
		}
		if (isprime(6*i+1)){
			fprintf(fptr, "%d\n", 6*i+1);
		}
	}
	return 0;
}


int isprime(int number){
	for (int i=2; i<sqrt(number)+0.5f; i++){
		if(number%i == 0)
			return 0;
	}
	return 1;
}
