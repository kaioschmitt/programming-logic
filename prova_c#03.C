// Pedro Queiroz - 64137
#include <stdio.h>

main(){
	int loop=1, choice=0;
	float flamengo=0, botafogo=0, pct, qtd_md_vf=0;
	
	while (loop <= 300){
		printf(" 1 - Flamengo\n 2 - Vasco\n 3 - Botafogo\n 4 - Fluminense\nEscolha um time: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
				flamengo++;
				break;
			case 2:
				qtd_md_vf++;
				break;
			case 3:
				botafogo++;
				break;
			case 4:
				qtd_md_vf++;
				break;
			default:
				printf("Opcao invalida.\n");
				loop--;
				break;
		}
		loop++;
	}
	
	pct= botafogo/300;
	printf("a - porcentagens de votos para Botafogo: %1.f%%\n", pct*100);
	printf("b - quantidade de torcedores do Flamengo: %1.f\n", flamengo);
	printf("c - media de votos entre Vasco e Fluminense: %1.f\n", qtd_md_vf/2); //eh neh (??)
}
