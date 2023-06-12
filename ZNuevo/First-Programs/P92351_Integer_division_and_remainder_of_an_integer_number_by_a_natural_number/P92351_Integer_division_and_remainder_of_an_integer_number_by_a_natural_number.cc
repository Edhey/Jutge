/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P57548_Sum_of_two_integer_numbers.cc
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jan 27 2023
 * @brief Programa que lee un número entero a y un número natural b, siendo
 * b > 0, e imprime la división entera d y el resto r de a dividido por b.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P57548_en
 */

#include <iostream>

int main() {
  int dividendo{0}, divisor{0}, division_entera{0};
  // std::cout << "Escriba un dividendo y un divisor:\n";
  std::cin >> dividendo >> divisor;
  while (divisor <= 0) {
    std::cout << "Error. El divisor debe ser un numero natural, tal que numero "
              << "> 0\n";
    std::cin >> divisor;
  }
  if (dividendo % divisor < 0) {
    division_entera = (dividendo / divisor) - 1;
  } else {
    division_entera = dividendo / divisor;
  }
  // std::cout << "El resultado de la división entera entre " << dividendo << "
  // / "
  // << divisor << " es ";
  std::cout << division_entera << " ";
  // std::cout << '\n' << "Su resto es ";
  // std::cout << dividendo % divisor << std::endl;
  int resto{dividendo - (divisor * division_entera)};
  std::cout << resto << '\n';
}