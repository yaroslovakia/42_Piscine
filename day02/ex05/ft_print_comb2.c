#include <zconf.h>


int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}


void ft_print_comb2() {
	int a = 0, b = 0, c = 0, d = 0;
	while (a*10 + b <= 99) {
		while (b < 9) {
			d = b + 1;
			while (c*10 + d <= 99) {
				while (d <= 9) {
					if (a*10 + b != c*10 + d) {
						ft_putchar(a + '0');
						ft_putchar(b + '0');
						ft_putchar(' ');
						ft_putchar(c + '0');
						ft_putchar(d + '0');
					}
					if (a*10 + b != 98) {
						ft_putchar(',');
						ft_putchar(' ');
					}
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
	}
}




int main() {
	ft_print_comb2();
}
