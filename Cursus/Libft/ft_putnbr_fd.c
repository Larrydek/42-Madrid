#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char s[2];
    long num;
    
    num = n;
    
    if (num < 0)
    {
        write(fd, "-", 1);
        num = -num;
    }

    while(num > 0)
    {
        s[0] = (num % 10) + 48;
        s[1] = 0;
        num = num / 10;
        ft_putnbr_fd(num, fd);
        write(fd, &s[0], 1);
        return;
    }
}

int main()
{
    int n;
    int fd;

    n = -283648;
    fd = 2;
    ft_putnbr_fd(n, fd);
    write(fd, "\n", 1);

    n = 0;
    ft_putnbr_fd(n, fd);
    write(fd, "\n", 1);

    n = 2345435;
    ft_putnbr_fd(n, fd);
    write(fd, "\n", 1);

    return 0;
}
