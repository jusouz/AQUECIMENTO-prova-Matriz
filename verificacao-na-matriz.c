#include <stdio.h>
#include "matrixlib.h"

int main(){
	 int i,j;
	 int matriz[100][100];
	 int pares=0;
	 int impares=0;
	 geraMatrix(matriz,5,5);
	 printMatrix(matriz,5,5);
	 for(i=0;i<5;i++){
	 	for(j=0;j<5;j++){
	 		if(matriz[i][j]%2==1)
	 		impares++;
	 		else
	 		pares++;

		 }
	 }
	 printf("numeros pares %d\n",pares);
	  printf("numeros impares %d\n",impares);
}
