#include <stdio.h>
int main(void)
{
int answer, result;
answer = 100;
result = answer - 10;
printf("The result is %i\n", result + 5);
// printf("%i", result);
return 0;
}

// result : 95
// Explanation : answer - 10 gives us 90. in the printf function, a copy of the value of result is passed to the function and 5 is added to it. result is remains unchanged