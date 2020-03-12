#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	printf("%i\n",toupper('a' - 256));
	printf("%i\n",ft_toupper('a' - 256));
	printf("%i\n", (unsigned char)'a' - 256);
}
