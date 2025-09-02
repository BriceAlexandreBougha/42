#include "libft.h" 

void  ft_putnbr_fd(int nb, int fd)
{
    char c;

    if (nb == -2147483648) {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (nb < 0) {
        write(fd, "-", 1);
        nb = nb * -1;
    }
    if (nb >= 10)
        ft_putnbr_fd(nb / 10, fd);
    c = (nb % 10) + '0';
    write(fd, &c, 1);
}