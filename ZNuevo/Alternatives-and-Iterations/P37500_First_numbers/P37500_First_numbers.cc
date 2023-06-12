/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Jan 31 2023
  * @brief Programa que lee un número n e imprime todos los números entre 0 y n.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P36668_en
  */

#include <iostream>

int main() {
  int numero{}, numero_variable{};
  std::cin >> numero;
  while (numero >= numero_variable) {
    std::cout << numero_variable << std::endl;
    ++numero_variable;
  }
}