#include <stdio.h>
#include <string.h>
#include <math.h>

int letra_da_questao;

void letra_a(){
   int cont;
   char nomes[10][100];

	for(cont = 0; cont < 10; cont++){
		printf("%d - ", cont+1);
		scanf("%s", &nomes[cont]);
	}

	for(int cont=0; cont <10; cont++){
		printf("%s\n", nomes[cont]);
	}
}

void letra_b(){
	int vetorA[7], vetorB[7];

	for(int x = 0; x < 8; x++){
		printf("Vetor[%d] =", x);
		scanf("%d", &vetorA[x]);
	}

	system("cls");

	for(int x = 0; x < 8; x++){
		vetorB[x] = vetorA[x] * 3;
		printf("VetorB[%d] = %d\n", x, vetorB[x]);
	}

}

void letra_c(){
	int vetorA[19], vetorB[19], vetorC[19];

	for(int x = 0; x < 20; x++){
		printf("VetorA[%d] =", x);
		scanf("%d", &vetorA[x]);
	}
	for(int x = 0; x < 20; x++){
		printf("VetorB[%d] =", x);
		scanf("%d", &vetorB[x]);
	}

	for(int x = 0; x < 20; x++){
		vetorC[x] = vetorA[x] - vetorB[x];
		printf("VetorC[%d] = %d\n", x, vetorC[x]);
	}
}

void letra_d(){
	int vetorA[14], vetorB[14];

	for(int x = 0; x < 15; x++){
		printf("VetorA[%d] =", x);
		scanf("%d", &vetorA[x]);
	}

	for(int x = 0; x < 15; x++){
		vetorB[x] = vetorA[x]*vetorA[x];
		printf("VetorA[%d] = %d | VetorB[%d] = %d\n", x,vetorA[x],x,vetorB[x]);
	}
}

void letra_e(){
	int vetorA[14], vetorB[14];

	for(int x = 0; x < 15; x++){
		printf("VetorA[%d] =", x);
		scanf("%d", &vetorA[x]);
		vetorB[x] = 1;
		for(int y = 0; y < vetorA[x]; y++){
			vetorB[x] *= vetorA[x] - y;
		}
		if(vetorB[x] == 1){
			break;
		}
		printf("VetorB[%d] = %d\n", x, vetorB[x]); 
	}
}

void letra_f(){
	int vetorA[14], vetorB[14], vetorC[29];

	for(int x = 0; x < 15; x++){
		printf("VetorA[%d] =", x);
		scanf("%d", &vetorA[x]);
		vetorC[x] = vetorA[x];
	}
	for(int x = 0; x < 15; x++){
		printf("VetorB[%d] =", x);
		scanf("%d", &vetorB[x]);
		vetorC[x+15] = vetorB[x];
	}
	for(int x = 0; x < 30; x++){
		printf("VetorC[%d] = %d\n", x, vetorC[x]);
	}
}

void letra_g(){
	char vetorA[19][100], vetorB[29][100], vetorC[49];

	for(int x = 0; x < 20; x++){
		printf("VetorA[%d] = \n", x);
		scanf("%s", &vetorA[x]);
		vetorC[x] = vetorA[x];
	}
	for(int x = 0; x < 30; x++){
		printf("VetorB[%d] = \n", x);
		scanf("%s", &vetorB[x]);
		vetorC[x+20] = vetorB[x];
	}
	for(int x = 0; x < 50; x++){
		printf("VetorC[%d] = %d\n", x, vetorC[x]);
	}
}

void letra_h(){
	float vetorA[19], vetorB[19];

	for(int x = 0; x < 20; x++){
		printf("VetorA[%d] = \n", x);
		scanf("%f", &vetorA[x]);
	}
	for(int x = 20; x > 0; x--){
		vetorB[x] = vetorA[20-x];
	}
	for(int x = 0; x < 20; x++){
		printf("VetorB[%d] = %.2f\n", x, vetorB[x]);
	}
}

