#include <zconf.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

int main() {
	char hui[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	int i = 0;
	while (hui[i]) {
        ft_putchar(hui[i]);
        i++;
	}
	ft_putchar('\n');
}
