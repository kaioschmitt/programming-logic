// Pedro Queiroz - 64137
#include <stdio.h>

main(){
	int lck_valor=50, inp_valor=0;
	
	while (inp_valor != lck_valor){
		printf("Insira um valor: ");
		scanf("%d", &inp_valor);
	}
	printf("Parabens");
}
