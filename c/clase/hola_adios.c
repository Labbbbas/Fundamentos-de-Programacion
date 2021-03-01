#include <stdio.h>

int main()
{
    char hola[]="Hola",adios[]="Adios";
    int i = 1;

    while(i<= 10){
        printf("%s   %s\n",hola,adios);
        i+=1;
    }
    return 0;
}