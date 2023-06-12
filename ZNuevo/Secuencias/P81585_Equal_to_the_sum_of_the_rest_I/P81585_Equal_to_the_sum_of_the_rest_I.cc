/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 06 2023
 * @brief Programa que, dada una secuencia de números naturales, dice si existe
 * algún número igual a la suma de los demás.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P81585_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que, dada una secuencia de números naturales, dice si "
               "existe algún número igual a la suma de los demás. "
            << std::endl;
  std::cout << "La entrada contiene varios casos. Cada caso comienza con un "
               "número n≥1 seguido de n números naturales."
            << std::endl;
}

/**
 * @brief Función que, lee una secuencia de números enteros y dice si existe
 * algún número igual a la suma de los demás.
 */
bool EqualToTheSumOfTheRest(int numeros_secuencia) {
  std::vector<int> secuencia(numeros_secuencia);
  int numero{0};
  int total{0};
  for (int i{0}; i < numeros_secuencia; ++i) {
    std::cin >> numero;
    secuencia[i] = numero;
    total += numero;
  }
  for (auto &&elemento : secuencia) {
    if (elemento == total - elemento) {
      return true;
    }
  }
  return false;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numeros_secuencia{};
  while (std::cin >> numeros_secuencia) {
    EqualToTheSumOfTheRest(numeros_secuencia) ? std::cout << "YES"
                                              : std::cout << "NO";
    std::cout << std::endl;
  }
  return 0;
}