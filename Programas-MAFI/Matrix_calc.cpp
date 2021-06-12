#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    int s,i,j,o;
              
              
    do
    {
              printf("\n\n");
              printf("\t--------------------------------------------------------------\n");
              printf("\t Tecnologico de Estudios Superiores de Cuautitlan Izcalli \n\n");
              printf("\t\t\t\t  Algebra lineal \n\n");
              printf("\t--------------------------------------------------------------\n");
              
   
    printf("\n\t\t ALGEBRA MATRICIAL\n\n");
    printf("\n Opciones: \n");
    printf("\n SUMA (1) \n\n RESTA (2) \n\n MULTIPLICACION (3) \n\n ESCALA (4) \n\n SALIR (5) \n\n");
    
    printf("\n\n Que operacion deseas realizar: ");
    scanf("%d",&o);
    system("cls");
            
             
   
    //SUMA();
    if(o==1)
    {
      int f,c,a,cont;
      int matrizA[10][10],matrizB[10][10],matrizC[10][10];
     
              printf("\n\n");
              printf("\t--------------------------------------------------------------\n");
              printf("\t\t\t\t   SUMA \n");
              printf("\t--------------------------------------------------------------\n");
              
      printf("\n\t INGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS ");
      printf("\n\n\t EL RANGO DE VALORES DE LA FILA ES DE 2 A 9");
      printf("\n\n\t Ingresa el numero de filas: ");
      scanf("%d",&f);
      printf("\n\n\t Ingresa el numero de Columnas: ");
      scanf("%d",&c);     
     
      //MATRIZ A
           printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ A "); 
		   //EJEMPLO DE MATRIZ
		   printf("\n\n\t Ejemplo de Matriz \n");
            printf("\n\t     | A11 A12  A13  A1. A19 |");
            printf("\n\t     | A21 A22  A23  A2. A29 |");
            printf("\n\t M = | A31 A32  A33  A3. A39 |");
            printf("\n\t     | A.. A-2  A-3  A.. A-9 |");
            printf("\n\t     | A91 A92  A93  A9. A99 |");        
           
          
       for(i=1;i<=f;i++)
       {
         printf("\n\t");
                    
        for(j=1;j<=c;j++)
        { 
           printf("\n\t");                      
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizA[i][j]=a;
        }
       }
      
       //MATRIZ B
           printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ B ");          
           
      
       for(i=1;i<=f;i++)
       {
         printf("\n\t");
        
        for(j=1;j<=c;j++)
        {          
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizB[i][j]=a;
        }
       }
      
       //OPERACION
      
       for(i=1;i<=f;i++)
       {
                       
          for(j=1;j<=c;j++)
          {             
             matrizC[i][j]=matrizA[i][j] + matrizB[i][j];
             printf("\n\n\t RESULTADO ES:");
             printf("(%i,%i):",i,j);
             printf("%i",matrizC[i][j]);
          }
       }                                                      
         getch();
         getch(); 
      }
     
      //RESTA();
     
    if(o==2)
    {
      int f,c,a,r;
      int matrizD[10][10],matrizE[10][10],matrizF[10][10];
     
      
      printf("\n\n");
              printf("\t--------------------------------------------------------------\n");
              printf("\t\t\t\t   RESTA \n");
              printf("\t--------------------------------------------------------------\n");
      printf("\n\n\t Opciones para realizar la Resta: ");
      printf("\n\n\t (1) D-E \n\n\t (2) E-D");
      printf("\n\n\t Elige una opcion: ");
      scanf("%d",&r);
     
      if(r==1)
      {
        printf("\n\n\t TU FORMA ES D-E");     
        printf("\n\n\t INGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\n\t RANGO DE VALORES DE LA FILA Y COLUMNA ES DE 2 A 9");
        printf("\n\n\t Numero de Filas?: ");
        scanf("%d",&f);
        printf("\n\n\t Numero de Columnas : ");
        scanf("%d",&c);
     
        //MATRIZ D
               
        printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ D "); 
		
		printf("\n\n\t Ejemplo de Matriz \n");
            printf("\n\t     | A11 A12  A13  A1. A19 |");
            printf("\n\t     | A21 A22  A23  A2. A29 |");
            printf("\n\t M = | A31 A32  A33  A3. A39 |");
            printf("\n\t     | A.. A-2  A-3  A.. A-9 |");
            printf("\n\t     | A91 A92  A93  A9. A99 |");              
        
        for(i=1;i<=f;i++)
        {
          printf("\n\t");
        
          for(j=1;j<=c;j++)
          {
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizD[i][j]=a;
          }
        }
      
       //MATRIZ E
                      
       printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ E ");              
                
       for(i=1;i<=f;i++)
       {
         printf("\n\t");
        
        for(j=1;j<=c;j++)
        { 
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizE[i][j]=a;
        }
       }
     
      //OPERACION
     
      for(i=1;i<=f;i++)
       {
                       
          for(j=1
          ;j<=c;j++)
          {             
             matrizF[i][j]= matrizD[i][j] - matrizE[i][j];
             printf("\n\n\t RESULTADO ES:");
             printf("(%i,%i):",i,j);
             printf("%i",matrizF[i][j]);
          }
       }                                                      
         getch();   
         getch(); 
      }
     
      if(r==2)
      {
        printf("\n\tTU FORMA ES E-D");
        printf("\n\n\t INGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\n\t RANGO DE VALORES DE LA FILA Y COLUMNA ES DE 2 A 9");
        printf("\n\n\t Numero de Filas?: ");
        scanf("%d",&f);
        printf("\n\n\t Numero de Columnas : ");
        scanf("%d",&c);
     
        //MATRIZ D
               
        printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ D ");   
		printf("\n\n\t Ejemplo de Matriz \n");
            printf("\n\t     | A11 A12  A13  A1. A19 |");
            printf("\n\t     | A21 A22  A23  A2. A29 |");
            printf("\n\t M = | A31 A32  A33  A3. A39 |");
            printf("\n\t     | A.. A-2  A-3  A.. A-9 |");
            printf("\n\t     | A91 A92  A93  A9. A99 |");            
        
        for(i=1;i<=f;i++)
        {
          printf("\n\t");
        
          for(j=1;j<=c;j++)
          {
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizD[i][j]=a;
          }
        }
      
       //MATRIZ E
                      
       printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ E ");   
	              
      
       for(i=1;i<=f;i++)
       {
         printf("\n\t");
        
        for(j=1;j<=c;j++)
        { 
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizE[i][j]=a;
        }
       }
     
      //OPERACION
     
      for(i=1;i<=f;i++)
       {
                       
          for(j=1;j<=c;j++)
          {             
             matrizF[i][j]= matrizE[i][j] - matrizD[i][j];
             printf("\n\n\t RESULTADO ES:");
             printf("\n\n\t posicion (%i,%i):",i,j);
             printf("%i",matrizF[i][j]);
          }
       }                                                      
         getch();
         getch(); 
      } 
      }
     
      //MULTIPLICACION();
     
    if(o==3)
    {
      int m,n,o,p,i,j,k,x,a;
      int matrizX[10][10],matrizY[10][10],matrizZ[10][10];
     
              printf("\n\n");
              printf("\t--------------------------------------------------------------\n");
              printf("\t\t\t\t  MULTIPLICACION \n");
              printf("\t--------------------------------------------------------------\n");
              printf("\n\n\t Opciones para realizar la Resta: ");
      printf("\n\n\t (1) X*Y \n\n\t (2) Y*X");
      printf("\n\n\t Elige una opcion: ");
      scanf("%d",&x);
     
      if(x==1)
      {
       printf("\n\n\t TU FORMA ES X*Y");  
       printf("\n\n\t MATRIZ X");       
      
        printf("\n\n\t INGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\n\t RANGO DE VALORES DE LA FILA Y COLUMNA ES DE 2 A 9");
        printf("\n\n\t Numero de Filas?: ");
        scanf("%d",&m);
        printf("\n\n\t Numero de Columnas : ");
        scanf("%d",&n);
      
       printf("\n\n\t MATRIZ Y");       
      
        printf("\n\n\t INGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\n\t RANGO DE VALORES DE LA FILA Y COLUMNA ES DE 2 A 9");
        printf("\n\n\t Numero de Filas?: ");
        scanf("%d",&o);
        printf("\n\n\t Numero de Columnas : ");
        scanf("%d",&p);
     
      //MATRIZ X
     
       printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ X ");  
	   		printf("\n\n\t Ejemplo de Matriz \n");
            printf("\n\t     | A11 A12  A13  A1. A19 |");
            printf("\n\t     | A21 A22  A23  A2. A29 |");
            printf("\n\t M = | A31 A32  A33  A3. A39 |");
            printf("\n\t     | A.. A-2  A-3  A.. A-9 |");
            printf("\n\t     | A91 A92  A93  A9. A99 |");             
     
       for(i=1;i<=m;i++)
       {
         printf("\n\t");              
     
        for(j=1;j<=n;j++)
        {          
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizX[i][j]=a;
        }
       }
      
       //MATRIZ Y
      
        printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ Y ");                 
                  
       for(i=1;i<=o;i++)
       {
         printf("\n\t");
        
        for(j=1;j<=p;j++)
        {          
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizY[i][j]=a;
        }
       }
      
       //OPERACION
      
       for (i=1;i<=m;i++)
       {
            for (j=1;j<=p;j++)
            {
               matrizZ[i][j]=0; /*Limpia la variable para entrar de nuevo al for*/
                  for (k=1;k<=n;k++)
                  { 
                      matrizZ[i][j]=((matrizX[i][k] * matrizY[k][j])+ matrizZ[i][j]);
                  }
           }
        }
               printf("\n\nLa matriz resultante de la multiplicacion es: \n");

                /*Ciclo que imprime la matriz resultante*/
              for (i=1;i<=m;i++)
               {
                  printf("\n");

                     for(j=1;j<=p;j++)
                         {
                                printf("\\n\n\t RESULTADO ES");
                                printf("(%i,%i):",i,j);
                                printf(" %i ",matrizZ[i][j]);
                         }
                }
          getch();
       }
      
       if(x==2)
      {
       printf("\n\n\t TU FORMA ES X*Y");  
       
	   printf("\n\n\t MATRIZ X");       
      
        printf("\n\n\t INGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\n\t RANGO DE VALORES DE LA FILA Y COLUMNA ES DE 2 A 9");
        printf("\n\n\t Numero de Filas?: ");
        scanf("%d",&m);
        printf("\n\n\t Numero de Columnas : ");
        scanf("%d",&n);
      
       printf("\n\n\t MATRIZ Y");       
      
        printf("\n\n\t INGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\n\t RANGO DE VALORES DE LA FILA Y COLUMNA ES DE 2 A 9");
        printf("\n\n\t Numero de Filas?: ");
        scanf("%d",&o);
        printf("\n\n\t Numero de Columnas : ");
        scanf("%d",&p);
     
      //MATRIZ X
     
       printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ X ");
	   	printf("\n\n\t Ejemplo de Matriz \n");
            printf("\n\t     | A11 A12  A13  A1. A19 |");
            printf("\n\t     | A21 A22  A23  A2. A29 |");
            printf("\n\t M = | A31 A32  A33  A3. A39 |");
            printf("\n\t     | A.. A-2  A-3  A.. A-9 |");
            printf("\n\t     | A91 A92  A93  A9. A99 |");               
    
     
       for(i=1;i<=m;i++)
       {
         printf("\n\t");              
     
        for(j=1;j<=n;j++)
        {          
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizX[i][j]=a;
        }
       }
      
       //MATRIZ Y
      
        printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ Y ");                 

                  
       for(i=1;i<=o;i++)
       {
         printf("\n\t");
        
        for(j=1;j<=p;j++)
        {          
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizY[i][j]=a;
        }
       }
       }
      
       //0PERACION
      
        for (i=1;i<=m;i++)
            {
                for (j=1;j<=p;j++)
                   {
                       matrizZ[i][j]=0; /*Limpia la variable para entrar de nuevo al for*/
                          for (k=1;k<=n;k++)
                           {
                              matrizZ[i][j]=(matrizY[i][k] * matrizX[k][j])+ matrizZ[i][j];
                           }
                    }                    
            }             

                  printf("\n\nLa matriz resultante de la multiplicacion es: \n");

                  /*Ciclo que imprime la matriz resultante*/
                for (i=1;i<=m;i++)
                    {
                           printf("\n");

                           for(j=1;j<=p;j++)
                             { 
                                    printf("\n\n\t RESULTADO ES");
                                    printf("(%i,%i):",i,j);    
                                    printf(" %i ",matrizZ[i][j]);
                             }
                     }
       getch();    
    }
                   //SCALE MATRIX
	    if(o==4)  
		{ 
		int m,n,o,p,i,j,k,x,a,X;
		int matrizX[10][10],matrizY[10][10],matrizZ[10][10];
	          printf("\n\n");
              printf("\t--------------------------------------------------------------\n");
              printf("\t\t\t\t   ESCALA \n");
              printf("\t--------------------------------------------------------------\n");
              
           	   printf("\n\n\t MATRIZ X");       
      
        printf("\n\n\t INGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\n\t RANGO DE VALORES DE LA FILA Y COLUMNA ES DE 2 A 9");
        printf("\n\n\t Numero de Filas?: ");
        scanf("%d",&m);
        printf("\n\n\t Numero de Columnas : ");
        scanf("%d",&n);
      
            o=m;
            p=n;
        
      		//MATRIZ X
     
       printf("\n\n\t INGRESANDO VALORES DE LA MATRIZ X ");  
       	   	printf("\n\n\t Ejemplo de Matriz \n");
            printf("\n\t     | A11 A12  A13  A1. A19 |");
            printf("\n\t     | A21 A22  A23  A2. A29 |");
            printf("\n\t M = | A31 A32  A33  A3. A39 |");
            printf("\n\t     | A.. A-2  A-3  A.. A-9 |");
            printf("\n\t     | A91 A92  A93  A9. A99 |"); 
	               
     
       for(i=1;i<=m;i++)
       {
         printf("\n\t");              
     
        for(j=1;j<=n;j++)
        {          
           printf("\n\t");
           printf("\n\n\t posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizX[i][j]=a;
        }
       }
      
       //MATRIZ ESCALA
        
        printf("\n\n\t Introduce la escala: ");
            scanf("%d",&X);
                  
       for(i=1;i<=o;i++)
       {
        
        for(j=1;j<=p;j++)
        {          

           matrizY[i][j]=(X);
        }
       }
      
       //OPERACION
      
       for (i=1;i<=m;i++)
       {
            for (j=1;j<=p;j++)
            {
               matrizZ[i][j]=0; /*Limpia la variable para entrar de nuevo al for*/
                  for (k=1;k<=n;k++)
                  { 
                      matrizZ[i][j]=((matrizX[i][k] * matrizY[k][j])+ matrizZ[i][j]);
                  }
           }
        }
               printf("\n\nLa matriz resultante de la multiplicacion es: \n");

                /*Ciclo que imprime la matriz resultante*/
              for (i=1;i<=m;i++)
               {
                  printf("\n");

                     for(j=1;j<=p;j++)
                         {
                                printf("\n\n\t RESULTADO ES");
                                printf("(%i,%i):",i,j);
                                printf(" %i ",(matrizZ[i][j])/2);
                         }
                }
          getch();
              
            
	         	
			 } 
 
     
     
        getchar();
    }
    
while(o!=5);    
}

