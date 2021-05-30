#include <stdio.h>
int main(void){
  float temperatura_F, conversao_C;
  printf("Informe a medida em Fahrenheit: ");
  scanf("%f", &temperatura_F);
  conversao_C = (temperatura_F - 32) / 1.8;
  printf("A temperatura em Celsius e: %.2f", conversao_C);
  return 0;
}
