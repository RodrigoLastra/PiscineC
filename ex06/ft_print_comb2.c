#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
   char primero;
   //char segundo;
   //char tercero;
   //char cuarto;

    primero =  48; // "/" 0 vale 48
    while(primero < 58 ){  // primero vale 48 y 9 vale 57
    //primero = primero + 1; // primero vale 48 osea 0
       // segundo = primero + 1; // segundo vale 48 osea 0
        //while(segundo < 58 ){
            //segundo = segundo + 1; // segundo vale 49 osea 1
                //tercero = segundo + 1;
                    //while(cuarto < 58){
                        //tercero = tercero + 1;
                            //cuarto = tercero + 1;
                                //while(cuarto < 58){
                                    ft_putchar(primero);
                                    //ft_putchar(segundo);
                                    //ft_putchar(tercero);
                                    //ft_putchar(cuarto);
                                    ft_putchar(' ');
                                    primero++;
                                }

            }
            
       // }

  //  }
    
//}

int main(){

ft_print_comb();
return(0);
}
