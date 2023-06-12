/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 31 2023
 * @brief Programa que diga si el número natural n es un número palindrómico o
 * no
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P77686_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que diga si el número natural n es un número "
               "palindrómico o no."
            << std::endl;
  std::cout << "Introduzca un número entero:" << std::endl;
}

/**
 * @brief Función que diga si el número natural n es un número palindrómico o
 * no.
 * @param n número del que se revisa si es palindromo o no.
 * @return true si es palindromo.
 *         false si no lo es.
 */
bool is_palindromic(int n) {
  int reverse{0}, numero{n};
  int const kNumero10{10};
  while (numero / kNumero10 != 0) {
    reverse += numero % kNumero10;
    reverse *= kNumero10;
    numero /= kNumero10;
  }
  reverse += numero % kNumero10;
  if (reverse == n)
    return true;
  else
    return false;
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int numero{};
  while (std::cin >> numero) {
    if (is_palindromic(numero)) {
      std::cout << "true" << std::endl;
    } else
      std::cout << "false" << std::endl;
  }
  return 0;
}