#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& numbers) {
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
}
