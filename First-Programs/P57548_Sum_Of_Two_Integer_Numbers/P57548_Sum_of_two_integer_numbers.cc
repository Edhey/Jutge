/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P57548_Sum_of_two_integer_numbers.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Oct 31 2022
  * @brief programa que lee dos números e imprime su suma 
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P57548_en
  */

#include<iostream>

int main() {
  //std::cout << "Este programa solicita dos números enteros e imprime su "
  //std::cout << "suma" << std::endl;
  //std::cout << "Escriba dos números enteros" << std::endl;
  int numero1 , numero2;
  std::cin >> numero1 >> numero2;
  std::cout << numero1 + numero2 << std::endl;
}