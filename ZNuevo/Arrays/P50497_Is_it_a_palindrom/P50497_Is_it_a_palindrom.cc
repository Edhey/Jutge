/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 03 2023
 * @brief Programa que escribe una función que diga si s es un palíndromo o no.
 * Recuerda que una palabra es un palíndromo si se lee igual de izquierda a
 * derecha que de derecha a izquierda. En este ejercicio, s puede ser bastante
 * grande, por eso se pasa por referencia.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P50497_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que escribe una función que diga si s es un palíndromo o "
         "no. Recuerda que una palabra es un palíndromo si se lee igual de "
         "izquierda a derecha que de derecha a izquierda. En este ejercicio, s "
         "puede ser bastante grande, por eso se pasa por referencia."
      << std::endl;
  std::cout << "Introduzca una palabra:" << std::endl;
}

/**
 * @brief Función que diga si s es un palíndromo o no. Recuerda que una palabra
 * es un palíndromo si se lee igual de izquierda a derecha que de derecha a
 * izquierda. En este ejercicio, s puede ser bastante grande, por eso se pasa
 * por referencia.
 * @param s palabra a comprobar.
 * @return true si es palindromo.
 *         false si no lo es.
 */
bool is_palindrome(const std::string& s) {
  size_t principio{0}, final{s.size() - 1};
  while (principio < final) {
    if (s[principio] != s[final])
      return false;
    ++principio;
    --final;
  }
  return true;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::string palabra;
  while (std::cin >> palabra) {
    is_palindrome(palabra) ? std::cout << "true" : std::cout << "false";
    std::cout << std::endl;
  }
  return 0;
}