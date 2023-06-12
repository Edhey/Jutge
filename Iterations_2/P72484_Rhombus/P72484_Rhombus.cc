/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Mar 03 2023
  * @brief Programa que, dado un número n, imprime un rombo de tamaño n”.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P72484_en
  */

#include <iostream>

/** @brief Función que imprime el propósito del programa
    */
void Introduccion() {
  std::cout << "Programa que, dado un número n, imprime un “triángulo de "
  << "tamaño n”." << std::endl;
  std::cout << "Escriba un número entero: " << std::endl;
}

/** @brief Función que, dado un número n , imprime un rombo de tamaño n” con asteriscos.
   * @param tamanyo Es el tamaño del triángulo de asteriscos.
   */
void ImprimeRombo(int tamanyo) {
  int contador{1};
  for (int i{0}; i < 2 * tamanyo; ++i) {
    if (i % 2 == 0) {
      for (int k{tamanyo}; k > contador; --k) {
        std::cout << " ";
      }
      ++contador;
      for (int j{0}; j <= i; ++j) {
        std::cout << "*";
      }
      std::cout << std::endl;
    }
  }
  for (int i{2 * tamanyo}; i > 2; --i) {
    if (i % 2 == 0) {
      for (int k{tamanyo + 1}; k >= contador; --k) {
        std::cout << " ";
      }
      --contador;
      for (int j{i}; j > 3; --j) {
        std::cout << "*";
      }
      std::cout << std::endl;
    }
  }
}

/**
 * @brief Función main.
 */
int main() {
  // Introduccion();
  int tamanyo {0};
  std::cin >> tamanyo;
  ImprimeRombo(tamanyo);
} 