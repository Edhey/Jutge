/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 03 2023
 * @brief Programa que lee una sucesión de números naturales y que imprima, para
 * cada uno, cuántas veces aparece.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P63414_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lee una sucesión de números naturales y que "
               "imprima, para cada uno, cuántas veces aparece."
            << std::endl;
  std::cout << "Introduzca la cantidad de números y acontinuación esos números:"
            << std::endl;
}

/**
 * @brief Programa que lee una sucesión de números naturales y que imprima, para
 * cada uno, cuántas veces aparece.
 * @param cantidad_de_numeros es la cantidad de números de la secuencia.
 */
void CountingFrequences(int cantidad_de_numeros) {
  int numero{};
  std::vector<int> vector;
  for (int i{0}; i < cantidad_de_numeros; ++i) {
    std::cin >> numero;
    vector.push_back(numero);
  }
  while (!vector.empty()) {
    int  menor{vector[0]}, contador_apariciones{0};
    for (auto &&elemento : vector) {
      if (elemento < menor)
        menor = elemento;
    }
    for (int i{0}; i < vector.size(); ++i) {
      if (vector[i] == menor) {
        ++contador_apariciones;
        vector.erase(vector.begin() + i);
        --i;
      }
    }
    std::cout << menor << " : " << contador_apariciones << std::endl;
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int cantidad_de_numeros{0};
  std::cin >> cantidad_de_numeros;
  CountingFrequences(cantidad_de_numeros);
  return 0;
}