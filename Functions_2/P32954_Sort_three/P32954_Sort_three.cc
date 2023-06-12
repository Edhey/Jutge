/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 01 2023
 * @brief Programa para ordenar a, b y c en orden no decreciente. Por ejemplo,
 * si se llama con a = 7, b = −3 y c = 1, los valores después de la llamada
 * deben ser a = −3, b = 1 y c = 7.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P32954_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que ordena a, b y c en orden no decreciente. Por "
               "ejemplo, si se llama con a =7, b = -3 y c = 1, los valores "
               "después de la llamada deben ser a = -3, b = 1 y c = 7."
            << std::endl;
  std::cout << "Introduzca tres numeros enteros: " << std::endl;
}

/**
 * @brief Función que devuelve el máximo de dos números enteros.
 * @param a número que se compara.
 * @param b número que se compara.
 * @return número entero.
 */
int max2(int a, int b) { return a < b ? b : a; }

/**
 * @brief Función que devuelve el mínimo de dos números enteros.
 * @param a número que se compara.
 * @param b número que se compara.
 * @return número entero menor.
 */
int min2(int a, int b) { return a < b ? a : b; }

/**
 * @brief Función que ordena a, b y c en orden no decreciente. Por ejemplo, si
 * se llama con a = 7, b = −3 y c = 1, los valores después de la llamada deben
 * ser a = −3, b = 1 y c = 7.
 * @param a número a ordenar.
 * @param b número a ordenar.
 * @param c número a ordenar.
 */
void sort3(int& a, int& b, int& c) {
  int min{min2(a, b)}, max{max2(a, b)};
  max = max2(c, max);
  min = min2(min, c);
  if ((c != max) && (c != min)) {
    b = c;
  } else if ((a != max) && (a != min)) {
    b = a;
  }
  if (a == c) {
    b = a;
  }
  a = min;
  c = max;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int num1{-2}, num2{32}, num3{-2};
  sort3(num1, num2, num3);
  std::cout << num1 << std::endl;
  std::cout << num2 << std::endl;
  std::cout << num3 << std::endl;
  return 0;
}