#include <iostream>

double obtenerDouble()
{
    std::cout << "Escribe un valor double: ";
    double x{};
    std::cin >> x;
    return x;
}

char obtenerOperador()
{
    std::cout << "Escribe uno de los siguientes operadores: +, -, *, ó /: ";
    char op{};
    std::cin >> op;
    return op;
}

void imprimirResult(double x, char operacion, double y)
{
    switch (operacion)
    {
    case '+':
        std::cout << x << " + " << y << " is " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " is " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " is " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " is " << x / y << '\n';
        break;
    }
}

int main()
{
    double x{ obtenerDouble() };
    char operacion{ obtenerOperador() };
    double y{ obtenerDouble() };

    imprimirResult(x, operacion, y);

    return 0;
}
















/*#include <iostream>
int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	std::cout << "escribe un número: ";
	int x{}; 
	std::cin >> x;
	std::cout << "El número que has escrito es: " << x << '\n';
	std::cout << "Escribe otro número: ";
	std::cin >> x;
	std::cout << "El número que has escrito es: " << x << '\n';
	std::cin >> x;
	std::cout << "El número que has escrito es: " << x << '\n';

}*/

