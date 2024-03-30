#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
        int num2 = 122;
        while (num2 > 96)
        {  
             write(1, &num2, 1);
            num2 = num2 - 1;
        }
}
