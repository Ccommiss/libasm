#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include "libasm.h"


void	test_ft_strlen()
{
	char *word[10];
	int i = 0;
	int res = 0;
	int exp = 0;

	word[0] = "Lol";
	word[1] = "Lolipop";
	word[2] = "salut";
	word[3] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	word[4] = "";
	word[5] = "\n";
	word[6] = NULL;

	while (word[i] != NULL)
	{
		res = ft_strlen(word[i]);
		exp = strlen(word[i]);
			printf ("[Test %d] : %s\n", i, word[i]);
			printf (BWHT "Mine = %d VS expected = %d \n", res, exp);
			if (res == exp)
				printf (BGRN "		SUCCESS\n\n"reset);
			else
				printf (BRED "FAIL\n\n"reset);
		i++;
	}
}

void	test_ft_strcpy()
{
	char *word[10];
	char dest1[100000] = "salut la compagnie comment ca va";
	char dest2[100000] = "salut la compagnie comment ca va";
	int i = 0;
	char *res = NULL;
	char *exp = NULL;

	word[0] = "Lol";
	word[1] = "Lolipop";
	word[2] = "salut";
	word[3] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	word[4] = "";
	word[5] = "\n";
	word[6] = NULL;
//dst, src
	while (word[i] != NULL)
	{
		res = ft_strcpy(dest1, word[i]);
		exp = strcpy(dest2, word[i]);
		printf ("[Test %d] : %s\n", i, word[i]);
		printf (BWHT "Mine = %s \nVS expected = %s \n", res, exp);
		if (strcmp(res, exp) == 0)
			printf (BGRN "		SUCCESS\n\n"reset);
		else
			printf (BRED "		FAIL\n\n"reset);
		i++;
	}
}


void	test_ft_strcmp()
{
	int res = 0;
	int exp = 0;
	int i = 0;

	char *word[10];
	char *test[10];

	word[0] = "Lol";
	word[1] = "Lolipop";
	word[2] = "salut";
	word[3] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	word[4] = "";
	word[5] = "\n";
	word[6] = " plop ";
	word[7] = "piege !";
	word[8] = NULL;

	test[0] = "pas apreil";
	test[1] = "eet la ?";
	test[2] = "salut les nazes";
	test[3] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	test[4] = "";
	test[5] = "\n";
	test[6] = "abaoke";
	test[7] = "piege !";
	test[8] = NULL;

	while (word[i] != NULL)
	{
		res = ft_strcmp(test[i], word[i]);
		exp = strcmp(test[i], word[i]);
		printf ("[Test %d] : %-15s VS %-15s \n", i, word[i], test[i]);
		printf (BWHT "Mine = %d \nVS expected = %d \n", res, exp);
		if (res == exp)
			printf (BGRN "		SUCCESS\n\n"reset);
		else
			printf (BRED "		FAIL\n\n"reset);
		i++;
	}
}


void	test_ft_strdup()
{
	char *res;
	char *exp;
	char *word[10];
	int i = 0;

	word[0] = "Lol";
	word[1] = "Lolipop";
	word[2] = "salut";
	word[3] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	word[4] = "";
	word[5] = "\n";
	word[6] = " plop ";
	word[7] = "piege !";
	word[8] = "";
	word[9] = NULL;

	while (word[i] != NULL)
	{
		res = ft_strdup(word[i]);
		exp = strdup(word[i]);
		printf ("[Test %d] : %-15s \n", i, word[i]);
		printf (BWHT "Mine = %s \nVS expected = %s\n", res, exp);
		if (strcmp(res,exp) == 0)
			printf (BGRN "		SUCCESS\n\n"reset);
		else
			printf (BRED "		FAIL\n\n"reset);
		i++;
	}


}

void	test_ft_read()
{
	char buf1[10000];
	char buf2[10000];
	int exp;
	int res;


	printf (BWHT "STDIN : (write twice the same input) \n"reset);
	printf ("Actual read \n");
	exp = read(1, buf1, 8);
	printf ("My read \n");
	res = ft_read(1, buf1, 8);
	if (res == exp && strcmp(buf1, buf2) == 0)
		printf (BGRN "		SUCCESS\n\n"reset);
	else if (strcmp(buf1, buf2) != 0)
		printf (BGRN "		SUCCESS\n\n"reset);
	else{
		printf (BRED "		FAIL : "reset);
		printf ("Expected = %d VS Actual = %d\n", exp, res);
	}


	printf (BWHT "BAD FD / errno check : \n" reset);
	exp = read(-1, buf1, 8);
	printf("EXPECTED : Errno value %d -- %s\n", errno, strerror(errno));
	res = ft_read(-1, buf2, 8);
	printf("ACTUAL : Errno value %d -- %s\n", errno, strerror(errno));
	if (exp == res)
		printf (BGRN "		SUCCESS\n\n"reset);
}

void	test_ft_write()
{
	char buf1[10000] = "Test de write sur sortie standard";
	int exp;
	int res;


	printf (BWHT "STDIN : \n"reset);
	printf ("Actual write \n");
	exp = write(1, buf1, 190);
	printf ("\nMy write \n");
	res = ft_write(1, buf1, 190);
	if (res == exp)
		printf (BGRN "\n		SUCCESS\n\n"reset);
	else{
		printf (BRED "\n		FAIL : "reset);
		printf ("Expected = %d VS Actual = %d\n", exp, res);
	}


	printf (BWHT "BAD FD / errno check : \n" reset);
	exp = write(-1, buf1, 8);
	printf("EXPECTED : Errno value %d -- %s\n", errno, strerror(errno));
	res = write(-1, buf1, 8);
	printf("ACTUAL : Errno value %d -- %s\n", errno, strerror(errno));
	if (exp == res)
		printf (BGRN "		SUCCESS\n\n"reset);
}

int main(void)
{
	printf(BBLU "\n__________________\nTesting FT_STRLEN \n__________________\n\n"reset);
		test_ft_strlen();
	printf(BBLU "\n__________________\nTesting FT_STRCPY \n__________________\n\n"reset);
		test_ft_strcpy();
	printf(BBLU "\n__________________\nTesting FT_STRCMP \n__________________\n\n"reset);
		test_ft_strcmp();
	printf(BBLU "\n__________________\nTesting FT_STRDUP \n__________________\n\n"reset);
		test_ft_strdup();
	printf(BBLU "\n__________________\nTesting FT_READ \n__________________\n\n"reset);
		test_ft_read();
	printf(BBLU "\n__________________\nTesting FT_WRITE \n__________________\n\n"reset);
		test_ft_write();
}
