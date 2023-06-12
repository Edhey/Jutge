/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 07 2023
 * @brief Programa que lee números romanos e imprima sus valores.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P29253_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lee números romanos e imprima sus valores."
            << std::endl;
  std::cout << "Introduzca tantos números romanos como quiera terminados en '.'"
            << std::endl;
}

/**
 * @brief Programa que, pasado un número romano imprime su valor.
 * @param numero_romano es el número romano a imprimir como entero.
 */
void RomanToInteger(std::string numero_romano) {
  std::vector<char> romanos{'M', 'D', 'C', 'L', 'X', 'V', 'I'};
  std::vector<int> valor_entero{1000, 500, 100, 50, 10, 5, 1};
  int valor{0}, iterador{0};
  while (numero_romano[iterador] != '.') {
    int valor_siguiente{}, valor_actual{};
    for (int i{0}; i < romanos.size(); ++i) {
      if (romanos[i] == numero_romano[iterador + 1]) {
        valor_siguiente = valor_entero[i];
      }
      if (romanos[i] == numero_romano[iterador]) {
        valor_actual = valor_entero[i];
      }
    }
    if (valor_actual < valor_siguiente) {
      valor += valor_siguiente - valor_actual;
      ++iterador;
    } else {
      valor += valor_actual;
    }
    ++iterador;
  }
  std::cout << numero_romano.erase(numero_romano.size() - 1) << " = " << valor
            << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::string numero_romano{};
  while (std::cin >> numero_romano) {
    RomanToInteger(numero_romano);
  }
  return 0;
}