/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 21 2022
  * @brief program that that reads a natural number n, and prints the result of
  * @the following sum: 1^2 + 2^2 + … + (n−1)^2 + n^2. 
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P36668_en
  */

#include <iostream>

void Preambulo() {
  std::cout << "program that that reads a natural number n, and prints the"
  << "result of the following sum: 1^2 + 2^2 + … + (n−1)^2 + n^2."; 
  std::cout <<  std::endl;
  std::cout <<  "Write a natural number:";
  std::cout << std::endl;
}

int SumOfSquares(int number) {
  int result{0};
  for(int i{0}; i <= number; i++) {
    result += i * i;
  }
  return result;
}

int main() {
  // Preambulo();
  int number{0}, result{0};
  std::cin >> number;
  std::cout << SumOfSquares(number) << std::endl;
}