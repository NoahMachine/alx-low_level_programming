#include<stdio.h>
/**
*main - Entry Point
*Description: 'print alphabets in reverse'
*Return: Always (Success)
*/
int main(void)
{
int n = 122;
while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
