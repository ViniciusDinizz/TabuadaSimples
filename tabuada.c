#include <stdio.h>
#include <conio.h>

int main (){
	char tabuada;
	int result;

	printf("\nVer a tabuada (S)- Sim | (N)- Nao: ");
	scanf("%c", &tabuada);
	
if (tabuada == 'S' || tabuada == 's'){
	for (int i = 1; i <= 9; i++){
		printf("\n");
		for (int x = 0; x <= 10; x++){
			result = i * x;
			printf("\n %d x %d = %d ", i , x , result);
			
		}
		result = 0;
	}
}else
	printf("\nBye Bye.");	

	
return 0;	
	
}


