#include <iostream>
#include <locale.h>

// Declara��o para realizar as fun��es sem TOP-DOWN.
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

// Menu para realizar a opera��o.
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
	std::cout << "2 - Subtra��o" << "\n";
	std::cout << "3 - Multiplica��o" << "\n";
	std::cout << "4 - Divis�o" << "\n";
	std::cout << "\n";
	std::cout << "Escolha um n�mero para realizar a opera��o: ";
	std::cin >> SelectNum;
	std::cout << "\n";

	switch (SelectNum)
	{
	case 1: std::cout << "Resultado da soma: " << Soma(Num1, Num2) << "\n";
		break;
	case 2: std::cout << "Resultado da Subtra��o: " << Subtract(Num1, Num2) << "\n";
		break;
	case 3: std::cout << "Resultado da Multiplica��o: " << Multipli(Num1, Num2) << "\n";
		break;
	case 4: std::cout << "Resultado da Divis�o: " << Division(Num1, Num2) << "\n";
	default: std::cout << "Valor Invalido!" << "\n";
		break;
	}

}

//Fun��es das opera��es.
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