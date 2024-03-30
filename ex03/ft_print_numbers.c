#include<unistd.h>

void ft_print_numbers(void)
{
    int num3 = 48;
    while (num3 < 58)
    {
        write(1, &num3, 1);
        num3 = num3 + 1;
    }
}
