#include <stdio.h>
#include <string.h>

int starCodon(char dna[100],int n){
	int i,posicao=-1;
	strupr=dna;
	for(i=0;i<n-2;i++){
		if(dna[i]=='A'&& dna[i+1]=='T'&& dna[i+2]=='G'){
			posicao=i;
			break;
		}	
	}
	return posicao;
}
int main(){
	char dna[100];
	int n;
	int res;
	printf("sequencia de dna :");
	fflush(stdin);
	gets(dna);
	n=strlen(dna);
	res=starCodon(dna,n);
	if(res==-1);
	printf("nao possui inicio de gene\n");
	else
	printf("gene se inicia %d\n",res);
	return 0;
}
