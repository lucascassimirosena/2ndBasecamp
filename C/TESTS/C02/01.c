#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int    main(void)
{
    char            src[] = "12345678";
    char            dest[8];
    unsigned int    n;

    n = 9;
    dest[0] = *ft_strncpy(dest, src, n);
    printf("Source: %s\n", src);
    printf("Dest: %s\n", dest);
}