#include<unistd.h>

void ft_is_negative(int n)
{ 
    //int n = 1;
    char nega1 = 'N';
    char posi1 = 'P';
    //write(1, &n, 1);
    if(n>=0){
        write(1,&posi1,1);
    }
    else{
        write(1,&nega1,1);
    }