void letra_i(){
	float vetorA[4], vetorB[4], vetorC[4], vetorD[14];

	for(int x = 0; x < 5; x++){
		printf("VetorA[%d] = \n", x);
		scanf("%f", &vetorA[x]);
		vetorD[x] = vetorA[x];
	}
	for(int x = 0; x < 5; x++){
		printf("VetorB[%d] = \n", x);
		scanf("%f", &vetorB[x]);
		vetorD[x+5] = vetorB[x];
	}
	for(int x = 0; x < 5; x++){
		printf("VetorC[%d] = \n", x);
		scanf("%f", &vetorC[x]);
		vetorD[x+10] = vetorC[x];
	}
	for(int x = 0; x < 15; x++){
		printf("VetorD[%d] = %.2f\n", x, vetorD[x]);
	}
}

void letra_j(){
	int vetorA[19], vetorB[19];

	for(int x = 0; x < 20; x++){
		printf("Vetor[%d] = \n", x);
		scanf("%d", &vetorA[x]);
		vetorB[x] = 0;
			for(int y = 0; y <= vetorA[x]; y++){
				vetorB[x] += y;
	}
	}

	for(int x = 0; x < 20; x++){
		printf("VetorB[%d] = %d\n", x, vetorB[x]);
	}
}

void letra_k(){
	int vetorA[9], vetorB[9];

	for(int x = 0; x < 10; x++){
		printf("Vetor[%d] = ", x);
		scanf("%d", &vetorA[x]);
		if(vetorA[x] <= 0){
			break;
			}
				vetorB[x] = vetorA[x] * -1;
	}

	for(int x = 0; x < 10; x++){
		printf("VetorB[%d] = %d\n", x, vetorB[x]);
	}
}

void letra_l(){
	float vetorA[9], vetorB[9];

	for(int x = 0; x < 10; x++){
		printf("Vetor[%d] = ", x);
		scanf("%f", &vetorA[x]);
		vetorB[x] = vetorA[x]/2;
	}
	for(int x = 0; x < 10; x++){
		printf("VetorA[%.f] = %.2f    |  VetorB[%.f] = %.2f\n", x, vetorA[x],x,vetorB[x]);
	}
}

void letra_m(){
	int vetorA[9], cont;
	
	printf("Digite um N:");
	scanf("%d", &cont);
	for(int x = 0; x < 10; x++){
		vetorA[x] = (x+1)*cont;
	}

	for(int x = 0; x < 10; x++){
		printf("Vetor[%d] = %d\n", x+1, vetorA[x]);
	}
}

void letra_n(){
	float vetorA[19], total = 0, menor, maior;

	for(int x = 0; x < 20; x++){
		printf("VetorA[%d] = ", x);
		scanf("%f", &vetorA[x]);
		total += vetorA[x];
	}
	menor = vetorA[0];
	for(int x = 0; x < 20; x++){
		if(menor > vetorA[x]){
			menor = vetorA[x];
		} if(maior < vetorA[x]) {
			maior = vetorA[x];
		}
	}

	printf("Maior = %.2f\nMenor = %.2f\nMedia = %.2f", maior, menor, total/20);
}

void letra_o(){
	float vetorA[24], vetorB[24];

	for(int x = 0; x < 25; x++){
		printf("VetorA[%d] = ", x);
		scanf("%f", &vetorA[x]);
	}

	for(int x = 0; x < 25; x++){
		vetorB[x] = (vetorA[x] * 1.8)+32;
		printf("VetorA[%d] = %.2f     ||   VetorB[%d] = %.2f\n", x,vetorA[x],x,vetorB[x]);
	}
}

void letra_p(){
	int vetorA[11], vetorB[11];

	for(int x = 0; x < 12; x++){
		printf("VetorA[%d] = ", x);
		scanf("%d", &vetorA[x]);
	}
	for(int x = 0; x < 12; x++){
		if(vetorA[x] & 1 == 1){
			vetorB[x] = vetorA[x] * 2;
		} else {
			vetorB[x] = vetorA[x];
		}
		printf("VetorB[%d] = %df\n", x, vetorB[x]);
	}
}

void letra_q(){
	float vetorA[14], vetorB[14];

	for(int x = 0; x < 15; x++){
		printf("VetorA[%d] = ", x);
		scanf("%.2f", &vetorA[x]);
	}
	for(int x = 0; x < 15; x++){
		if(x & 1 == 0){
			vetorB[x] = vetorA[x] / 2;
		} else {
			vetorB[x] = vetorA[x] * 1.5;
		}
		printf("VetorB[%d] = %.2f\n", x, vetorB[x]);
	}
}

