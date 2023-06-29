#include "main.h"
#include <stdio.h>
/**
*main - check the code
*
*Return: Always 0.
*/
int main(void)
{
char buffer[] = "The #buffer: cisfun0infernumisfun\n";
printf("%s\n", buffer);
printf("----\n");
print_buffer(buffer, sizeof(buffer));
return (0);
}
