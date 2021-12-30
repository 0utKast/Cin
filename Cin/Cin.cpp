#include <iostream>
#include <limits> // para std::numeric_limits

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double obtenerDouble()
{
    std::cout << "Escribe un valor double: ";
    double x{};
    std::cin >> x;
    ignoreLine();
    return x;
}

char obtenerOperador()
{
    while (true) // Loop hasta que el usuario escriba una entrada válida
    {
        std::cout << "Escribe uno de los siguientes operadores: +, -, *, or /: ";
        char operacion{};
        std::cin >> operacion;

        // Comprobar si el usuario escribió una entrada válida
        switch (operacion)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return operacion; // se devuelve esto al llamador
        default: // en otro caso se le dice al usuario que hay un error
            std::cerr << "Error, esta entrada es inválida. Por favor, inténtelo de nuevo.\n";
        }
    } // e intenta de nuevo.
}

void imprimirResult(double x, char operacion, double y)
{
    switch (operacion)
    {
    case '+':
        std::cout << x << " + " << y << " son " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " son " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " son " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " son " << x / y << '\n';
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
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

