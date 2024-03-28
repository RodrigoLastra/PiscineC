#include<unistd.h>

void ft_print_alphabet(void)
{
        int num1 = 97;
        while (num1 < 123)
        {
            write(1, &num1, 1);
            num1 = num1 + 1;
        }    
}

int main(void)
{
    ft_print_alphabet();
    return(0);
}