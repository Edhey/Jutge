/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 02 2023
 * @brief Programa que lea palabras y las imprima en orden inverso, invirtiendo
 * también el orden de los caracteres de cada palabra.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P99133_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lea palabras y las imprima en orden inverso, "
               "invirtiendo también el orden de los caracteres de cada palabra."
            << std::endl;
  std::cout << "Introduzca una palabra:" << std::endl;
}

/**
 * @brief Función que lee palabras y las imprime en orden inverso, invirtiendo
 * también el orden de los caracteres de cada palabra.
 * @param numero_de_palabras es la cantidad de palabras a leer.
 */
void ReverseStringInverse(int numero_de_palabras) {
  std::string palabra, palabras_inversas;
  for (int j{0}; j < numero_de_palabras; ++j) {
    std::cin >> palabra;
    for (int i{0}; i < palabra.length(); ++i) {
      palabras_inversas += palabra[i];
    }
    palabras_inversas += '\n';
  }
  for (int i{palabras_inversas.length() - 1}; i >= 0; --i) {
    std::cout << palabras_inversas[i];
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero_de_palabras{};
  while (std::cin >> numero_de_palabras) {
    ReverseStringInverse(numero_de_palabras);
    std::cout << std::endl;
  }

  return 0;
}