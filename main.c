#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int main(int argc, char *argv[]) 

int factorial(int n)
{
	if (n<=1) 
		return(1);
	else
		return(n*factorial(n-1));
}

