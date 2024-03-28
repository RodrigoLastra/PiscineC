#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
   char primero;
   char segundo;
   char tercero;

    primero='0'-1;
    while(primero<':'){
    primero++;
        segundo=primero;
        while(segundo<':'){
            segundo++;
            tercero=segundo+1;
            while(tercero<':'){
            ft_putchar(primero);
            ft_putchar(segundo);
            ft_putchar(tercero);
            ft_putchar('-')    
                tercero++;

            }
            


        }


    }
    

}

int main(){


ft_print_comb();
return(0);
}
