/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Jan 28 2023
  * @brief Programa que calcule el producto de dos números naturales dados
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P31761_en
  */

#include <iostream>

int main() {
unsigned long long numero1{}, numero2{};
std::cin >> numero1 >> numero2;
unsigned long long producto{numero1 * numero2};
std::cout << producto << std::endl; 
}