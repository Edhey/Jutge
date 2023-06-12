/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 01 2023
 * @brief Programa que lee un número racional dado en la forma "numerador" /
 * "denominador", y almacenar estos dos valores en num y den, respectivamente.
 * Además, debe eliminar todos los factores comunes de num y den. Por ejemplo,
 * si la entrada tiene 66/12 los valores después de la llamada deben ser num =
 * 11 y den = 2.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P59652_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lee un número racional dado en la forma numerador "
               "/ denominador, y almacenar estos dos valores en num y den, "
               "respectivamente. Además, debe eliminar todos los factores "
               "comunes de num y den. Por ejemplo, si la entrada tiene 66/12 "
               "los valores después de la llamada deben ser num = 11 y den = 2."
            << std::endl;
  std::cout
      << "Introduzca un numerador y denominador separados por el carácter /:"
      << std::endl;
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
 * @brief Programa que lee un número racional dado en la forma "numerador" /
 * "denominador", y almacenar estos dos valores en num y den, respectivamente.
 * Además, debe eliminar todos los factores comunes de num y den. Por ejemplo,
 * si la entrada tiene 66/12 los valores después de la llamada deben ser num =
 * 11 y den = 2.
 * @param num es el numerador del racional.
 * @param den es el denominador del racional.
 */
void read_rational(int& num, int& den) {
  std::string racional;
  std::cin >> racional;
  num = 0;
  den = 0;
  for (int i{0}; i < racional.find('/') - 1; ++i) {
    num += racional[i] - '0';
    num *= 10;
  }
  num += racional[racional.find('/') - 1] - '0';
  for (int i{racional.find('/') + 1}; i < racional.length() - 1; ++i) {
    den += racional[i] - '0';
    den *= 10;
  }
  den += racional[racional.length() - 1] - '0';
  int const mcd{gcd(num, den)};
  num /= mcd;
  den /= mcd;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numerador{0}, denominador{0};
  read_rational(numerador, denominador);
  std::cout << numerador << std::endl;
  std::cout << denominador << std::endl;
  return 0;
}