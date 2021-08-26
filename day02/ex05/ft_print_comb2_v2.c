#include <zconf.h>


int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}


void ft_print_comb2_v2() {
	for (int a = 0; a <= 98; a++) {
		for (int b = 1; b <= 99; b++) {
			if (a != b) {
				ft_putchar((a/10) + '0');
				ft_putchar((a%10) + '0');
				ft_putchar(' ');
				ft_putchar((b/10) + '0');
                                ft_putchar((b%10) + '0');
			}
			if (a != 98) {
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}




int main() {
	ft_print_comb2_v2();
}
