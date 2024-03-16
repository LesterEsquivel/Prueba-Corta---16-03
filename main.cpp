#include <iostream>
#include <vector>
#include <algorithm>
/*void bubbleSort(std::vector<int>& numbers) {
    int n = numbers.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // intercambiar los elementos
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::vector<int> numbers;
    int num;
    std::cout << "Ingrese numeros enteros (escriba 0 para detener): " << std::endl;
    while (true) {
        std::cin >> num;
        if (num == 0) {
            break;
        }
        numbers.push_back(num);
    }
    bubbleSort(numbers);
    std::cout << "Lista ordenada de numeros enteros: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}*/
/* Ejercicio 2
  /* Hennrry Geovanny Canahui Gomez # 0909-23-258
  */
/*int main() {
    int lista[5] = {1, 2, 3, 4, 5};

    int busqueda, resulado;
    std::cout << "Digite un numero para buscarlo: ";
    std::cin >> busqueda;
    for (int i = 1; i <= busqueda; i++) {
        resulado = lista[i];
        if (busqueda == resulado) {
            std::cout << "El numero ingresado si esta en la lista!" << std::endl;
            break;
        } else if ((sizeof(lista) / sizeof(int)) == resulado) {
            std::cout << "El numero ingresado no esta resgistrado" << std::endl;
            break;
        }
    }
}*/
int main() {
    int n;
    std::cout << "Ingrese el numero de elementos: ";
    std::cin >> n;

    std::vector<int> numeros(n);
    std::cout << "Ingrese los numeros:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> numeros[i];
    }

    // Ordenamos el vector y eliminamos los elementos duplicados
    std::sort(numeros.begin(), numeros.end());
    numeros.erase(std::unique(numeros.begin(), numeros.end()), numeros.end());

    std::cout << "Los numeros sin duplicados son:\n";
    for (int num : numeros) {
        std::cout << num << ' ';
    }
    std::cout << '\n';

    return 0;
}