#include <stdio.h>

int main()
{
    int x,a=0,b=0,c=0,d=0,alumnos;
    float p,prom,s=0;
    printf("Digite el numero de alumnos: "); scanf("%i",&alumnos);
    for(x=0;x<alumnos;x++)
    {
        printf("\nCuanto pesa el alumno? ") ;scanf("%f",&p);
        if(p<40)
        {
            s+=p;
            a++;
        }
        else if(p>=40 && p<=50)
        {
            s+=p;
            b++;
        }
        else if(p>50 && p<60)
        {
            s+=p;
            c++;
        }
        else
        {
            s+=p;
            d++;
        }
    }
    prom=s/alumnos;
    printf("Alumnos que pesan menos de 40 kg: %i\n",a);
    printf("Alumnos que pesan entre 40 kg y 50 kg: %i\n",b);
    printf("Alumnos que pesan mas de 50 kg y menos de 60 kg: %i\n",c);
    printf("Alumnos que pesan 60 kg o mas: %i\n\n",d);
    printf("El peso promedio es: %.2f kg\n",prom);
    return 0;
}