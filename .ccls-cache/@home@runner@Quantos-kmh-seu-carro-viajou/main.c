#include <stdio.h>

int main (){
	
	int x , y , m , n;
	
	printf("Digite quantas horas levou primeira a viagem: \n");
	scanf("%d", &x);
	
	printf("Digite quantos km/h o veiculo estava: \n");
	scanf("%d", &y);
	
	printf("Digite quantas horas foi segunda a viagem: \n");
	scanf("%d", &m);
	
	n = (x * y) / m;
	
	printf("A Velocidade em km/h que o carro viajou foi: %d", n);
	
	return 0;
	
}