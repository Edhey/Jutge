/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 29 2023
 * @brief Programa que, dados n números naturales estrictamente positivos x1 ...
 * xn, imprima su mínimo común múltiplo mayor que cero.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P96564_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que, dados n números naturales estrictamente positivos x1 "
         "... xn, imprima su mínimo común múltiplo mayor que cero."
      << std::endl;
  std::cout << "Introduzca dos enteros positivos:" << std::endl;
}

int mcm(int numero1, int numero2) {
  int mcm{0};

}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int numero1, numero2;
  while(std::cin >> numero1 >> numero2 && numero1 != 0) {
    mcm(numero1, numero2);
  }
  return 0;
}