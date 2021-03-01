#include <stdio.h>

int main()
{
    float num_1,num_2;

    printf("Ingrese un numero: ");
    scanf("%f",&num_1);
    printf("Ingrese un numero mas: ");
    scanf("%f",&num_2);

    // printf("Digite dos numeros: ");
    // scanf("%f %f",&num_1,&num_2);

    printf("Los resultados son:\n");
    printf("Si se suman: %.2f\n",num_1+num_2);
    printf("Si se restan: %.2f\n",num_1-num_2);
    printf("Si se multiplican: %.2f\n",num_1*num_2);
    printf("Si se dividen: %.2f\n",num_1/num_2);

    return 0;
}
