#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - Prints the multiplication of two args numbers
*@argc: argument count
*@argv: argument vector
*
*Return: Always zero
*/
int main(int argc, char *argv[])
{
int n;
int sum = 0;
cout << "enter a no.";
cin >> n;
while(n >= 0)
sum = sum + n;
cout << "enter a no.";
cin >> n;
cout << "sum is"  << sum << endl;
return 0;
}
