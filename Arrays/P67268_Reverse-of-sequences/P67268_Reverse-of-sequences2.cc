/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 27 2022
  * @brief programa que lee secuencias de números enteros e imprime cada uno 
  * invirtiendo el orden de sus elementos.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P14130_en
  */

#include <iostream>
#include <vector>

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Escriba un programa que lea secuencias de números enteros e "
  << "imprima cada uno invirtiendo el orden de sus elementos."; 
  std::cout <<  std::endl;
  std::cout <<  "Ingrese una secuencias de números enteros"; 
  std::cout << std::endl;
}

std::vector<int> GenerateReverseVector(const int size) {
  std::vector<int> vector;
  vector.reserve(size);
  int component;
  for(int i{0}; i < size; i++) {
    std::cin >> component;
    vector.insert(vector.begin(), component);
  }
  return vector;
}


int main() {
  int size_vector;
  while(std::cin >> size_vector) {
    for(auto& componente : GenerateReverseVector(size_vector)) {
      std::cout << componente;
      int i{1};
      i++;
      if(i < GenerateReverseVector(size_vector).size()) {
        std::cout << " ";
      } 
    }
  std::cout << std::endl;
  }
}
