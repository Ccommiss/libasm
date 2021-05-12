#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

extern int ft_strlen(char *str1);
extern char *ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern size_t ft_write(int fd, const void *buf, size_t count);
extern size_t ft_read(int fd, void *buf, size_t count);
extern char *ft_strdup(const char *s);

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
	i = ft_strlen("asdfasdf''///##!!@");
	printf ("FT_STRLEN i = %d \n", i);
	// printf ("BFORE = %p %p\n", src, dest);
	//a = ft_strcpy(dest, src);
	//printf ("RES = dst = %s a = %s src =%p dst=%p\n", dest, a, src, dest);

	// printf ("\n\n\n REAL \n\n\n");
	// printf ("BFORE = %p %p\n", src1, dest1);
	// b = strcpy(dest, src);
	// printf ("RES = dst = %s b = %s src=%p dst=%p\n", dest1, b, src1, dest1);
	// if (strcmp(a,b) == 0)
	// 	printf ("yay\n");
	// else
	// 	printf ("fail\n");

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
	
	// copy = strdup(malloctest);
	// printf ("copy %s %p %zu\n", copy, copy, sizeof(mycopy));

	mycopy = ft_strdup(malloctest);
//	mycopy = ft_strcpy(c);
		//i = ft_strlen("salut");
	//printf ("FT_STRLEN i = %d \n", i);
	printf ("mycopy: %s %p \n", mycopy, mycopy);
	//printf ("REAL = %s %p \n", )
	return (0);
}
