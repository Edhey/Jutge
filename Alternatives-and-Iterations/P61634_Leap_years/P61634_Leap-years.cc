/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  * 
  * @file leap_year.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 13 2022
  * @brief programa que indica si un año es bisiesto.
  * @bug No hay errores conocidos
  * @see https://github.com/IB-2022-2023/P07-iterations/blob/main/iterations.md
  */  

#include <iostream>

int MultipleOf4(int numero) {
  int const kMultiplo_4 = 4;
  if(numero % kMultiplo_4 == 0) {
  return 0;
  }
  else {
  return 1;
  }
}

int MultipleOf100(int numero) {
  int const kMultiplo_100 = 100;
  if(numero % kMultiplo_100 == 0) {
  return 0;
  }
  else {
  return 1;
  }
}

int FirstDigits(int numero) {
  int const kMultiplo_100 = 100;
  int division = numero / kMultiplo_100;
  return division;
  }

bool IsLeapYear(const int year) {
  if((MultipleOf4(year) == 0) and (MultipleOf100(year) != 0)) {
    return 1;
  }
  else if(MultipleOf4(year) == 0 and MultipleOf100(year) == 0 and
MultipleOf4(FirstDigits(year)) == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

int main() {
  int year;
  std::cin >> year;
  if(IsLeapYear(year) == 0) {
    std::cout << "NO" << std::endl;
  }
  else {
    std::cout << "YES" << std::endl;
  }
}
