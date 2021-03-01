#include <stdio.h>

int main()
{
    int a=0;
    while(a<=9){
        a++;
        int b=1;
        while(b<=a){
            b++;
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    int c=0;
    while(c<=9){
        c++;
        int d=10;
        while(d>=c){
            d--;
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    int e=0;
    while(e<=9){
        e++;
        int f=2;
        while(f<=e){
            f++;
            printf(" ");
        }
        int g=10;
        while(g>=e){
            g--;
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    int h=0;
    while(h<=9){
        h++;
        int i=9;
        while(i>=h){
            i--;
            printf(" ");
        }
        int j=1;
        while(j<=h){
            j++;
            printf("*");
        }
        printf("\n");
    }

    return 0;
}