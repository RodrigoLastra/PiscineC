#include<unistd.h>

void ft_is_negative(int n)
{ 
    char nega1 = 'N';
    char posi1 = 'P';
    
	if(n>=0){
        write(1,&posi1,1);
    }
    else{
        write(1,&nega1,1);
    }
}
