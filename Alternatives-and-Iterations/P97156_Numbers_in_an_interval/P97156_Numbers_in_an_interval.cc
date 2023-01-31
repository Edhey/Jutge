/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P97156-numbers-in-an-interval.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 06 2022
  * @brief programa que lee dos números "a" y "b" e imprime todos los números
  * entre el intervalo que forman
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P97156_en
  * @see https://github.com/IB-2022-2023/P06-alternatives-itderations/blob/main/alternatives-and-iterations.md 
  */ 
#include<iostream>

int main() {
  //std::cout << "Este programa lee dos números a y b e imprime todos los números";
  //std::cout << " entre el intervalo que forman." << std::endl;
  //std::cout << "Escriba dos números " << std::endl;
  int a, b;
  std::cin >> a >> b;
  if (a <= b) {
    std::cout << a;
    a += 1;
    for(a = a; a <= b; a++) {
      std::cout << "," << a;
    }
  }
  std::cout << std::endl;
}