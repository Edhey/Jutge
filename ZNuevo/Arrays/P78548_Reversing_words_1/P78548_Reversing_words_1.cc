/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 02 2023
 * @brief Programa que lea palabras e imprima cada una invirtiendo el orden de
 * sus caracteres.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P78548_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lea palabras e imprima cada una invirtiendo el "
               "orden de sus caracteres."
            << std::endl;
  std::cout << "Introduzca una palabra:" << std::endl;
}

/**
 * @brief Función que lee palabras e imprima cada una invirtiendo el orden de
 * sus caracteres.
 * @param palabra es la string a invertir.
 */
void ReverseString(std::string palabra) {
  for (int i{palabra.length() - 1}; i >= 0; --i) {
    std::cout << palabra[i];
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::string palabra;
  while (std::cin >> palabra) {
    ReverseString(palabra);
    std::cout << std::endl;
  }

  return 0;
}