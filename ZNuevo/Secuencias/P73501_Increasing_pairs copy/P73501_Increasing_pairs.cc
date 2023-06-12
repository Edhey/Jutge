/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 31 2023
 * @brief Programa que lee secuencias de números naturales, y que para cada uno
 * imprime el número de pares de números consecutivos tales que el segundo
 * número del par sea mayor que el primero.
 * @bug No hay errores conocidos
 * @see
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "lee secuencias de números naturales, y que para cada uno "
               "imprime el número de pares de números consecutivos tales que "
               "el segundo número del par sea mayor que el primero."
            << std::endl;
  std::cout << "Introduzca un número natural n, seguido de n secuencias de "
               "números naturales estrictamente positivos:"
            << std::endl;
}

/**
 * @brief Función que lee secuencias de números naturales, y que para cada uno
 * imprime el número de pares de números consecutivos tales que el segundo
 * número del par sea mayor que el primero (la secuencia acaba con un 0).
 * @param numero_de_secuencias Es la cantidad de secuencias a leer.
 */
void IncreasingPairs(int numero_de_secuencias) {
  int numero_anterior{0}, numero_actual{0};
  for (int i{0}; i < numero_de_secuencias; ++i) {
    int numero_de_pares_crecientes{0};
    std::cin >> numero_anterior;
    if (numero_anterior == 0) {
    } else {
      do {
        std::cin >> numero_actual;
        if (numero_actual > numero_anterior) {
          ++numero_de_pares_crecientes;
        }
        numero_anterior = numero_actual;
      } while (numero_actual != 0);
    }
    std::cout << numero_de_pares_crecientes << std::endl;
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero_secuencias;
  while (std::cin >> numero_secuencias) {
    IncreasingPairs(numero_secuencias);
  }
  return 0;
}