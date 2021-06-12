#include<conio.h> 
#include<stdio.h> 

	float calculaDeter(float a[10][10], int ecuaciones); 
	int main() 
	{ 

			float a[10][10],b[10][10],x[10], determinante; 
		int i,j,k,ecuaciones = 0; 
		char letra = 'a',letra2='z'; 

				do{ 
				        printf("\n\n");
                        printf("\t--------------------------------------------------------------\n");
                        printf("\t Tecnologico de Estudios Superiores de Cuautitlan Izcalli \n\n");
                        printf("\t\t\t\t  Algebra lineal \n\n");
                        printf("\t--------------------------------------------------------------\n");
                        printf("\n\n\t METODO DE CRAMER PARA SISTEMA DE ECUACIONES ");
						printf("\n\n\t Ingresa el numero ecuaciones de tu sistema (soporta hasta 9): "); 
						scanf("%d",&ecuaciones); 
				}while((ecuaciones<=1) || (ecuaciones>=10)); 

		printf("\n\n\t Ecuacion de la forma:\n\n"); 
			for(i=1;i<=ecuaciones;i++) 
			{ 
					letra = 'a'; 
					letra2 = 'z' - (ecuaciones-1); 
							for(j=1;j<=ecuaciones;j++) 
									{ 
										if (j==1) 
											printf("(%c%d)%c",letra,i,letra2); 
										else 
										printf(" + (%c%d)%c",letra,i,letra2); 

									letra++; 
									letra2++; 
									} 
					printf(" = %c%d\n",letra,i); 
			} 

			letra = 'a'; 
					for(i=1;i<=ecuaciones+1;i++) 
					{ 

						for(j=1;j<=ecuaciones;j++) 
							{ 
							printf("\n%c%d = ",letra,j); 
							scanf("%f",&a[j][i]); 
							} 
						letra++; 
					} 

			determinante = calculaDeter(a, ecuaciones); 

			if (determinante == 0) 
			{ 
					printf("\n\n\t El conjunto no tiene solucion o tiene soluciones infinitas."); 
					return 0; 
			} 

			for (i=1;i<=ecuaciones;i++) 
			{ 
					for (k=1;k<=ecuaciones;k++) 
						{ 
							for (j=1;j<=ecuaciones;j++) 
								{ 
									if(i==k) 
									b[j][k] = a[j][ecuaciones+1]; 
									else 
									b[j][k] = a[j][k]; 

								}	 
						} 
					x[i] = calculaDeter(b, ecuaciones)/determinante; 
			} 

			printf("\n\n\t El conjunto solucion es: "); 

			letra = 'z' - (ecuaciones-1); 
			for(i=1;i<=ecuaciones;i++) 
				{ 
					printf("\n%c = %f",letra,x[i]); 
					letra++; 
				} 
		getch(); 
		return 0; 
	} 

			float calculaDeter(float a[10][10], int ecuaciones) 
			{ 
				float determinante = 0,b[10][10]; 
				int i, j,k,l = 0; 

					if (ecuaciones>2) 
						{ 
							for (i=1;i<=ecuaciones;i++) 
								{ 
									l=0; 
									for (j=1;j<=ecuaciones-1;j++) 
										{ 

										if (j == i) 
											l++; 
										for (k=1;k<=ecuaciones-1;k++) 
										b[j][k] = a[j+l][k+1]; 
										} 
							if ((i%2) == 1) 
								determinante = determinante + a[i][1]*calculaDeter(b,ecuaciones-1); 
							else 
							determinante = determinante - a[i][1]*calculaDeter(b,ecuaciones-1); 
								} 
						} 
					else 
						determinante = (a[1][1] * a[2][2]) - (a[1][2] * a[2][1]); 
			return determinante; 
			}
