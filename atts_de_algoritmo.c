#include <stdio.h>
#include <math.h>

char letra_da_questao;

void letra_a(){
	int grau_celsius;
	int fahrenheit;
	
	printf("Qual a temperatura em grau Celsius: \n");
	scanf("%d", &grau_celsius);
	fahrenheit = grau_celsius * 9/5 + 32;
	system("cls");
	printf("A conversao de %d grau Celsius para Fahrenheit e: %d", grau_celsius, fahrenheit);
}

void letra_b(){
	int grau_fahrenheit;
	int celsius;
	
	printf("Qual a temperatura em Fahrenheit: \n");
	scanf("%d", &grau_fahrenheit);
	celsius = ((grau_fahrenheit - 32) * 5) /9;
	system("cls");
	printf("A conversao de %d Fahrenheit para grau Celsius e: %d", grau_fahrenheit, celsius);
}

void letra_c(){
	float volume,raio,altura;
	
	printf("Dite o valor do raio: \n");
	scanf("%f", &raio);
	printf("Dite o valor da altura: \n");
	scanf("%f", &altura);
	
	volume = raio * raio * altura * 3.14159;
	
	printf("O volume e: %.2f", volume);
}
 void letra_d(){
 	float tempo, velocidade, distancia, litros_usados;
 	
 	printf("Quanto tempo foi gasto de viagem:\n");
 	scanf("%f", &tempo);
 	printf("Qual foi a velocidade mmedia do percuso:\n");
 	scanf("%f", &velocidade);
 	
 	distancia = tempo * velocidade;
 	
 	litros_usados = distancia / 12;
 	
 	printf("A velocidade media foi: %.2f\nO tempo gasto da viagem foi: %.2f\nA distancia percorrida foi: %.2f\nE quantia de litros consumidos foi: %.2f", velocidade, tempo,distancia, litros_usados);
 }
 
void letra_e(){
	float valor,tempo,taxa,prestacao;
	
	printf("Digite o valor:\n");
	scanf("%f", &valor);
	printf("Digite o tempo em mes:\n");
	scanf("%f", &tempo);
	printf("Digite a taxa:\n");
	scanf("%f", &taxa);
	
	prestacao = valor + (valor*(taxa/100)* tempo);
	
	printf("A prestcao esta em: %.2f", prestacao);
}

void letra_f(){
	float a,b,c;
	
	printf("Digite um valor para A:\n");
	scanf("%f", &a);
	printf("Digite um valor para B:\n");
	scanf("%f", &b);
	
	c = b;
	b = a;
	a = c;
	
	printf("A = %.2f\nB = %2.f", a,b);
}

void letra_g(){
	float a,b,c,d;
	
	printf("Atribua um valor para A\n");
	scanf("%f", &a);
	printf("Atribua um valor para B\n");
	scanf("%f", &b);
	printf("Atribua um valor para C\n");
	scanf("%f", &c);
	printf("Atribua um valor para D\n");
	scanf("%f", &d);
	
	printf("A + B = %.2f\n", a+b);
	printf("A + C = %.2f\n", a+c);
	printf("A + D = %.2f\n", a+d);
	printf("B + C = %.2f\n", b+c);	
	printf("B + D = %.2f\n", b+d);
	printf("C + D = %.2f\n", c+d);
	printf("A * B = %.2f\n", a*b);
	printf("A * C = %.2f\n", a*c);
	printf("A * D = %.2f\n", a*d);
	printf("B * C = %.2f\n", b*c);	
	printf("B * D = %.2f\n", b*d);
	printf("C * D = %.2f\n", c*d);
}

void letra_h(){
	float volume,comprimento,largura,altura;
		
	printf("Digite o valor da altura:\n");
	scanf("%f", &altura);
	printf("Digite o valor da comprimento:\n");
	scanf("%f", &comprimento);
	printf("Digite o valor da largura:\n");
	scanf("%f", &largura);
	
	volume = largura * comprimento * altura;
	
	printf("O volme e: %.2f", volume);
}

void letra_i(){
	int a;
	
	printf("Atribua um valor para A:\n");
	scanf("%d", &a);
	printf("O valor de A ao quadrado e: %d", a*a);
}

void letra_j(){
		int a,b;
	
	printf("Atribua um valor a A\n");
	scanf("%d", &a);
	printf("Atribua um valor a B\n");
	scanf("%d", &b);
	int c = (a*a) - (2*a*b) + (b*b);
	printf("O quadrado da diferenca e: %d", c);
}

void letra_k(){
	float quantos_dolar_tenho,quantos_reais_deu,cotacao_dolar;
	
	printf("Digite a quantia de dolar que possue:\n");
	scanf("%f", &quantos_dolar_tenho);
	printf("Quanto esta a cotacao do dolar:\n");
	scanf("%f", &cotacao_dolar);
	
	quantos_reais_deu = quantos_dolar_tenho / cotacao_dolar;
	
	printf("Voce tem %.2f Reais", quantos_reais_deu);
}

void letra_l(){
	float quantos_reais_tenho,quantos_dolars_deu,cotacao_real;
	
	printf("Digite a quantia de reais que possue:\n");
	scanf("%f", &quantos_reais_tenho);
	printf("Quanto esta a cotacao do real:\n");
	scanf("%f", &cotacao_real);
	
	quantos_dolars_deu = quantos_reais_tenho / cotacao_real;
	
	printf("Voce tem %.2f Dolars", quantos_dolars_deu);
}

