/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 05 2023
 * @brief Programa que lea una secuencia de letras que termine con un punto y
 * diga si contiene la sucesión de letras consecutivas 'h', 'e', ​​'l',
 * 'l', 'o' o no.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P87523_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lea una secuencia de letras que termine con un "
               "punto y diga si contiene la sucesión de letras consecutivas "
               "'h', 'e', 'l', 'l', 'o' o no."
            << std::endl;
  std::cout << "Introduzca una secuencia de letras que termine con un punto:"
            << std::endl;
}

void HelloBye() {
  std::string secuencia{};
  bool hello{false};
  while (std::cin >> secuencia) {
    for (int i{0}; i < secuencia.size(); ++i) {
      if (secuencia[i] == 'h' && secuencia[i + 1] == 'e' && secuencia[i + 2] == 'l' &&
          secuencia[i + 3] == 'l' && secuencia[i + 4] == 'o') {
            std::cout << "hello" << std::endl;
            return;
      } else if (secuencia[i] == '.') {
        std::cout << "bye" << std::endl;
        return;
      }
    }
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  HelloBye();
  return 0;
}