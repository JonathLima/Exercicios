#include <iostream>
#include <locale.h>

// Declaração para realizar as funções sem TOP-DOWN.
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
	float Num1, Num2;

	std::cout << "Digite o primeiro valor: ";
	std::cin >> Num1;
	std::cout << "Digite o Segundo valor: ";
	std::cin >> Num2;
	std::cout << "\n";

	std::cout << "1 - Soma" << "\n";
	std::cout << "2 - Subtração" << "\n";
	std::cout << "3 - Multiplicação" << "\n";
	std::cout << "4 - Divisão" << "\n";
	std::cout << "\n";
	std::cout << "Escolha um número para realizar a operação: ";
	std::cin >> SelectNum;
	std::cout << "\n";

	switch (SelectNum)
	{
	case 1: std::cout << "Resultado da soma: " << Soma(Num1, Num2) << "\n";
		break;
	case 2: std::cout << "Resultado da Subtração: " << Subtract(Num1, Num2) << "\n";
		break;
	case 3: std::cout << "Resultado da Multiplicação: " << Multipli(Num1, Num2) << "\n";
		break;
	case 4: std::cout << "Resultado da Divisão: " << Division(Num1, Num2) << "\n";
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