#include<stdio.h>

void comparar(int m1[][4], int m2[][4]);
void leer(int m[][4]);
void juego(int m[][4]);


int main(){
	
	int m1[4][4] = {{1,3,2,4},{4,2,1,3}, {3,1,4,2}, {2,4,3,1}};
	int m2[4][4] = {{0,0,0,0},{0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
	
	leer(m1);
	
	juego(m2);
	
	leer(m2);
	
	comparar(m1, m2);
	
	
	return 0;	
}

void juego(int m[][4]){
	
	int i, j; 
	
	printf("Indique en que fila quiere colocar el valor: ");
	scanf("%i", &i);
	i = i-1;
	
	printf("Indique en que columna quiere colocar el valor: ");
	scanf("%i", &j);
	j = j-1;
	
	printf("Indique el valor de la fila %i columna %i: ", i+1, j+1);
	scanf("%i", &m[i][j]);
	
}

void comparar(int m1[][4], int m2[][4]){
	
	int i, j, aux;
	
	aux = 0;
	
	for(i = 0; i < 4 && aux == 0; i++){
		for(j = 0; j < 4 && aux == 0; j++){
			if(m1[i][j] != m2[i][j]){
				aux = 1;
			}
		}
	}
	
	if(aux == 0){
		printf("Ambas matrices son iguales\n\n");
	}
	else{
		printf("Ambas matrices no son iguales\n\n");
	}
}

void leer(int m[][4]){
	
	int i, j;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%i ", m[i][j]);
		}
		printf("\n");
	}
}
