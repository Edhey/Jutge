/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file problema.cc
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Nov 06 2022
 * @brief programa que lee una letra e imprime su minúscula en el caso de que
 * sea mayúscula y viceversa
 * @bug No hay errores conocidos
 * @see (enlace)
 */
#include <iostream>

int main() {
  // std::cout << "Este programa que lee una letra e imprime su minúscula en
  // el"; std::cout << " caso de que sea mayúscula y viceversa";
  char letra;
  // std::cout << "Escriba una letra: ";
  std::cin >> letra;
  if (static_cast<int>(letra) > 96) {
    std::cout << static_cast<char>(letra - 32) << std::endl;
  } else {
    std::cout << static_cast<char>(letra + 32) << std::endl;
  }
}