void letra_r(){
#define TAMANHO_MATRIZ 6

	int matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ], matrizC[TAMANHO_MATRIZ], matrizD[TAMANHO_MATRIZ];
    int countMatrizC, countMatrizD = 0;

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);
    }

    printf("Digite os elementos da matriz B: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizB[i]);
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++){
        if(i % 2 != 0){
            matrizC[countMatrizC] = matrizA[i];
            countMatrizC++;
        } else {
            matrizD[countMatrizD] = matrizA[i];
            countMatrizD++;
        }
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++){
        if(i % 2 != 0){
            matrizC[countMatrizC] = matrizB[i];
            countMatrizC++;
        } else {
            matrizD[countMatrizD] = matrizB[i];
            countMatrizD++;
        }
    }

    printf("Elementos da matriz C: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %d \n", i + 1, matrizC[i]);
    }

    printf("Elementos da matriz D: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %d \n", i + 1, matrizD[i]);
    }

}

void letra_s(){
	int  cont, x, vetorA[5], vetorB[5], vetorC[11]; 

	x = 0;
	while(x < 6){
		scanf("%d", &cont);
		if(cont & 1 == 1){
			vetorA[x] = cont;
			x++;
		} else {
			printf("Esse numero nao e impar");
		}
	}
	x = 0;
	while(x < 6){
		scanf("%d", &cont);
		if(cont % 2 == 0){
			vetorB[x] = cont;
			x++;
		} else {
			printf("Esse numero nao e par");
		}
	}

	for(int x = 0; x < 11; x++){
		if(x < 6){
			vetorC[x] = vetorA[x];
		} else {
			vetorC[x] = vetorB[x-6];
		}
	}

	for(int x = 0; x < 11; x++){
		printf("VetorC[%d] = %d\n", x, vetorC[x]);
	}
}

void letra_t(){
	int  cont, x, vetorA[11], vetorB[11], vetorC[23]; 

	x = 0;
	while(x < 12){
		printf("VetorA[%d] = ",x);
		scanf("%d", &cont);
		if(cont % 2 == 0 && cont % 3 == 0){
			vetorA[x] = cont;
			x++;
		} else {
			printf("Esse numero nao e divisivel por 2 e 3");
		}
	}
	x = 0;
	while(x < 12){
		printf("VetorB[%d] = ",x);
		scanf("%d", &cont);
		if(cont % 5 == 0){
			vetorB[x] = cont;
			x++;
		} else {
			printf("Esse numero nao e divisivel por 5");
		}
	}

	for(int x = 0; x < 24; x++){
		if(x < 12){
			vetorC[x] = vetorA[x];
		} else {
			vetorC[x] = vetorB[x-12];
		}
	}

	for(int x = 0; x < 24; x++){
		printf("VetorC[%d] = %d\n", x, vetorC[x]);
	}
}

void letra_u(){

#define TAMANHO_MATRIZ 12


int matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ], matrizC[TAMANHO_MATRIZ * 2];

    printf("Digite os elementos da matriz A (apenas numeros divisiveis por 2 ou 3): \n");
    for(int i=0; i<TAMANHO_MATRIZ;){
        int valor;
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &valor);

        if(valor % 2 == 0 || valor % 3 == 0){
            matrizA[i] = valor;
            i++;
        } else {
            printf("Digite um numero valido! \n"); 
        }

    }

    printf("Digite os elementos da matriz B (apenas numeros não multiplos de 5): \n");
    for(int i=0; i<TAMANHO_MATRIZ;){
        int valor;
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &valor);

        if(valor % 5 != 0){
            matrizB[i] = valor;
            i++;
        } else {
            printf("Digite um numero valido! \n"); 
        }
    }

   for (int i = 0; i < TAMANHO_MATRIZ; i++){
        matrizC[i] = matrizA[i];
    }
    for (int i = 1; i <= TAMANHO_MATRIZ; i++){
        matrizC[(TAMANHO_MATRIZ - 1) + i] = matrizB[i - 1];
    }

    printf("Elementos da matriz C: \n");
    for(int i=0; i< TAMANHO_MATRIZ * 2; i++){
        printf("Elemento %d: Valor: %d \n", i + 1, matrizC[i]);
    }

}

