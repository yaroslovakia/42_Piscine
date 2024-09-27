#include <zconf.h>


int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

void ft_putnbr(int nb) {
	if (nb < 0) {
		ft_putchar('-');
		ft_putnbr(-1 * nb);
	}
	else {
		if (nb < 10) {
			ft_putchar(nb + '0');
		}
		else {
			ft_putnbr(nb / 10);
			ft_putchar((nb%10) + '0');
		}
	}
}





int main() {
	ft_putnbr(42);
}
