#include <stdio.h>

// int main()
// {
//     float celsius,fahrenheit,decision;
//     printf("Quieres convertir de Celsius a Fahrenheit (1) o de Fahrenheit a Celsius (2)? ");
//     scanf("%f",&decision);

//     if (decision==1){
//         printf("Muy bien! Ingrese la temperatura en Grados Celsius: ");
//         scanf("%f",&celsius);
//         printf("%.2f a Grados Fahrenheit son: %.2f\n",celsius,celsius*33.8);
//     }
//     else if (decision==2){
//         printf("Muy bien! Ingrese la temperatura en Grados Fahrenheit: ");
//         scanf("%f",&fahrenheit);
//         printf("%.2f a Grados Celsius son: %.2f\n",fahrenheit,fahrenheit*-17.2222);
//     }   
//     else
//     {
//         printf("Ingrese un valor correcto, por favor\n");
//     }
    
//     return 0;
// }

int main()
{
    float celsius,fahrenheit;
    int decision;

    printf("Quieres convertir de Celsius a Fahrenheit (1) o de Fahrenheit a Celsius (2)? ");
    scanf("%d",&decision);

    switch (decision)
    {
    case 1:
        printf("Muy bien! Ingrese la temperatura en Grados Celsius: ");
        scanf("%f",&celsius);
        printf("%.2f a Grados Fahrenheit son: %.2f\n",celsius,celsius*33.8);
        break;
    case 2: 
        printf("Ingrese la temperatura en Grados Fahrenheit: ");
        scanf("%f",&fahrenheit);
        printf("%.2f a Grados Celsius son: %.2f\n",fahrenheit,fahrenheit*-17.2222);
        break;
    default:
        printf("Ingrese un valor correcto por favor\n");
        break;
    }

    return 0;
}