void letra_v(){
#define TAMANHO_MATRIZ 30

    int matrizA[TAMANHO_MATRIZ];
    int totalPares = 0;
    int totalImpares = 0;

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);
        matrizA[i] % 2 == 0 ? totalPares++ : totalImpares++;
    }

    printf("Total elementos pares: %d \n", totalPares);
    printf("Total elementos impares: %d \n", totalImpares);

}

void letra_w(){
#define TAMANHO_MATRIZ 10

    int matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ], matrizC[TAMANHO_MATRIZ];

    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);
    }

    printf("Digite os elementos da matriz B: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizB[i]);
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        int soma = matrizA[i] + matrizB[i];
        matrizC[i] = soma * soma;
    }

    printf("Elementos da matriz C: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %f \n", i + 1, matrizC[i]);
    }
}

void letra_x(){
#define TAMANHO_MATRIZ 6

    float matrizA[TAMANHO_MATRIZ], matrizB[TAMANHO_MATRIZ];
    
    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%f", &matrizA[i]);
    }

    for(int i=0; i<TAMANHO_MATRIZ; i++){
        matrizB[i] = i % 2 == 0 ? matrizA[i + 1] : matrizA[i - 1];
    }

    printf("Elementos da matriz A: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %f \n", i + 1, matrizA[i]);
    }

    printf("Elementos da matriz B: \n");
    for(int i=0; i< TAMANHO_MATRIZ; i++){
        printf("Elemento %d: Valor: %f \n", i + 1, matrizB[i]);
    }
}

void letra_y(){
#define TAMANHO_MATRIZ 15

    int matrizA[TAMANHO_MATRIZ];
    int totalPares = 0;
    
    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);

         if (matrizA[i] % 2 == 0) {
            totalPares++;
        }
    }

    printf("elementos pares: %d \n", totalPares);

}

void letra_z(){
#define TAMANHO_MATRIZ 10

	 int matrizA[TAMANHO_MATRIZ];
    int totalImpares = 0;
    float percentualImapares = 0;
 
    printf("Digite os elementos da matriz A: \n");
    for(int i=0; i<TAMANHO_MATRIZ; i++){
        printf("Elemento %d: \n", i + 1);
        scanf("%d", &matrizA[i]);

         if (matrizA[i] % 2 != 0) {
            totalImpares++;
        }
    }

    percentualImapares = (totalImpares / (float)TAMANHO_MATRIZ) * 100;

    printf("elementos impares: %d \n", totalImpares);
    printf("Percentual: %.2f \n", percentualImapares);

}


int main(){
	
	printf("Digite a letra da questao: \n"); 
	scanf("%c", &letra_da_questao);
	system("cls"); 
	
	switch(letra_da_questao){
		case 'a':
			letra_a();
		break;
		
		case 'b':
			letra_b();
		break;
		
		case 'c':
			letra_c();
		break;
		
		case 'd':
			letra_d();
		break;
		
		case 'e':
			letra_e();
		break;
		
		case 'f':
			letra_f();
		break;
	
		case 'g':
			letra_g();
		break;
		
		case 'h':
			letra_h();
		break;
		
		case 'i':
			letra_i();
		break;
		
		case 'j':
			letra_j();
		break;
		
		case 'k':
			letra_k();
		break;
		
		case 'l':
			letra_l();
		break;
		
		case 'm':
			letra_m();
		break;
		
		case 'n':
			letra_n();
		break;
		
		case 'o':
			letra_o();
		break;
		
		case 'p':
			letra_p();
		break;
		
		case 'q':
			letra_q();
		break;
		
		case 'r':
			letra_r();
		break;
		
		case 's':
			letra_s();
		break;
		
		case 't':
			letra_t();
		break;

      case 'u':
			letra_t();
		break;
      
      case 'v':
			letra_t();
		break;

      case 'w':
			letra_t();
		break;

      case 'x':
			letra_t();
		break;

      case 'z':
			letra_t();
		break;
		default:
			printf("Entrada divergente da resposta esperada");
	}
		
}
