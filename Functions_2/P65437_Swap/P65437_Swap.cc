/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date 31 05 2023
 * @brief Programa que intercambia el valor de sus parámetros.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P65437_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que intercambia el valor de sus parámetros."
            << std::endl;
  std::cout << "Introduzca dos números enteros:" << std::endl;
}

/**
 * @brief Función que intercambia el valor de sus parámetros.
 * @param a número a intercambiar.
 * @param b número a intercambiar.
 */
void swap2(int& a, int& b) {
  int aux{a};
  a = b;
  b = aux;
}

#include <iostream>

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int numero1{14}, numero2{4};
  swap2(numero1, numero2);
  std::cout << numero1 << std::endl;
  std::cout << numero2 << std::endl;
  return 0;
}