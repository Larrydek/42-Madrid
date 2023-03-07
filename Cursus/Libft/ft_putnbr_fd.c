#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *s;
    size_t i;

    i = 0;
    s = ft_itoa(n);

    if (!s)
        return;

    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    free(s);
}