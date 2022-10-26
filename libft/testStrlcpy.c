#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlcpy.c"

int	main(int argc, char **argv)
{
	char src[] = "SOURCE";
	char dst[] = "destination";

	printf ("dst (before) : %s", dst);
	printf ("\nsrc (before) : %s", src);
	printf ("\nret val : %lu", strlcpy(dst, src, atoi(argv[argc])));
	printf ("\nsrc (after) : %s", src);
	printf ("\ndst (after) : %s", dst);

	return (0);
}
