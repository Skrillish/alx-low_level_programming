#include "main.h"

int symb(char);

/**
 * cap_string - capitalize(title case) all words in the string
 * @str: string to be capitalized
 * Return: address to the string
 */
char *cap_string(char *str)
{
int i = 0;

if (str[i] > 96 && str[i] < 123)
str[i] = str[i] - 32;

i++;

while (str[i] != '\0')
{
if (str[i] > 96 && str[i] < 123 && symb(*(str + i - 1)))
str[i] = str[i] - 32;
i++;
}
return (str);
}

/**
 * symb - checks if the input is a separator symbol
 * @ch: character to be checked
 * Return: 1 if its a separator symbol, 0 otherwise
 */
int symb(char ch)
{
/* check for these symbols , ; . ! ? " ( ) { and } */
if (ch == ',' || ch == ';' || ch == '.' || ch == '!')
return (1);
else if (ch == '?' || ch == '"' || ch == '(' || ch == ')')
return (1);
else if (ch == '{' || ch == '}' || ch == ' ' || ch == '\t')
return (1);
else if (ch == '\n')
return (1);
else
return (0);
}
