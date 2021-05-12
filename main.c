#include <stdio.h>
#include <string.h>

extern int ft_strlen(char *str1, char *str2, char *str3);
extern char *ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern size_t ft_write(int fd, const void *buf, size_t count);
//size_t ft_read(int fd, void *buf, size_t count);
//char *ft_strdup(const char *s);

//extern int ft_addnumbers(int a, int b, int c, int d);

int main(int argc, char *argv[])
{
// 	printf ("LOL \n");
// 	int d;
// 	int i;
// 	char *a;
// 	char *b;

// 	char dest[] = "leschaussettesdelarchiduchesse";
// 	char src[] = "polwjjjjjj";

// 	char dest1[] = "leschaussettesdelarchiduchesse";
// 	char src1[] = "polwjjjjjj";

// //	d = ft_addnumbers(1,2,3,4);
// 	//i = ft_strlen("hggggg", "lol", "YOLOL");
// 	printf ("BFORE = %p %p\n", src, dest);
// 	a = ft_strcpy(dest, src);
// 	printf ("RES = dst = %s a = %s src =%p dst=%p\n", dest, a, src, dest);

// 	printf ("\n\n\n REAL \n\n\n");
// 	printf ("BFORE = %p %p\n", src1, dest1);
// 	b = strcpy(dest, src);
// 	printf ("RES = dst = %s b = %s src=%p dst=%p\n", dest1, b, src1, dest1);
// 	if (strcmp(a,b) == 0)
// 		printf ("yay\n");
// 	else
// 		printf ("fail\n");

	int a;
	int b;
	a = ft_strcmp("lol", "lop");
	b = strcmp("lol", "lop");

	printf ("RES = %d\n", a);
	printf ("RES = %d\n", b);

	ft_write(1, "trop fastoche", 8);
	printf ("\n");
	write(1, "trop fastoche", 8);

	//printf ("REAL = %s %p \n", )
	return (0);
}
