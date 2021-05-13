#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include "libasm.h"


#define FT_STRCPY_BUF_SIZE (1 << 12)
//extern int ft_addnumbers(int a, int b, int c, int d);

int main(int argc, char *argv[])
{
	printf ("LOL \n");
	int d;
	int i;
	char *a;
	char *b;

	char dest[] = "leschaussettesdelarchiduchesse";
	char src[] = "polwjjjjjj";

	char dest1[] = "leschaussettesdelarchiduchesse";
	char src1[] = "polwjjjjjj";

//d = ft_addnumbers(1,2,3,4);
	i = ft_strlen("gfg");
	printf ("FT_STRLEN i = %d \n", i);
	i = ft_strlen("bon");
	printf ("FT_STRLEN i = %d \n", i);
	i = ft_strlen("bonjour");
	printf ("FT_STRLEN i = %d \n", i);
	i = ft_strlen("bonjour");
	printf ("FT_STRLEN i = %d \n", i);
	printf ("BFORE = %p %p\n", src, dest);
	a = ft_strcpy(dest, src);
	printf ("RES = dst = %s a = %s src =%p dst=%p\n", dest, a, src, dest);

	printf ("\n\n\n REAL \n\n\n");
	printf ("BFORE = %p %p\n", src1, dest1);
	b = strcpy(dest, src);
	printf ("RES = dst = %s b = %s src=%p dst=%p\n", dest1, b, src1, dest1);
	if (strcmp(a,b) == 0)
		printf ("yay\n");
	else
		printf ("fail\n");

	int oi;
	int po;


	char s1[] = "q ";
	char s2[] = "q ";
	oi = ft_strcmp(s1, s2);
	po = strcmp(s1, s2);

	printf ("RES = %d\n", oi);
	printf ("RES = %d\n", po);

	int ret;
	ret = ft_write(1, "trop fastoche", 1);
	printf ("ret = %d\n", ret);
	write(1, "trop fastoche", 1);

	char *malloctest = "salut leeeeeeeeeeeeeeeeeees gens";
	char *copy;
	char *mycopy;
	
	copy = strdup(malloctest);
	printf ("\ncopy %s %p %zu\n", copy, copy, sizeof(mycopy));

	mycopy = ft_strdup(malloctest);
	printf ("\nmycopy: %s %p \n", mycopy, mycopy);

	char buf[FT_STRCPY_BUF_SIZE] = {0};
	char *str1;
	char *str2;
	str1 = ft_strcpy(buf, "asl;fjl;asdjfjkasdl;fjadjsf");
	str2 = strcpy(buf, "asl;fjl;asdjfjkasdl;fjadjsf");


	printf ("STR1_FT_M = = %s  \n", str1 );
	printf ("STR2_REAL = = %s  \n", str2 );

	int retval;
	errno = 0;
	retval = ft_write(-1, NULL, 3);
	if (retval < 0) 
    	printf(strerror(errno), "failed!\n");

	errno = 0;
	retval = write(-1, NULL, 3);
	if (retval < 0) 
   		printf(strerror(errno), "failed!\n");

	return (0);
}
