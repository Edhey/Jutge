/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P57548_Sum_of_two_integer_numbers.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Jan 27 2023
  * @brief programa que lee tres números e imprime su suma 
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P57548_en
  */

#include <iostream>

int main() {
  int suma{0};
  for(int i{0}; i < 3; ++i) {
    int numero{0};
    std::cin >> numero;
    suma += numero;
  }
  std::cout << suma << '\n';
  return 0;
}
