/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 02 2023
 * @brief Programa que diga si el número entero x está presente en el vector de
 * números enteros v.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P11725_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Función que diga si el número entero x está presente en el vector de
 * números enteros v.
 * @param x número enterp a buscar.
 * @param v vector de eneteros donde se busca el entero.
 * @return
 */
bool exists(int x, const std::vector<int>& v) {
  for (auto&& elemento : v) {
    if (elemento == x)
      return true;
  }
  return false;
}

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que diga si el número entero x está presente en el "
               "vector de números enteros v."
            << std::endl;
  std::cout << "Introduzca un número entero y un vector de enteros:"
            << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  std::vector<int> vec{1, 2, 3, 4, 5};
  exists(1, vec) ? std::cout << "true" << std::endl
                 : std::cout << "false" << std::endl;
  exists(6, vec) ? std::cout << "true" << std::endl
                 : std::cout << "false" << std::endl;
  return 0;
}