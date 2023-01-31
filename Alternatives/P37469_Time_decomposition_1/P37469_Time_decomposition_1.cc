/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Jan 30 2023
  * @brief Programa que, dado un número de segundos n, imprima el número de 
  * horas, minutos y segundos representados por n.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P37469_en
  */  
 
#include<iostream>

int main() {
  int total_segundos{}, horas{}, minutos{}, segundos{};
  const int kConversionHoras{3600}, kConversionMinutos{60}, 
  kConversionSegundos{60};
  std::cin >> total_segundos;
  horas = total_segundos / kConversionHoras;
  total_segundos = total_segundos - (kConversionHoras * horas);
  minutos = total_segundos / kConversionMinutos;
  segundos = total_segundos - (kConversionMinutos * minutos);
  std::cout << horas << " " << minutos << " " << segundos << std::endl;
}