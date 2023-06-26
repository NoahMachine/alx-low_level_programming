#include"main.h"
#include<stdio.h>
/**
*_strlen - Return the length of a string
*@str: The string to get the length of
*Return: The length of @str.
*/
int _strlen(char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}
