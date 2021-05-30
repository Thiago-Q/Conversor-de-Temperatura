#include <stdio.h>
int main(void){
	int num, i, Quantidade_divisoes = 0;
	printf("Informe um valor: ");
	scanf("%d", &num);
	for(i = 1; i<= num; i++){
		if((num % i) == 0){
			Quantidade_divisoes += 1;
	}
}
if(Quantidade_divisoes == 2){
	printf("%d e primo", num);
}
else{
	printf("%d nao e primo", num);
}
return 0;
}
