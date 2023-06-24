#include "shell.h"
/**
* interactive - interact w me bitchhhhhhhhhhhhhhhhhhhhhhhhhh
* @info: struct you got it i swearrrrrrrrrr
* Return: with you wrong or righte
*/
int interactive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
* is_delim - deirious mud brother broooooooooooooooooooo
* @c: doing it for me yurrrrrrrrrrrr
* @delim: papapapaaaaaaaaaaaaaaaaaaa
* Return: nothing yettttttttttttt
*/
int is_delim(char c, char *delim)
{
while (*delim)
if (*delim++ == c)
return (1);
return (0);
}
/**
* _isalpha - it's  been a minute gggggggggggggg
* @c: yetttttttttttttttttttttttttt
* Return: 0 no more broooooooooooooooooooooooooooo
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
/**
* _atoi - a rod wave fan yeeeeshhhhhhhhhhhhhhhhhhh
* @s: the string to be converted
* Return: 0 but you can make it angry zzzzzzzzzzzzzzzz
*/
int _atoi(char *s)
{
int i, sign = 1, flag = 0, output;
unsigned int result = 0;
for (i = 0; s[i] != '\0' && flag != 2; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
flag = 1;
result *= 10;
result += (s[i] - '0');
}
else if (flag == 1)
flag = 2;
}
if (sign == -1)
output = -result;
else
output = result;
return (output);
}