void letra_m(){
	int a,b,c;
	
	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	printf("Digite o valor de B:\n");
	scanf("%d", &b);
	printf("Digite o valor de C:\n");
	scanf("%d", &c);
	
	int soma_dos_quadrados = (a*a) + (b*b) + (c*c);
	
	printf("O valor da soma dos quadrados e: %d", soma_dos_quadrados);
}

void letra_o(){
	int a,b,c,d,p,s;
	
	printf("Digite o valor para A:\n");
	scanf("%d", &a);
	printf("Digite o valor para B:\n");
	scanf("%d", &b);
	printf("Digite o valor para C:\n");
	scanf("%d", &c);
	printf("Digite o valor para D:\n");
	scanf("%d", &d);
	
	p = a * c;
	s = b + d;
	
	printf("P = %d\nS = %d", p,s);
}

void letra_p(){
	float sm,pr,ns;
	
	printf("Digite o valor do salario:\n");
	scanf("%f", &sm);
	printf("Qual o valor do reajuste, em numero inteiro:\n");
	scanf("%f", &pr);
	
	ns = sm * (pr / 100);
	
	printf("O valor do novo salario e: %.2f", sm+ns);
}

void letra_q(){
	float a,r;
	
	printf("Qual o valor do raio da circunferencia:\n");
	scanf("%f", &r);
	
	a = 3.14159265 * (r*r);
	
	printf("A area da circunferencia e: %.2f", a);
	
}

void letra_r(){
	int a,b,c,votos_nulos,votos_brancos;
	
	printf("Quantos votos teve o candidato A:\n");
	scanf("%d", &a);
	printf("Quantos votos teve o candidato B:\n");
	scanf("%d", &b);
	printf("Quantos votos teve o candidato C:\n");
	scanf("%d", &c);
	printf("Quantos votos nulos teve:\n");
	scanf("%d", &votos_nulos);
	printf("Quantos votos brancos teve:\n");
	scanf("%d", &votos_brancos);
	
	int eleitores = a + b + c + votos_nulos + votos_brancos;
	
	printf("O numero de eleitores foram: %d\n", eleitores);
	printf("O percentual de votos validos foram: %d\n", (a+b+c)*100/eleitores);
	printf("O percentual de votos para o candidato A foram: %d\n", a*100/eleitores);
	printf("O percentual de votos para o candidato B foram: %d\n", b*100/eleitores);
	printf("O percentual de votos para o candidato C foram: %d\n", c*100/eleitores);
	printf("O percentual de votos nulos foram: %d\n", votos_nulos*100/eleitores);
	printf("O percentual de votos brancos foram: %d\n", votos_brancos*100/eleitores);
}

void letra_s(){
	float a,b,soma,subtracao,divisao,multiplicao;
	
	printf("Digite o valor de A:\n");
	scanf("%f", &a);
	printf("Digite o valor de B:\n");
	scanf("%f", &b);
	
	soma = a + b;
	subtracao = a - b;
	divisao = a / b;
	multiplicao = a * b;
	
	printf("Soma = %.2f\nSubtacao = %.2f\nDivisao = %.2f\nMultiplicao = %.2f", soma,subtracao,divisao,multiplicao);
	
}

void letra_t(){
	float velocidade, distancia, tempo;
	
	printf("Digite o tempo, em minutos:\n");
	scanf("%f", &tempo);
	printf("Digite o distancia, em quilometros:\n");
	scanf("%f", &distancia);
	
	velocidade = (distancia * 1000) / (tempo / 60);
	
	printf("A velocidade em metros por segundo e: %.2f", velocidade);
}

void letra_u(){
	float volume,raio;
	
	printf("Digite o valor do raio:\n");
	scanf("%f", &raio);
	
	volume = 3.14159 * (raio*raio*raio) * 4/3;
	
	printf("O volume e: %.2f", volume);
}

void letra_v(){
	int potencia,base,resultado;
	
	printf("Digite um valor para base:\n");
	scanf("%d", &base);
	printf("Digite a pontencia:\n");
	scanf("%d", &potencia);
	
	resultado = pow(base,potencia);
	printf("O resultado e: %d", resultado);
}

void letra_w(){
	float conversao,medida_em_pes;
	float pes = 0.3048;
	
	printf("Quantos pes ha:\n");
	scanf("%f", &medida_em_pes);
	
	conversao = medida_em_pes * pes;
	
	printf("Sao %.2f metros", conversao);
}

void letra_x(){
	double base,indicie,resultado;
	
	printf("Digite o valora para base:\n");
	scanf("%lf", &base);
	printf("Digite o valora para o indicie:\n");
	scanf("%lf", &indicie);
	
	resultado = pow(base,1/indicie);
	printf("O valor da raiz e: %.2f", resultado);
}

void letra_y(){
	int num;
	
	printf("Digite um valor:\n");
	scanf("%d", &num);
	
	int sucessor = num + 1;
	int antecessor = num - 1;
	
	printf("O sucessor de %d e: %d\nO antecessor de %d e: %d", num, sucessor, num, antecessor);
}

void letra_z(){
	float a,b;
	
	printf("Defina o valor de A:\n");
	scanf("%d", &a);
	printf("Defina o valor de B:\n");
	scanf("%d", &b);
	printf("O valor do quadrado da divisao de a em realacao a b e: %2.f", pow(a/b,2));
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
			letra_m();
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
			letra_u();
		break;
		
		case 'v':
			letra_v();
		break;
		
		case 'w':
			letra_w();
		break;
		
		case 'x':
			letra_x();
		break;
		
		case 'y':
			letra_y();
		break;
		
		case 'z':
			letra_z();
		break;
		
		default:
			printf("Entrada divergente da resposta esperada");
	}
		
}
