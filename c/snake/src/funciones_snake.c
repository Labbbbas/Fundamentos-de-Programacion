#include <stdio.h>
#include <stdlib.h>
#include "snake.h"

void gotoxy(int x, int y){
    printf("%c[%d;%dH",ESC,y,x);
}

void imprimir_escenario(){
    int i,j;
    char c;
    gotoxy(XBOUND,YBOUND);
    for(j=0;j<NY+2;j++){
        for(i=0;i<NX+2;i++){
            if(i==0||i==NX+1){
                switch(j){
                case 0:c=ESQ_SI*(i==0)+ESQ_SD*(i==NX+1);
                    break;
                case NY+1:c=ESQ_II*(i==0)+ESQ_ID*(i==NX+1);
                    break;
                default:c=BAR_V;
                    break;
                }
            }
            else{
                if(j==0||j==NY+1){
                    c=BAR_H;
                }
                else{
                    c=' ';
                }
            }
            printf("%c",c);
            if(i==NX+1){
                gotoxy(XBOUND,YBOUND+j+1);
            }
        }
    }
}