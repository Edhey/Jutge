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

/**
 * @brief Función que calcula el máximo común divisor de dos números naturales a
 * y b utilizando la versión rápida del algoritmo euclidiano.
 * @param a entero del que se calcula el máximo común divisor.
 * @param b entero del que se calcula el máximo común divisor.
 * @return máximo común divisor de los dos números.
 */
int MCD(int a, int b) {
  while (b != 0) {
    int aux{b};
    b = a % b;
    a = aux;
  }
  return a;
}

/**
 * @brief Función que devuelve el mínimo común múltiplo de dos números pasados
 * como parámetros. Siguiendo la igualdad matemática:
 * MCD(a, b) * mcm(a, b) = a * b.
 * @param numero1 número del que se obtiene el mínimo común múltiplo.
 * @param numero2 número del que se obtiene el mínimo común múltiplo.
 * @return el mínimo común múltiplo de los dos números.
 */
int mcm(int numero1, int numero2) {
  // mcm(a, b) = (a * b) / MCD(a, b)
  return (numero1 * numero2 / MCD(numero1, numero2));
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int numero1, numero2;
  while (std::cin >> numero1 >> numero2 && numero1 != 0) {
    std::cout << mcm(numero1, numero2) << std::endl;
  }
  return 0;
}