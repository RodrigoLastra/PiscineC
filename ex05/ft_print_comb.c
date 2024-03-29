#include <unistd.h>

void	ft_print_comb(void)
{
   char primero;
   char segundo;
   char tercero;

    primero =  48 - 1; // "/" 0 vale 48
    while(primero < 58 ){  // primero vale 48 y 9 vale 57
    primero = primero + 1; // primero vale 48 osea 0
        segundo = primero; // segundo vale 48 osea 0
        while(segundo < 58 ){
            segundo = segundo + 1; // segundo vale 49 osea 1
                tercero = segundo + 1;
                while(tercero<':'){
                write(1, &primero, 1);
                write(1, &segundo, 1);
                write(1, &tercero, 1);
                write(1, " ", 1);
                
            tercero++;
                
            }
            
        }

    }
    
}

int main(){

ft_print_comb();
return(0);
}
