#include <stdio.h>
#include <math.h>

char letra_da_questao;

void letra_a(){
   int a,b;

   printf("Digite um valor pra A\n");
   scanf("%d", &a);
   printf("Digite um valor pra B\n");
   scanf("%d", &b);

   if(a > b){
      int c = a - b;
      printf("A e maior que que B, logo o resultado e: %d", c);
   } else {
      int c = b - a;
      printf("B e maior que que A, logo o resultado e: %d", c);
   }
}

void letra_b(){
   int n;

   printf("Digite um valor pra N\n");
   scanf("%d", &n);

   if(n != 0){
      if(n < 0){
         n = n * -1;
      }
   }

   printf("O valor de N e: %d", n);

}

void letra_c(){
	// int nota1,nota2,nota3,nota4,media;

	// printf("Digite um valor pra nota 1:\n");
	// scanf("%d", &nota1);
	// printf("Digite um valor pra nota 2:\n");
	// scanf("%d", &nota2);
	// printf("Digite um valor pra nota 3:\n");
	// scanf("%d", &nota3);
	// printf("Digite um valor pra nota 4:\n");
	// scanf("%d", &nota4);	
	// media = nota1 + nota2 + nota3 + nota4;
	// printf("A media e %d", media/4);
	// if(media/4 >= 5){
	// 	printf("\n Parabens, aprovado");
	// } else { printf("\nReprovado");}
	int vet[3];
	int media = 0;
	int x;
	
	for(x = 0; x < 4; x++){
		printf("Digite um valor para nota %d\n", x);
		scanf("%d", &vet[x]);
		media = media + vet[x];
	}

	printf("A media do aluno e: %d\n", media/4);
	if(media/4 >= 5){printf("Aprovado");} else {printf("Reprovado");}
}

void letra_d(){
	int vet[3];
	int media = 0;
	int x,ne;
	
	for(x = 0; x < 4; x++){
		printf("Digite um valor para nota %d\n", x);
		scanf("%d", &vet[x]);
		media = media + vet[x];
	}
	if(media/4 >= 7){
		printf("Aprovado com a media %d", media/4);
	} else {
		printf("Qual a 5 nota: \n");
		scanf("%d", &ne);
		media = media + ne;
		if (media/5 >= 7){
			printf("Aprovado com a media %d", media/5);
		} else {
			printf("Reprovado com a media %d", media/5);
		}
	}
}

void letra_e(){
	int a,b,c,x1,x2,delta;

	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	printf("Digite o valor de B:\n");
	scanf("%d", &b);
	printf("Digite o valor de C:\n");
	scanf("%d", &c);

	delta = pow(b,2) - 4*a*c;
	int rdelta = sqrt(delta);
	
	if(delta < 0){
		printf("Nao ha solucoes");
	} else if(delta = 0){
		x1 = (-b + rdelta)/ 2*a;
		printf("Ha apenas uma solucao e e: %d", x1);
	} else{
	x1 = (-b + rdelta)/2*a;
	x2 = (-b - rdelta)/2*a;
	printf("Ha 2 solucoes e elas sao %d e %d", x1,x2);
	}
}

void letra_f(){
	int a,b,c,cont;
	int x = 0;

	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	printf("Digite o valor de B:\n");
	scanf("%d", &b);
	printf("Digite o valor de C:\n");
	scanf("%d", &c);

	if(a > b){
		x = a;
		a = b;
		b = x;
	}  if(b > c){
		x = b;
		b = c;
		c = x;
	}  if(a > b){
		x = a;
		a = b;
		b = x;
	}
	printf("A: %d\nB: %d\nC: %d", a,b,c);
}

void letra_g(){
	int a,b,c,d;

	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	printf("Digite o valor de B:\n");
	scanf("%d", &b);
	printf("Digite o valor de C:\n");
	scanf("%d", &c);
	printf("Digite o valor de D:\n");
	scanf("%d", &d);	
//Divisibilidade por 2
	if (a % 2 == 0){
		printf("%d e divisivel por 2\n", a);
	} 	if (b % 2 == 0){
		printf("%d e divisivel por 2\n", b);
	} 	if (c % 2 == 0){
		printf("%d e divisivel por 2\n", c);
	} 	if (d % 2 == 0){
		printf("%d e divisivel por 2\n", d);
	}
//Divisibilidade por 3
	if (a % 3 == 0){
		printf("%d e divisivel por 3\n", a);
	} 	if (b % 3 == 0){
		printf("%d e divisivel por 3\n", b);
	} 	if (c % 3 == 0){
		printf("%d e divisivel por 3\n", c);
	} 	if (d % 3 == 0){
		printf("%d e divisivel por 3\n", d);
	}

}

void letra_h(){
	letra_g();
}

void letra_i(){
	int a,b,c,d,e,cont0;
	int cont1 = 0;

	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	printf("Digite o valor de B:\n");
	scanf("%d", &b);
	printf("Digite o valor de C:\n");
	scanf("%d", &c);
	printf("Digite o valor de D:\n");
	scanf("%d", &d);
	printf("Digite o valor de E:\n");
	scanf("%d", &e);

	if(a > cont1){
		cont1 = a;
	}	if(b > cont1){
		cont1 = b;
	}	if(c > cont1){
		cont1 = c;
	}	if(d > cont1){
		cont1 = d;
	}	if(e > cont1){
		cont1 = e;
	}
	if(a < cont0){
		cont0 = a;
	}	if(b < cont0){
		cont0 = b;
	}	if(c < cont0){
		cont0 = c;
	}	if(d < cont0){
		cont0 = d;
	}	if(e < cont0){
		cont0 = e;
	}

	printf("O maior e %d\n", cont1);
	printf("O menor e %d", cont0);
}

void letra_j(){
	int n;

	printf("Informe um valor para N: \n");
	scanf("%d", &n);

	if(n % 2 == 0){
		printf("%d e um valor par\n", n);
	} else {
		printf("%d e um valor impar\n", n);
	}
}

void letra_k(){
	int n;

	printf("Digite um valor\n");
	scanf("%d", &n);

	if(n<1 && n>9){
		printf("O valor esta fora da faixa permitida");
	} else {
		printf("O valor esta na faixa permitida");
	}
}

void letra_l(){
	int n;

	printf("Digite um valor\n");
	scanf("%d", &n);

	if(n >! 3){
		printf("%d",n);	
}
}

void letra_m(){
	char sexo,nome[50];

	printf("Qual seu sexo\nF:feminino\nM:masculino\n");
	scanf("%s", &sexo);

	if(sexo == 'm' || sexo == 'f'){
		printf("Qual e seu nome:");
		scanf("%s", &nome);

		if(sexo == 'm'){
			printf("Llmo Sr. %s", nome);
		} else if(sexo == 'f'){
			printf("Llma Sra. %s", nome);		
		}
	}
}

void letra_n(){
	float a,b,c;

	printf("Digite o valor de A:\n");
	scanf("%f", &a);
	printf("Digite o valor de B:\n");
	scanf("%f", &b);
	printf("Digite o valor de C:\n");
	scanf("%f", &c);

	float soma = a+b+c;

	if(soma > 100){
		printf("Valor %.2f e maior que cem", soma);
	}
}

void letra_o(){
	float n;

	printf("Digite um valor:\n");
	scanf("%f", &n);

	if( n*2 > 30){
		printf("Valor %.2f e maior que 30", n*2);
	}
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
			letra_g();
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
		
		default:
			printf("Entrada divergente da resposta esperada");
	}
		
}
