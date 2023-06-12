/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 07 2023
 * @brief Programa que invierte los números que le pases.
 * @bug No hay errores conocidos
 * @see
 */

#include <iostream>

/**
 * @brief Función que invierte el número que se le pasa.
 * @param numero número a invertir.
 */
void ReverseNumber(int numero) {
  int const kNumero10{10};
  if (numero / kNumero10 == 0) {
    std::cout << numero << std::endl;
  } else {
    std::cout << numero % kNumero10;
    ReverseNumber(numero /= kNumero10);
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero;
  while (std::cin >> numero) {
    ReverseNumber(numero);
  }
  return 0;
}