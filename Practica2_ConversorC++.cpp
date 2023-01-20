
#include <iostream>
using namespace std;
int main()
{
    int x;
    std::cout << "Bienvenido al menu principal." << endl;
    std::cout << "1. Convertidor de Moneda mexicana." << endl;
    std::cout << "2. Convertidor de kilometros." << endl;
    std::cout << "3. Convertidor de kilogramos." << endl;
    std::cout << "Ingresa el numero para el convertidor al que deseas acceder: " << endl;
    std::cin >> x;
    switch (x)
    {
    case 1:

        //Convertidor de moneda mexicana a 5 diferentes
        float mx;
        int m;
        std::cout << "Ingresa 1 para convertir a Euro, 2 para convertir a Florín Húngaro, 3 para convertir a Franco Suizo, 4 para convertir a Libra o 5 para convertir en Yen: ";
        std::cin >> m;
        std::cout << "Ingresa la cantidad de pesos mexicanos a convertir: ";
        std::cin >> mx;
        switch (m)
        {
        case 1:
            std::cout << "Pesos mexicanos a Euro " << mx * 0.049442;
            break;
        case 2:
            std::cout << "Pesos mexicanos a Florín Húngaro: " << mx * 19.396;
            break;
        case 3:
            std::cout << "Pesos mexicanos a Franco Suizo: " << mx * 0.04890;
            break;
        case 4:
            std::cout << "Pesos mexicanos a Libra: " << mx * 0.04327;
            break;
        case 5:
            std::cout << "Pesos mexicanos a Yen: " << mx * 6.78;
            break;
        default:
            std::cout << "La operación no es valida.";
            break;
        }
        break;
    case 2:
        
        //Convertidor de Km a in, ft, cm, nm, ly.
        float km;
        int l;
        std::cout << "Ingresa 1 para convertir a pulgadas, 2 para convertir a pies, 3 para convertir a centimetros, 4 para convertir a nanometro o 5 para convertir en años luz: ";
        std::cin >> l;
        std::cout << "Ingresa los kilometros a convertir: ";
        std::cin >> km;
        switch (l)
        {
        case 1:
            std::cout << "Kilometros a pulgadas: " << km * 39370.1;
            break;
        case 2:
            std::cout << "Kilometros a pies: " << km * 3280.84;
            break;
        case 3:
            std::cout << "Kilometros a centimetros: " << km * 100000;
            break;
        case 4:
            std::cout << "Kilometros a nanometros: " << km * 1e+12;
            break;
        case 5:
            std::cout << "Kilometros a años luz: " << km * 1.056970721911e-13;
            break;
        default:
            std::cout << "La operación no es valida.";
            break;
        }
        break;
    case 3:
        
        //Convertidor de Kgs a Ton, oz, lb, µg, Tg
        float kg;
        int k;
        std::cout << "Ingresa 1 para convertir a toneladas, 2 para convertir a onzas, 3 para convertir a libras, 4 para convertir a microgramo o 5 para convertir en teragramo: ";
        std::cin >> k;
        std::cout << "Ingresa los kilogramos a convertir: ";
        std::cin >> kg;
        switch (k)
        {
        case 1:
            std::cout << "Kilogramo a toneladas: " << kg * 0.001;
            break;
        case 2:
            std::cout << "Kilogramo a onzas: " << kg * 35.274;
            break;
        case 3:
            std::cout << "Kilogramo a libras: " << kg * 2.20462;
            break;
        case 4:
            std::cout << "Kilogramo a microgramo: " << kg * 1e+9;
            break;
        case 5:
            std::cout << "Kilogramo a telagramo: " << kg * 1e-9;
            break;
        default:
            std::cout << "La operación no es valida.";
            break;
        }
        break;
    default:
        std::cout << "La operación no es valida.";
        break;
    }
}
