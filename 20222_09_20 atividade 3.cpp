#include <stdio.h>



int   main(void){
	
	float num1,num2,num3,num4,num5,maior,menor;
	int rodadas;
	
	rodadas = 0;
	
	while(rodadas < 4){
		
		switch(rodadas){
		
		
		case0:
			printf("Digite o valor do primeiro numero \n");
			scanf("%f",&num1);
			
			rodadas = rodadas +1;
			break;
		case1:	
			printf("Digite o valor do segundo numero: \n");
			scanf("%f",&num2);
			
			rodadas = rodadas +1;
			break;
		case2:
			printf("Digite o valor do terceiro numero \n");
			scanf("%f",&num3);
			
			rodadas = rodadas + 1;
			break;
		case3:
			printf("Digite o valor do quarto numero \n");
			scanf("%f",&num4);
			
			rodadas = rodadas +1;
			break;
		case4:
			printf("Digite o valor do quinto numero \n");
			scanf("%f",&num5);
			
			rodadas = rodadas +1;
			break;	
		}
					
	}
	
	
	if((num1 > num2) && (num1 > num3)){ /// quando n1 e o maior numero
		if((num1 > num4) && (num1 > num5)){
			
			maior = num1;
			
		}	
	}
	

	if((num2 > num1) && (num2 > num3)){//   quando n2 e o maior numero
		if((num2 > num4) && (num2 > num5)){
			
			maior = num2;
			
		}	
	}
	
	if((num3 > num1) && (num3 > num2)){//   quando n3 e o maior numero
		if((num3 > num4) && (num3 > num5)){
			
			maior = num3;
			
		}	
	}
	
	if((num4 > num1) && (num4 > num2)){//   quando n4 e o maior numero
		if((num4 > num3) && (num4 > num5)){
			
			maior = num4;
			
		}	
	}
	
	if((num5 > num1) && (num5 > num2)){//    quando n5 e o maior numero
		if((num5 > num3) && (num5 > num4)){
			
			maior = num5;
			
		}	
	}
	
	if((num1 < num2) && (num1 < num3)){ /// quando n1 e o menor numero
		if((num1 < num4) && (num1 < num5)){
			
			menor = num1;
			
		}	
	}
	
	if((num2 < num1) && (num2 < num3)){//   quando n2 e o menor numero
		if((num2 < num4) && (num2 < num5)){
			
			menor = num2;
			
		}	
	}
	
	if((num3 < num1) && (num3 < num2)){//   quando n3 e o menor numero
		if((num3 < num4) && (num3 < num5)){
			
			menor = num3;
			
		}	
	}
	
	if((num4 < num1) && (num4 < num2)){//   quando n4 e o menor numero
		if((num4 < num3) && (num4 < num5)){
			
			menor = num4;
			
		}	
	}
	
	if((num5 < num1) && (num5 < num2)){//    quando n5 e o menor numero
		if((num5 < num3) && (num5 < num4)){
			
			menor = num5;
			
		}	
	}
	
	printf("O maior numero digitado foi:  %2.2f  \n",maior);
	
	printf("O menor numero digitado foi:  %2.2f  \n",menor);
	
	
	
	 
}
