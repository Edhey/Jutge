/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P59539-armonic-numbers-1.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 06 2022
  * @brief programa que lee un número e imprime el armónico n-ésimo definido
  * como Hn = 1/1 + 1/2 + ... + 1/n.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P59539_en
  * @see https://github.com/IB-2022-2023/P06-alternatives-itderations/blob/main/alternatives-and-iterations.md 
  */  

#include<iostream>
#include<iomanip>

int main() {
  //std::cout << "Este programa lee un número e imprime el armónico n-ésimo definido";
  //std::cout << " como Hn = 1/1 + 1/2 + ... + 1/n." << std::endl;
  //std::cout << "Escriba un número " << std::endl;
  int numero{0};
  double armonico{0.0};
  std::cin >> numero;
  for(double i = 1; i <= numero; i++) {
	  armonico += 1 / i;
  }
  std::cout << std::fixed << std::setprecision(4) << armonico << std::endl;
}