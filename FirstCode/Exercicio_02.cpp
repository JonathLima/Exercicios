#include <iostream>
#include <locale.h>

// Declaração para realizar as funções sem TOP-DOWN.
void Menu();
void SelectOption(int Num);
float Soma(float Num1, float Num2);
float Subtract(float Num1, float Num2);
float Multipli(float Num1, float Num2);
float Division(float Num1, float Num2);



int main()
{
	Menu();
	system("Pause");
	return 0;
}

// Menu para realizar a operação.
void Menu()
{
	setlocale(LC_ALL, "");

	int SelectNum;

	std::cout << "1 - Soma" << "\n";
	std::cout << "2 - Subtração" << "\n";
	std::cout << "3 - Multiplicação" << "\n";
	std::cout << "4 - Divisão" << "\n";
	std::cout << "\n";
	std::cout << "Escolha um número para realizar a operação: ";
	std::cin >> SelectNum;
	std::cout << "\n";

	SelectOption(SelectNum);

}

//Selecionar Opção para realizar a operação
void SelectOption(int Num)
{
	float N1, N2;

	std::cout << "Digite o primeiro valor: ";
	std::cin >> N1;
	std::cout << "Digite o Segundo valor: ";
	std::cin >> N2;
	std::cout << "\n";

	switch (Num)
	{
	case 1: std::cout << "Resultado da soma: " << Soma(N1, N2) << "\n";
		break;
	case 2: std::cout << "Resultado da Subtração: " << Subtract(N1, N2) << "\n";
		break;
	case 3: std::cout << "Resultado da Multiplicação: " << Multipli(N1, N2) << "\n";
		break;
	case 4: std::cout << "Resultado da Divisão: " << Division(N1, N2) << "\n";
	default: std::cout << "Valor Invalido!" << "\n";
		break;
	}
}

//Funções das operações.
float Soma(float Num1, float Num2)
{
	return Num1 + Num2;
}
float Subtract(float Num1, float Num2)
{
	return Num1 - Num2;
}
float Multipli(float Num1, float Num2)
{
	return Num1 * Num2;
}
float Division(float Num1, float Num2)
{
	return Num1 / Num2;
}