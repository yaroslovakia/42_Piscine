#include <zconf.h>
#include <stdio.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

void ft_is_negative(int n) {
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
	ft_putchar('\n');
}

int main() {
	int n;
	scanf("%d", &n);
	ft_is_negative(n);
}

