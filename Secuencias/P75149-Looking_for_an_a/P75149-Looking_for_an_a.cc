/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 28 2022
  * @brief program that reads a sequence of characters ended in a dot and tells
  * if the sequence has any lowercase ‘a’ or not.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P75149_en
  */

#include <iostream>
#include <vector>

int main() {
  std::vector<char> secuencia_de_caracteres;
  char caracter{};
  int cuenta_de_caracteres_a{0};
  while(std::cin >> caracter) {
    secuencia_de_caracteres.emplace_back(caracter);
  }
  for(int i{0}; i < secuencia_de_caracteres.size(); i++) {
    if(secuencia_de_caracteres[i] == static_cast<char> (97)){
      cuenta_de_caracteres_a++; 
    }
  }
  if(cuenta_de_caracteres_a > 0) {
    std::cout << "yes" << std::endl;
  }
  else {
    std::cout << "no" << std::endl;
  }
}
