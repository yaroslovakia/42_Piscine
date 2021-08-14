#include <zconf.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

int main() {
	ft_putchar('h');
	ft_putchar('u');
	ft_putchar('i');
}
