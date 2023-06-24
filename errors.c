#include "shell.h"
/**
* _eputs - bvtsexchgvvchcvuhnffsfbhdfbbttuedsnanns
* @str: puvfyrsfewsrfxtdexdgdxtxcctvvftctcrtxtrtvy
* Return: gvcftrxmvvyhbbhgcgfcxfv
*/
void _eputs(char *str)
{
int i = 0;
if (!str)
return;
while (str[i] != '\0')
{
_eputchar(str[i]);
i++;
}
}
/**
* _eputchar - ayufysuzvuisxztcdsuousdyvcyuscyudcut
* @c: hgcvyuyuyyrcyuvuyuvyuyuyuihbhgctrxvibiubyuvu
* Return: ohiyuyrxryviuyuiubbuv vviuiuiuiuiivi
*/
int _eputchar(char c)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(2, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}
/**
* _putfd - gyuutffyrdsnooihvvrxezeztexcvycrxryctc
* @c: btdrzrwefcgdzrxbxeztvppohudrsryrzewrwzrwewqe
* @fd: vuyfyufutdutciyyutezrszrxtycyuvyuvvyytdzwae
* Return: mmmmmmmfydyufgyrdsyryfydrxtxrzttzrtcxyyc
*/
int _putfd(char c, int fd)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(fd, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}
/**
* _putsfd - fzetxhbmbxdewcyvcrzeewrwetfyuniuytstre
* @str: gsdusfddvhdbvdtafrstyrewireifinewifnrenfin
* @fd: nvfxdzrcviieroipobochsdvcbfsdhzfiuvfdfvfn
* Return: hhsdhhsdbvbvvshvhdvcvdbysvyuvdiuiuewiuiy
*/
int _putsfd(char *str, int fd)
{
int i = 0;
if (!str)
return (0);
while (*str)
{
i += _putfd(*str++, fd);
}
return (i);
}
