/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 06 2023
 * @brief Programa que dada una secuencia de palabras, imprime la longitud de la
 * subsecuencia consecutiva más larga que solo contiene la primera palabra. Es
 * decir, si la secuencia es s 1 , …, s n , imprime max{j - i + 1 : 1 ≤ i ≤ j ≤
 * n^si = si + 1  = ... = s(j−1) = sj = s1}.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P23001_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que dada una secuencia de palabras, imprime la longitud de "
         "la subsecuencia consecutiva más larga que solo contiene la primera "
         "palabra. Es decir, si la secuencia es s 1 , …, s n , imprime max{j - "
         "i + 1 : 1 ≤ i ≤ j ≤ n ∧ si = si + 1  = ... = s(j−1) = sj = s1}."
      << std::endl;
  std::cout << "La entrada consiste en una secuencia no vacía de palabras."
            << std::endl;
}

/**
 * @brief Función que dada una secuencia de palabras, imprime la longitud de la
 * subsecuencia consecutiva más larga que solo contiene la primera palabra. Es
 * decir, si la secuencia es s 1 , …, s n , imprime max{j - i + 1 : 1 ≤ i ≤ j ≤
 * n^si = si + 1  = ... = s(j−1) = sj = s1}.
 * @return devuelve el número de
 */

/**
 * @brief Función que dada una palabra, lee una secuencia de palabras
 * imprimiendo la longitud de la subsecuencia consecutiva más larga que solo
 * contiene la palabra pasasda como parámetro.
 * @param primera_palabra Es la palabra que debe tener la subsecuencia
 * consecutiva.
 * @return devuelve la cantidad de palabras de la subsecuencia consecutiva.
 */
int ConsecutiveRepeatedWords(std::string primera_palabra) {
  std::string palabra{};
  int contador{1}, contador_total{1};
  while (std::cin >> palabra) {
    if (palabra == primera_palabra)
      ++contador;
    else if (palabra != primera_palabra)
      contador = 0;
    if (contador > contador_total)
      contador_total = contador;
  }
  return contador_total;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::string primera_palabra{};
  std::cin >> primera_palabra;
  std::cout << ConsecutiveRepeatedWords(primera_palabra) << std::endl;
  return 0;
}