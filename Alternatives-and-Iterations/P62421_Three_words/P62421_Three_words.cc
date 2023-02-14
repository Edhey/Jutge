/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 14 2023
  * @brief Programa que lee tres palabras a, b y c, e imprime una línea con c, b
  * y a en este orden
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P62421_en
  */

#include <iostream>
#include <string>
#include <vector>

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee tres palabras a, b y c, e imprime una línea "
  << "con c, b y a en este orden.";
  std::cout <<  std::endl;
  std::cout <<  "Escribe tres palabras: "; 
  std::cout << std::endl;
}

/** @brief Función que lee un vector de strings e imprime sus componentes en
  * orden inverso.
  * @param vector vector de strings con las componentes a imprimir al revés.
  */
void InversionDelOrdenEnVectorDeStrings(std::vector<std::string> vector) {
  for (int i = vector.size() - 1; i > 0; --i) {
    std::cout << vector[i] << " ";
  }
  std::cout << vector[0] << std::endl;
}

int main() {
  // Introduccion();
  std::string palabra;
  std::vector<std::string> vector{};
  vector.reserve(3);
  while (std::cin >> palabra) {
    vector.emplace_back(palabra);
  }
  InversionDelOrdenEnVectorDeStrings(vector);
}