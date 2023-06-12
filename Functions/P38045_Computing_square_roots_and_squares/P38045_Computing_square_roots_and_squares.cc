/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 23 2023
 * @brief Programa que lee una secuencia de números naturales e imprima el
 * cuadrado y la raíz cuadrada de cada uno.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P38045_en
 */

#include <cmath>
#include <iomanip>
#include <iostream>

/** @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lea una secuencia de números naturales e imprima "
               "el cuadrado y la raíz cuadrada de cada uno."
            << std::endl;
  std::cout << "Introduzca una secuencia de números:" << std::endl;
}

/** @brief Función que lee una secuencia de números naturales e imprima el
 *  cuadrado y la raíz cuadrada de cada uno
 *  @param double numero, es aquel número con el que se opera.
 */
void CuadradoRaiz(double numero) {
  std::cout << std::fixed << std::setprecision(0) << numero * numero << " "
            << std::setprecision(6) << sqrt(numero) << std::endl;
}

int main() {
  double numero{};
  while (std::cin >> numero) {
    CuadradoRaiz(numero);
  }
  return 0;
}