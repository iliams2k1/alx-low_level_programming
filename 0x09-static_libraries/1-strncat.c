0x09. C - Static libraries
README.md


C - Static libraries


TASKS



[0. A library is not a luxury but one of the necessities of life](libmy.a)


	Create the static library libmy.a containing all the functions listed below:


	If you haven’t coded all of the above functions create empty ones with the right prototype.

	Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.


	[1. Without libraries what have we? We have no past and no future](create_static_lib.sh)


	Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.




















	main.h


#ifndef MAIN_H

#define MAIN_H

	int _putchar(char c);

	int _islower(int c);

	int _isalpha(int c);

	int _abs(int n);

	int _isupper(int c);

	int _isdigit(int c);

	int _strlen(char *s);

	void _puts(char *s);

	char *_strcpy(char *dest, char *src);

	int _atoi(char *s);

	char *_strcat(char *dest, char *src);

	char *_strncat(char *dest, char *src, int n);

	char *_strncpy(char *dest, char *src, int n);

	int _strcmp(char *s1, char *s2);

	char *_memset(char *s, char b, unsigned int n);

	char *_memcpy(char *dest, char *src, unsigned int n);

	char *_strchr(char *s, char c);

	unsigned int _strspn(char *s, char *accept);

	char *_strpbrk(char *s, char *accept);

	char *_strstr(char *haystack, char *needle);

#endif
















	0-putchar.c
#include <unistd.h>
	/**
	 *  * _putchar - writes the character c to stdout
	 *   * @c: The character to print
	 *    *
	 *     * Return: On success 1.
	 *      * On error, -1 is returned, and errno is set appropriately.
	 *       */
	int _putchar(char c)
{
	        return (write(1, &c, 1));
}
























0-isupper.c

#include "main.h"


/**
 *
 *  * _isupper - uppercase letters
 *
 *   * @c: char to check
 *
 *    *
 *
 *     * Return: 0 or 1
 *
 *      */


int _isupper(int c)

{

	        if (c >= 'A' && c <= 'Z')

			                return (1);

		        else

				                return (0);

}























0-memset.c

#include "main.h"

/**
 *
 *  * _memset - fill a block of memory with a specific value
 *
 *   * @s: starting address of memory to be filled
 *
 *    * @b: the desired value
 *
 *     * @n: number of bytes to be changed
 *
 *      *
 *
 *       * Return: changed array with new value for n bytes
 *
 *        */

char *_memset(char *s, char b, unsigned int n)

{

	        int i = 0;


		        for (; n > 0; i++)

				        {

						                s[i] = b;

								                n--;

										        }

			        return (s);

}



















0-strcat.c

#include "main.h"

/**
 *
 *  * _strcat - concatenates two strings
 *
 *   * @dest: input value
 *
 *    * @src: input value
 *
 *     *
 *
 *      * Return: void
 *
 *       */

char *_strcat(char *dest, char *src)

{

	        int i;

		        int j;


			        i = 0;

				        while (dest[i] != '\0')

						        {

								                i++;

										        }

					        j = 0;

						        while (src[j] != '\0')

								        {

										                dest[i] = src[j];

												                i++;

														                j++;

																        }


							        dest[i] = '\0';

								        return (dest);

}










1-isdigit.c

#include "main.h"


/**
 *
 *  * _isdigit - checks for a digit (0 through 9)
 *
 *   * @c: int to be checked
 *
 *    * Return: 1 if c is a digit, 0 otherwise
 *
 *     */

int _isdigit(int c)

{

	        return (c >= '0' && c <= '9');

}




























1-memcpy.c

#include "main.h"

/**
 *
 *  *_memcpy - a function that copies memory area
 *
 *   *@dest: memory where is stored
 *
 *    *@src: memory where is copied
 *
 *     *@n: number of bytes
 *
 *      *
 *
 *       *Return: copied memory with n byted changed
 *
 *        */

char *_memcpy(char *dest, char *src, unsigned int n)

{

	        int r = 0;

		        int i = n;


			        for (; r < i; r++)

					        {

							                dest[r] = src[r];

									                n--;

											        }

				        return (dest);

}


















1-strncat.c

#include "main.h"

/**
 *
 *  * _strncat - concatenate two strings
 *
 *   * using at most n bytes from src
 *
 *    * @dest: input value
 *
 *     * @src: input value
 *
 *      * @n: input value
 *
 *       *
 *
 *        * Return: dest
 *
 *         */

char *_strncat(char *dest, char *src, int n)

{

	        int i;

		        int j;


			        i = 0;

				        while (dest[i] != '\0')

						        {

								                i++;

										        }

					        j = 0;

						        while (j < n && src[j] != '\0')

								        {

										        dest[i] = src[j];

											        i++;

												        j++;

													        }

							        dest[i] = '\0';

								        return (dest);

}
