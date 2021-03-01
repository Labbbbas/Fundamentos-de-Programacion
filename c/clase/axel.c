#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int n,m,r,a,i,j,x,dia,mes;
    char *tareas[20][100];
    char *dias[20][100];
    char *meses[20][100];
    
	system("clear");
    printf("\t\t\t\t\tWenos Dias a su agenda :v \t\n\n\tCuantas tareas tiene?\t");
    scanf("%d", &m);
    
    if(m > 0 && m < 101)
	{
		puts("\n\tTodo bien :), tu puedes campeon\n");
	}
	else
	{
		puts("Dato invalido, vuelva a ejecutar la agenda e introduzca un numero entero :)");
		exit(-1);
	}
  	getchar();
    
    for(x=m;x==m;x++)
    {
		//nombre
		for(n=1;n<=m;n++)
		{
			system("clear");
	        printf("\t\t\t\t\tAgenda 2021\t\n\n\tIngrese el nombre de la tarea %d:\t ", n);
	        scanf("%s",&tareas[n]);   
	        printf("\n\tUsted escribio: %s? \n\t1- Si\n\t2- No\n\t\n\tIngrese 1 o 2: \t", tareas[n]);  
	        scanf("%d",&r);
	        if(r==2)
			{
	        	n--;
			}
			else if(r==1)
			{
				continue;
			}
			else
			{
				printf("\nOpcion incorrecta, seleccione una opcion valida  e introduzca de nuevo la tarea\n");
				n--;
				getchar();
			}	 
		}
		
		//dia
		for(i=1;i<=m;i++)
		{
			system("clear");
	        printf("\t\t\t\t\tAgenda 2021\t\n\n\tPara que dia es la tarea de %s:\t ", tareas[i]);
	        scanf("%s",&dias[i]);
	        dia = atol(dias[i]);
	        if(dia > 0 && dia < 32)
			{
				printf("\n\tUsted escribio: %s? \n\t1- Si\n\t2- No\n\t\n\tIngrese 1 o 2: \t", dias[i]);  
	        	scanf("%d",&r);
	        
				if(r==2)
				{
	        		i--;
				}
				else if(r==1)
				{
					continue;
				}
				else
				{
					printf("\nOpcion o valor incorrecto, introduzca de nuevo el dia y seleccione una opcion valida\n\n");
					i--;
					getchar();
				}
			}
			else
			{
				printf("\nOpcion o valor incorrecto, introduzca de nuevo el dia y seleccione una opcion valida\n\n");
				i--;
				getchar();
			}
			
		}	   
		
		//mes
		for(j=1;j<=m;j++)
		{
			system("clear");
	        printf("\t\t\t\t\tAgenda 2021\t\n\n\tPara que mes es la tarea de %s:\t ", tareas[j] );
	        scanf("%s",&meses[j]);
	        mes = atol(meses[j]);
			if(mes > 0 && mes < 13)
			{
				printf("\n\tUsted escribio: %s? \n\t1- Si\n\t2- No\n\t\n\tIngrese 1 o 2: \t", meses[j]);  
	        	scanf("%d",&r);
	        
				if(r==2)
				{
	        		j--;
				}
				else if(r==1)
				{
					continue;
				}
				else{
					printf("\nOpcion o valor incorrecto, introduzca de nuevo el mes y seleccione una opcion valida\n\n");
					j--;
					getchar();
				}
			}
			else
			{
				printf("\nOpcion o valor incorrecto, introduzca de nuevo el mes y seleccione una opcion valida \n\n");
				j--;
				getchar();
			}
			     
		}
	}
	
	// int k;
	// for(k=)
    system("clear");
	printf("\t\t\t\tAgenda 2021\t\n\n\tSus tareas pendientes son:\n\n");
    
    for(a=1,i=1,j=1;a<=m;a++,i++,j++)
	{
		printf("%s: para el %s/%s/2020\n", tareas[a],dias[i],meses[j]);
	}
	
}