// Pedro Queiroz - 64137
#include <stdio.h>

main(){
	int number=0, qtd_number=0, average=0, loop=1;
	
	while (loop <= 50){
		printf("Insira um valor: ");
		scanf("%d", &number);
		if (number >= 10 && number <= 150){
			qtd_number++;
			average = average + number;
		}
		loop++;
	}
	printf("A media dos valores existentes entre 10 e 150 e: %d", average/qtd_number);
}
