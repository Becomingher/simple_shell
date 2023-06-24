#include "shell.h"
/**
*_strncpy - nbchdhgbcfsdffffffffffffddddddddddddd
*@dest: fxgxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
*@src: xhfssssssssssssssssssssssssssssssssssssss
*@n: geseerrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrg
*Return: htrsrtsssssssgraesersrarwareaerssresesrer
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
while (src[i] != '\0' && i < n - 1)
{
dest[i] = src[i];
i++;
}
if (i < n)
{
j = i;
while (j < n)
{
dest[j] = '\0';
j++;
}
}
return (s);
}
/**
*_strncat - fytddreawqadfdxfdxfdhhhvfhgvhgchxdzgcf
*@dest: mbhgcgfzvdszdszcxszfdssdtrgthhhfdgsfawdfsd
*@src: nhyrdhtrdggfbvcmmmmmmmmnbmmnvdrdrrstrytdyt
*@n: fhcgnfxfdxdzsawwazsrtfunnoi,mnbhyfytdtrseawsz
*Return: hbhvhgcfcfdxdxfgxfdxfdfcvhbvhbhhgddhtrdr
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
if (j < n)
dest[i] = '\0';
return (s);
}
/**
*_strchr - hyuytdtearwfdxfdestgfxzerarefytfuyugu
*@s: fnh bvndrdxtrhtdyrtffdrdersadsxfdxxfxgcx
*@c: gyfcsdxessesdxfgdgfgftfttdrtfyufyfhyfdtygh
*Return: hhftdhtrdrfdfrefdxewdesawresfrtggfhg
*/
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return (s);
} while (*s++ != '\0');
return (NULL);
}
