/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 14 2022
  * @brief program that reads a number x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P96767_en
  * @see https://docs.google.com/document/d/1zBTdDkKYBwTROBoiUzLbguM9JKpmFFv1Se0DryhHPCo/edit?skip_itp2_check=true
  */  

#include <iostream>
#include <math.h>
#include <iomanip>

int main() {
  // std::cout << "Este programa lee un numero 'x' y un polinomio "
  // << "p() creando p(x)." << std::endl;
  double variable_x{0}, polinomio{0}, resultado{0}, exponente{0};
  std::cin >> variable_x;
  while (std::cin >> polinomio) {
    resultado += polinomio * pow(variable_x, exponente);
    ++exponente;
  }
  std::cout << std::fixed << std::setprecision(4) << resultado
  << std::endl;
  return 0;
}