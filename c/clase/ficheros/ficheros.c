#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE* fichero;
    FILE* fichero2;
    int x,r=1;
    char l[10];
    fichero=fopen("fichero.txt","wt");
    fprintf(fichero,"Hola, mundo.%c",'\n');
    fprintf(fichero,"Como estamos?%c",'\n');
    fprintf(fichero,"Adios, adios...");
    fclose(fichero);
    fichero = fopen("fichero.txt","rt");
    fichero2 = fopen("FICHERO2.txt","wt");
    while(fscanf(fichero,"%s",&l)==1)
    {
        for(x=0;x<10;x++)
        {
            l[x]=toupper(l[x]);
        }
        if(r%2==0)
        {
            fprintf(fichero2,"%s%c",l,'\n');
        }
        else
        {
            fprintf(fichero2,"%s%c",l,' ');
        }
        r++;
    }
    fclose(fichero);
    fclose(fichero2);
    return 0;
}