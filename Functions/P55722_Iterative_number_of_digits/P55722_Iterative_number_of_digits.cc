/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 31 2023
 * @brief Programa que devuelva el número de dígitos de un número n.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P55722_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que devuelva el número de dígitos de un número n."
            << std::endl;
  std::cout << "Introduzca un numero entero:" << std::endl;
}

/**
 * @brief Función que devuelva el número de dígitos de un número n.
 * @param n número del que se cuentan los dígitos.
 * @return el número de digitos de n.
 */
int number_of_digits(int n) {
  int cantidad_de_digitos{1};
  int const kNumero10{10};
  while (n / kNumero10 != 0) {
    n /= kNumero10;
    ++cantidad_de_digitos;
  }
  return cantidad_de_digitos;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero{};
  while (std::cin >> numero) {
    std::cout << number_of_digits(numero) << std::endl;
  }
  return 0;
}