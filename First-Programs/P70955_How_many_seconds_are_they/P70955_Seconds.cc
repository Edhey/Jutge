/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Jan 27 2023
  * @brief Programa que convierte a segundos a una cantidad determinada de 
  * años, días, horas, minutos y segundos.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P70955_en
  */

#include<iostream>

int main() {
  int anyo{}, dias{}, horas{}, minutos{}, segundos{};
  std::cin >> anyo >> dias >> horas >> minutos >> segundos;
  int const kConversorAnyos{31536000}, kConversorDias{86400}, kConversorHoras{3600},
  kConversorMinutos{60};
  std::cout << (anyo * kConversorAnyos) + (dias * kConversorDias) + (horas * 
  kConversorHoras) + (minutos * kConversorMinutos) + segundos << '\n';
}