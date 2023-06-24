#include "shell.h"
/**
* bfree - shxysgyudfufdsytdasygaudgaiygiudagydsgy
* @ptr: duycgusfdtftdsfyusdctyew7ewyifewy8diuiusc
* Return: sdcywfdywdfsufyweitduewdiuewgiuewgdu
*/
int bfree(void **ptr)
{
if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return (1);
}
return (0);
}
