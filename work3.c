#include <stdio.h>

int main() {
	 int i, j, num;

  printf("Enter the number: ");
  scanf("%d", &num);

  if (num < 1 || num > 12) {
    printf("Invalid input. Please enter a number between 1 and 12.\n");
    return 1; 
  }

  printf("\nMultiplication Table for %d:\n", num);

  for (i = 1; i <= 10; i++) {
    
    int product = num * i;
    
    printf("%d x %d = %d\n", num, i, product);
  }

  printf("\n");
	return 0;
}
