#include "shell.h"
/**
* _strlen - gveytvdvweydvwyevebvfyreyyery
* @s: wgdytwqfdygewffyufiefheiuhehfiuhreiyfgygf
* Return: wuffyuegfyugegfyugfeyugfuygfeyugfyeug
*/
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
/**
* _strcmp - uhudszsDyuasgdyhcydutduchyusgdsdyydys
* @s1: digdvyytcydseufgyudgyusyugudyuidvudiufgfuig
* @s2: hdyfgdsgfyfscygcdgwefyegfyugfyugefygyuegre
* Return: hcydy]gfyegfegdytefcvyufygefyuegryrgfyig
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 < *s2 ? -1 : 1);
}
/**
* starts_with - hygdhdshsugusgduhfudu,mschcsgsuygf
* @haystack: ufefiugyfgefyugefyyufgeuftdsfyscdfdf
* @needle: yugwgdytwfgegyugfyugyugyugfyugyufygfee
* Return: gfygyegfygefiugeiugiuegiufiushfiuefieg
*/
char *starts_with(const char *haystack, const char *needle)
{
while (*needle)
if (*needle++ != *haystack++)
return (NULL);
return ((char *)haystack);
}
/**
* _strcat - concatenates  hsfyu,shfbyusvcyuvyudvw
* @dest: hzhgusdygyudgvsshdsidudyugcxygcuygysdc
* @src: gvcsdhgsvgsdhgvcgvdvvcyvcvytsfytgcuy
* Return: cyugsycyutbxcnmbcdhuchidhiffgufdygyd
*/
char *_strcat(char *dest, char *src)
{
char *ret = dest;
while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (ret);
}
