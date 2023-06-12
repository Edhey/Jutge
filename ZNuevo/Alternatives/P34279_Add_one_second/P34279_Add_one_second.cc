/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P34279-Add-one-second.cc
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Nov 06 2022
 * @brief programa que añade un segundo a una hora del reloj
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P34279_en
 * @see
 * https://github.com/IB-2022-2023/P06-alternatives-itderations/blob/main/alternatives-and-iterations.md
 */

#include <iostream>

int main() {
  // std::cout << "Este programa añade un segundo a una hora del reloj";
  // std::cout << std::endl << "Escriba una hora: " << std::endl;
  int horas, minutos, segundos, total_segundos{0};
  std::cin >> horas >> minutos >> segundos;
  segundos += 1;
  total_segundos = horas * 3600 + minutos * 60 + segundos;
  horas = (total_segundos / 3600) % 24;
  minutos = (total_segundos % 3600) / 60;
  segundos = ((total_segundos % 3600) % 60);
  std::cout.fill('0');
  std::cout.width(2);
  std::cout << horas << ":";
  std::cout.fill('0');
  std::cout.width(2);
  std::cout << minutos << ":";
  std::cout.fill('0');
  std::cout.width(2);
  std::cout << segundos << std::endl;
}