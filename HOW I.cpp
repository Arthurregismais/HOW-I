// HOW I.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <iostream>
#include <iomanip>
#include <sstream>


using namespace std;

int main() {

	bool executar = true; //enquanto esta variável for true, o programa continuara sendo executado 
	int repetir; //variável que vai armazenar se o usuário quer ou não realizar mais uma operação
	int opcao; //variável que vai armazenar qual a conversão que o usuário quer fazer
	int valor; //variável que vai armazenar os números
	while (executar == true) {
		std::cout << ("-----------------------------\n");
		std::cout << "Conversor de bases numericas!\n";
		std::cout << ("-----------------------------\n");
		std::cout << "1 - Decimal para hexadecimal\n";
		std::cout << "2 - Hexadecimal para decimal\n";
		std::cout << ("-----------------------------\n");
		scanf_s("%d", &opcao); //pega a conversão desejada pelo usuário


		if (opcao == 1) {
			printf("informe o valor em decimal\n"); //pede o valor
			scanf_s("%d", &valor); //pega o número em decimal
			printf("%d Em hexadecimal eh: %x\n", valor, valor); //faz a conversão e mostra na tela
			printf("Deseja fazer mais uma operacao?\n");
			std::cout << ("1 - Se deseja repetir\n");
			std::cout << ("2 - Se nao deseja\n");
			std::cin >> repetir; // pega se o usuário quer repetir a operação
			if (repetir == 2) {
				executar = false; //finaliza o programa encerrando o loop
				exit(0);
			}

		}

		else if (opcao == 2) {
			printf("Informe o valor em hexadecimal\n"); //pede o valor
			scanf_s("%x", &valor); //pega o número em hexadecimal
			printf("%x Em decimal eh: %d\n", valor, valor); //faz a conversão e mostra na tela
			printf("Deseja fazer mais uma operacao?\n");
			std::cout << ("1 - Se deseja repetir\n");
			std::cout << ("2 - Se nao deseja\n");
			std::cin >> repetir; // pega se o usuário quer repetir a operação
			if (repetir == 2) {
				executar = false; //finaliza o programa encerrando o loop
				exit(0);
			}

		}
		else {
			printf("Por favor digite uma opcao valida"); //reclama se o usuário não inseriu uma opção válida
			printf("\n");
			
		}
		
	}

}
	

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

