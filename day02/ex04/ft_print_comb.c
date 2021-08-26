#include <zconf.h>


int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}


void ft_print_comb() {
	int i = 0, j = 0, k = 0;
	while (i <= 9) {
		j = i + 1;
		while (j <= 9) {
			k = j + 1;
			while (k <= 9) {
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				if (i*100 + j*10 + k != 789) {
					ft_putchar(',');
					ft_putchar(' ');
				}
				++k;
			}
			++j;
		}
		++i;
	}
}





int main() {
	ft_print_comb();
}
