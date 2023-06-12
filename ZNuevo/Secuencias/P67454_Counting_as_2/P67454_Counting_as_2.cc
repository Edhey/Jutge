/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 05 2023
 * @brief Programa que lee una secuencia de caracteres e imprima el número de
 * letras 'a' en la secuencia antes del primer punto.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P67454_en
 */

#include <iostream>
#include <string>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lee una secuencia de caracteres e imprima el "
               "número de letras 'a' en la secuencia antes del primer punto."
            << std::endl;
  std::cout << "Introduzca una secuencia de caracteres:" << std::endl;
}

/**
 * @brief Función que imprime la cantidad de aes que tiene una secuencia
 * acabada en punto.
 * @return Int con la cantidad de aes de la secuencia.
 */
int CantidadDeAes() {
  std::string cadena;
  int cantidad_de_aes{0};
  while (std::cin >> cadena) {
    for (const auto letra : cadena) {
      if (letra == 'a') {
        ++cantidad_de_aes;
      } else if (letra == '.') {
        return cantidad_de_aes;
      }
    }
  }
  return cantidad_de_aes;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::cout << CantidadDeAes() << std::endl;
  return 0;
}