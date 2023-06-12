/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Mar 03 2023
  * @brief Programa que, dado un número n, imprime un “triángulo de tamaño n”.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P29973_en
  */

#include <iostream>

/** @brief Función que imprime el propósito del programa
    */
void Introduccion() {
  std::cout << "Programa que, dado un número n , imprime un “triángulo de "
  << "tamaño n”." << std::endl;
  std::cout << "Escriba un número entero: " << std::endl;
}

/** @brief Función que, dado un número n , imprime un “triángulo de tamaño n” con asteriscos.
   * @param tamanyo Es el tamaño del triángulo de asteriscos.
   */
void ImprimeTriangulo(int tamanyo) {
  for (int i{0}; i < tamanyo; ++i) {
    for (int j{0}; j <= i; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int tamanyo {0};
  std::cin >> tamanyo;
  ImprimeTriangulo(tamanyo);
} 