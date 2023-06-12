/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 07 2023
 * @brief Programa que realiza el sumatorio de un número natural dado.
 * @bug No hay errores conocidos
 * @see
 */

#include <iostream>

/**
 * @brief Función que devuelve el sumatorio de 1 a n para el n pasado como
 * parámetro haciendo uso de la ecuación de recurrencia de Gauss.
 * @param numero número del que se obtiene el sumatorio.
 * @return sumatorio de 1 a n para el n pasado como parámetro.
 */
int Sumatorio(int numero) { return ((numero * (numero + 1)) / 2); }

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero{};
  while (std::cin >> numero) {
    std::cout << Sumatorio(numero) << std::endl;
  }

  return 0;
}