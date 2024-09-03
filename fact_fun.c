#include <math.h>
#include <stdio.h>
#include <time.h>

// Function to calculate factorial
int factorial(int n)
{
    if (n == 0) { // Base case
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main()
{
    int n = 5; // Example value for factorial

    double start, end;

    start = clock();
    int result = factorial(n);
    end = clock();

    printf("Factorial of %d is %d\n", n, result);
    printf("Processor time taken for factorial computation: %f seconds\n",
           ((double)(end - start) / CLOCKS_PER_SEC));

    return 0;
}
