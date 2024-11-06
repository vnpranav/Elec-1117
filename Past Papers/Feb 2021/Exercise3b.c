#include <stdio.h>
int main()
{
int a, b;
a = b = 5;
printf("\n%d %d", a--, --b);
printf("\n%d %d", a--, --b);
printf("\n%d %d", a--, --b);
printf("\n%d %d", a--, --b);
printf("\n%d %d\n", a--, --b);
return 0;
}