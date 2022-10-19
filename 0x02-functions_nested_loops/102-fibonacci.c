#include "main.h"

/**
* main - Prints the first 52 fibonacci numbers
* Return: Nothing!
*/

int main(void)

{
int i = 0;
long j = 1, k = 2;
while (i < 50)
{
if (i == 0)
_putchar("%ld", j);
else if (i == 1)
_putchar(", %ld", k);
else
{
k += j;
j = k - j;
_putchar(", %ld", k);
}
++i;
}
_putchar("\n");
return (0);
