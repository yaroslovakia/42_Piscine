#include <zconf.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

int main() {
	int hui[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	int i = 0;
	while (hui[i]) {
        ft_putchar(hui[i]);
        i++;
	}
	ft_putchar('\n');
}
