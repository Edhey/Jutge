/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 06 2023
 * @brief Programa que lee varios números e imprima su número romano
 * equivalente.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P18298_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lee varios números e imprima su número romano "
               "equivalente."
            << std::endl;
  std::cout
      << "La entrada consta de varios números naturales entre 1 y 3999. (Los "
         "romanos no conocían el cero, y el sistema descrito anteriormente no "
         "puede representar números mayores o iguales a 4000)."
      << std::endl;
}

/**
 * @brief Función que dado un número imprime su número romano equivalente.
 * @param numero número a imprimir en romano.
 */
void RomanNumber(int numero) {
  std::cout << numero << " = ";
  std::vector<int> division{1000, 500, 100, 50, 10, 5, 1};
  std::vector<char> romanos{'M', 'D', 'C', 'L', 'X', 'V', 'I'};
  int iterador{0};
  while (numero != 0) {
    if (iterador % 2 == 0) {
      if (numero / division[iterador] == 0 &&
          numero / (division[iterador] - division[iterador + 2]) != 0) {
        std::cout << romanos[iterador + 2] << romanos[iterador];
        numero -= (division[iterador] - division[iterador + 2]);
      }
    } else if (iterador % 2 != 0) {
      if (numero / division[iterador] == 0 &&
          numero / (division[iterador] - division[iterador + 1]) != 0) {
        std::cout << romanos[iterador + 1] << romanos[iterador];
        numero -= (division[iterador] - division[iterador + 1]);
      }
    }
    if (numero / division[iterador] != 0) {
      std::cout << romanos[iterador];
      numero -= division[iterador];
    } else {
      ++iterador;
    }
  }
  std::cout << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero{};
  while (std::cin >> numero) {
    RomanNumber(numero);
  }
  return 0;
}