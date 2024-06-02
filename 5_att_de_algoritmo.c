#include <stdio.h>
#include <string.h>
#include <math.h>

int letra_da_questao;

void letra_a(){
	int cont,raiz;

	for(cont=15;cont <=200; cont++){
		raiz = cont*cont;
		printf("%d^2 = %d\n", cont, raiz);
	}
}

void letra_b(){
   int x = 0;
   int n;
   printf("Digite um valor para a tabuada:\n");
   scanf("%d", &n);
      do{
         printf("%d x %d = %d\n", n,x,x*n);
         x++;
   }while(x < 11);
}

void letra_c(){
	int x,cont;
	cont = 0;
	for(x = 0; x < 101; x++){
		cont = cont + x;
	}
	printf("%d", cont);
}

void letra_d(){
	int x,cont;
	cont = 0;
	for(x=0;x<=500;x++){
		if(x%2==0){
			cont = cont + x;
		}
	}
	printf("%d", cont);
}

void letra_e(){
	int cont = 0;
	do{
		if(cont % 2 != 0 || cont == 1){
			printf("%d\n", cont);
		}
		cont++;
	}while(cont<=20);
	
}

void letra_f(){
	int cont = 1;
	do{
		if(cont % 4 == 0){
			printf("%d\n", cont);
		}
		cont++;
	}while(cont < 200);
}

void letra_g(){
	int cont,x;

	for(cont=0; cont <= 15; cont++){
		x = pow(3,cont);
		printf("3 elevado a %d = %d\n", cont, x);
	}
}

void letra_h(){
	int B, E, cont;
	int resultado = 1;

	printf("Digite valor para base\n");
	scanf("%d", &B);
	printf("Digite valor para expoente\n");
	scanf("%d", &E);

	if(B >= 0 && E >= 0){
		for(cont = 0; cont <= E; cont++){
			resultado = resultado * B;
		}
		printf("%d elevado %d e igual a %d", B, E, resultado);
	}
	else{
		printf("Digite valores positivos");
	}
}

void letra_i(){
	int x = 0;
	int anterior = 0 ,atual = 1,proximo = 0;
	do
	{
		printf("%d == %d\n",x, anterior);
		proximo = atual + anterior;
		anterior = atual;
		atual = proximo;
		x++;
	} while (x<15);
}

void letra_j(){
	int Celsius = 10, Fahrenheit, cont;

	for (cont = 0; cont < 10; cont++){
	Fahrenheit = (Celsius*1.8)+32;
	printf("C: %d  e  F:%d\n", Celsius, Fahrenheit);
	Celsius += 10;
	}	
}	

void letra_k(){
	double cont, soma=0;
	for(cont=0; cont < 64; cont++){
		soma += (pow(2,cont));
	}
	printf("%.lf", soma);
}

void letra_l(){
	double soma = 0,x,y,cont,fatorial=1;

	for(x=0; x<15; x++){
		printf("Digite o %d n:\n", x+1);
		scanf("%lf", &cont);
		for(y=1; y<=cont; y++){
			fatorial *= y;
		}
		soma += fatorial;
		fatorial = 1;
	}
	printf("O somatorio e: %lf", soma);
}

void letra_m(){
	double cont,x,soma = 0;

	for(x=0; x<10; x++){
		printf("Valor N%.lf\n", x+1);
		scanf("%lf", &cont);
		soma += cont;
	}
	printf("A somatoria e: %.2lf\n", soma);
	printf("A media e: %.2lf", soma/10);

}


void letra_n(){
	int condicional = 1,x = 1,cont=0,soma = 0;

	do{
		printf("Digte um valor para N%d\n", x);
		scanf("%d", &cont);
		if(cont>0){
		x++;
		soma += cont;
		} else { 
			condicional = 0;
			printf("O valor da soma e: %d\n", soma);
			printf("O valor da media e: %d", soma/x);
		}

		
	}while(condicional == 1);
}

void letra_o(){
	int cont,x;
	double fatorial = 1;
	for(cont=0; cont <10; cont++){
		if(cont%2!=0){
			for(x=1; x<=cont; x++){
			fatorial *= x;
		}
		printf("%d! = %.2lf\n", cont, fatorial);
		}
	} 

}

void letra_p(){
	float cont,soma=0;
	for(cont=50; cont < 70; cont++){
		soma += cont;
	}
	printf("A soma e: %.0f\nA media e: %.2f", soma, soma/20);
}

void letra_q(){
	char comodo, condicional[2];
	float largura=0, comprimento=0, area=0, areaSoma=0;
do{
	printf("Digite o nome do comodo:\n");
	scanf("%s", &comodo);
	printf("Digite o valor da largura:\n");
	scanf("%f", &largura);
	printf("Digite o valor da comprimento:\n");
	scanf("%f", &comprimento);
	area = largura * comprimento;
	areaSoma += area;
	printf("Deseja continuar\n");	
	scanf("%s", &condicional);
	system("cls");
	}while(strcmp(condicional, "sim") == 0);
	printf("A soma das areas e: %.2f", areaSoma);
}

void letra_r(){
	int cont, maior=0, menor=0;

	do{
		scanf("%d", &cont);
		if(cont > maior){
			maior = cont;
		} if( cont < menor){
			menor = cont;
		}
	}while(cont > 0);
	printf("O maior valor e: %d\nO menor valor e: %d", maior, menor);
}

void letra_s(){
	
}

void letra_t(){
	int cont;

	for(cont = 15;cont < 201;cont+=3){
		printf("%d^2 = %d\n", cont,cont*cont);
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

		default:
			printf("Entrada divergente da resposta esperada");
	}
		
}
