#include <stdio.h>
int main()
{
	int numTwo, numOne, numSum;

	printf("Enter two integers: ");
	
	// User integers are stored using scanf()
	scanf("%d %d", &numOne, &numTwo);
	
	// User numbers are stored in variable numSum
	numSum = numOne + numTwo;

	// Print result of sum
	printf("%d + %d = %d\n", numOne, numTwo, numSum);

	return 0;
}
