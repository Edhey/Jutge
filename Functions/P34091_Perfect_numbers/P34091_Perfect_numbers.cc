/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 31 2023
 * @brief Programa que diga si un n natural es perfecto.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P34091_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que dice si un n natural es perfecto." << std::endl;
  std::cout << "Introduzca un número natural:" << std::endl;
}

/**
 * @brief Función que comprueba si un número es perfecto o no.
 * @param n número a comprobar.
 * @return true si es perfecto.
 *         false si no lo es.
 */
bool is_perfect(int n) {
  int suma_de_divisores{0};
  if (n == 0)
    return false;
  for (int i{1}; i <= (n / 2); ++i) {
    if (n % i == 0)
      suma_de_divisores += i;
  }
  if (suma_de_divisores == n)
    return true;
  else
    return false;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero;
  while (std::cin >> numero) {
    if (is_perfect(numero))
      std::cout << "true" << std::endl;
    else
      std::cout << "fasle" << std::endl;
  }
  return 0;
}