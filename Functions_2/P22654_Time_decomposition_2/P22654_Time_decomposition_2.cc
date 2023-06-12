/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date XXX XX 2023
 * @brief Programa que, dada una cantidad de segundos n, calcula cuántas horas
 * h, minutos m y segundos s representa. Es decir, debemos tener s + 60 m +
 * 3600 h = n , con 0 ≤ s < 60 y 0 ≤ m < 60.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P22654_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que, dada una cantidad de segundos n, calcula cuántas "
               "horas h, minutos m y segundos s representa. Es decir, debemos "
               "tener s + 60 m + 3600 h = n , con 0 ≤ s < 60 y 0 ≤ m < 60."
            << std::endl;
  std::cout << "Introduzca una cantidad de segundos:" << std::endl;
}

/**
 * @brief Función que, dada una cantidad de segundos n, calcula cuántas horas h, minutos m y segundos s representa. Es decir, debemos tener s + 60 m + 3600 h = n, con 0≤ s < 60 y 0 ≤ m < 60.
 * @param n numero de segundos.
 * @param h variable donde se guradan las horas finales.
 * @param m variable donde se guradan los minutos finales.
 * @param s variable donde se guradan los segundos finales.
 */
void decompose(int n, int& h, int& m, int& s) {
  int const kNumero3600{3600}, kNumero60{60};
  h = n / kNumero3600;
  n -= h * kNumero3600;
  m = n / kNumero60;
  s = n - (m * kNumero60);
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int horas{}, minutos{}, segundos{};
  decompose(147, horas, minutos, segundos);
  std::cout << horas << std::endl;
  std::cout << minutos << std::endl;
  std::cout << segundos << std::endl << std::endl;
  decompose(100000, horas, minutos, segundos);
  std::cout << horas << std::endl;
  std::cout << minutos << std::endl;
  std::cout << segundos << std::endl << std::endl;
  decompose(3600, horas, minutos, segundos);
  std::cout << horas << std::endl;
  std::cout << minutos << std::endl;
  std::cout << segundos << std::endl;
  return 0;
}