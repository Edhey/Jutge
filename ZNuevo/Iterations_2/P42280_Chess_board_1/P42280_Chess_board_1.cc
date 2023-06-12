/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 28 2023
 * @brief Programa que, dado un tablero de ajedrez, calcule el número total de
 * monedas que hay en él. Se considera un tablero de ajedrez con r filas y c
 * columnas, donde cada cuadrado contiene entre 0 y 9 monedas.
 * @bug No hay errores conocidos
 * @seehttps: //jutge.org/problems/P42280_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que, dado un tablero de ajedrez, calcule el número "
               "total de monedas que hay en él. Se considera un tablero de "
               "ajedrez con r filas y c * columnas, donde cada cuadrado "
               "contiene entre 0 y 9 monedas."
            << std::endl;
  std::cout << "Introduzca el número de filas, columnas y el tablero separados:"
            << std::endl;
}

/**
 * @brief Función que dado un tablero de ajedrez dado calcule el número total de
 * monedas que hay en él.
 * @return devuelve la canritidad total de monedas.
 */
int CountChessMoney() {
  std::string monedas_str;
  char monedas_char;
  int total_monedas{0}, monedas_num, filas, columnas;
  std::cin >> filas >> columnas;
  for (int i{0}; i < filas; ++i) {
    std::cin >> monedas_str;
    for (int j{0}; j < columnas; ++j) {
      monedas_char = monedas_str.back();
      monedas_str.pop_back();
      monedas_num = monedas_char - '0';
      total_monedas += monedas_num;
    }
  }
  return total_monedas;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::cout << CountChessMoney() << std::endl;
  return 0;
}