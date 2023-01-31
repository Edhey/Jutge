/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P78142_Average.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Oct 31 2022
  * @brief programa que lee una secuencia de números e imprime su promedio 
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P78142_en
  */

#include <iostream>
#include <iomanip>

int main() {
  //std::cout << "Este programa lee una secuencia de números e imprime su";
  //std::cout << " promedio" << std::endl;
  //std::cout << "Escriba una secuencia de números" << std::endl;
  double numero{0}, numero_total{0};
  int sumatorio{0};
  while (std::cin >> numero) {
    ++ sumatorio;
    numero_total += numero;
  }
  std::cout << std::fixed << std::setprecision(2)
<< (numero_total) / sumatorio << std::endl;
}