#include "main.h"
/**
*main _islower - checks for lowercase character
*@c: The character to be check
*Return: Always 1 for lowercase character or 0 for anything else
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{

return (1);
}
return (0);
}
