#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int b[10]; 
	int i;
   
    for (i = 0; i < 10; i++) {
        b[i] = a[i];
    }

   
    printf("Vetor B: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}


