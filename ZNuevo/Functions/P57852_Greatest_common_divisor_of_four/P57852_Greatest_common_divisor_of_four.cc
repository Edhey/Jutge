/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 29 2023
 * @brief Programa que calcule el máximo común divisor de cuatro números
 * naturales a, b, c y d usando la versión rápida del algoritmo euclidiano.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P57852_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que calcula el máximo común divisor de cuatro números "
               "naturales a, b, c y d usando la versión rápida del algoritmo "
               "euclidiano."
            << std::endl;
  std::cout << "Introduzca cuatro números naturales:" << std::endl;
}

/**
 * @brief Función que calcula el máximo común divisor de dos números naturales a
 * y b utilizando la versión rápida del algoritmo euclidiano.
 * @param a entero del que se calcula el máximo común divisor.
 * @param b entero del que se calcula el máximo común divisor.
 * @return máximo común divisor de los dos números.
 */
int gcd(int a, int b) {
  while (b != 0) {
    int aux{b};
    b = a % b;
    a = aux;
  }
  return a;
}

/**
 * @brief calcula el máximo común divisor de cuatro números naturales a, b, c
 * y d usando la versión rápida del algoritmo euclidiano.
 * @param a número natural del que se calcula el mcd.
 * @param b número natural del que se calcula el mcd.
 * @param c número natural del que se calcula el mcd.
 * @param d número natural del que se calcula el mcd.
 * @return
 */
int gcd4(int a, int b, int c, int d) {
  int aux{gcd(a, b)}, aux2{gcd(c, d)};
  return gcd(aux, aux2);
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::cout << gcd4(66, 12, 1200, 36)<< std::endl;
  std::cout << gcd4(10, 6, 21, 35)<< std::endl;
  return 0;
}