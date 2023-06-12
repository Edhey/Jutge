/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 01 2023
 * @brief Programa que imprime una línea con s espacios seguidos de n caracteres
 * c.  Por ejemplo, estas tres llamadas:
 *     print (0, 'X', 3);
 *     print (1, 'y', 4);
 *     print (2, 'A', 2);
 * produce esta salida:
 *
 * XXX
 *  aaaa
 *   AA
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P99541_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que imprime una línea con s espacios seguidos de n "
               "caracteres c."
            << std::endl;
  std::cout << "Introduzca un entero, un caracter y otro entero:" << std::endl;
}

/**
 * @brief Programa que imprime una línea con s espacios seguidos de n caracteres
 * c.
 * @param s número de espacios.
 * @param c caracter a imprimir.
 * @param n número de caracteres.
 */
void print(int s, char c, int n) {
  for (int i{0}; i < s; ++i) {
    std::cout << " ";
  }
  for (int i{0}; i < n; ++i) {
    std::cout << c;
  }
  std::cout << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  print(0, 'X', 3);
  print(1, 'y', 4);
  print(2, 'A', 2);
  return 0;
}