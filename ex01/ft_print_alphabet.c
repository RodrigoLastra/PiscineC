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
<<<<<<< HEAD
int main (){
    ft_print_alphabet();
    return(0);
}
=======

int main ()
{
    ft_print_alphabet();
    return 0;
}
>>>>>>> a8b00a37d20619fc068d03f283844d0a8fea762f
