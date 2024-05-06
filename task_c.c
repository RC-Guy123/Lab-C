#include <stdio.h>
int main(void){
    int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	// Your code below here
	char email[] = "austin.jewellf@student.manchester.ac.uk";
	if (n >= 0) {
		char character = email[n];
		if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        	printf("Vowel\n");
    	else
        	printf("Not vowel\n");
	}
	// Do not edit below here
	return 0;
}