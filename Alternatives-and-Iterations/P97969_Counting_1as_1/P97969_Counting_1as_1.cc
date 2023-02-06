/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 06 2023
  * @brief Programa que lee una secuencia de caracteres terminados con un punto 
  * e imprime el número de letras 'a' en la secuencia.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P97969_en
  */  

#include <iostream>
#include <string>

/** Función que imprime la introduccion del programa
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee una secuencia de caracteres terminados con un "
  << "punto e imprime el número de letras 'a' en la secuencia." <<  std::endl;
  std::cout <<  "Escribe una secuencia de caracteres acabados en punto: "
  << std::endl;
}

/** @brief Función que imprime la cantidad de aes que tiene una secuencia 
  * acabada en punto.
  * @return Int con la cantidad de aes de la secuencia.
  */
int CantidadDeAes(const std::string cadena) {
  int cantidad_de_aes{0};
  for (const auto letra : cadena) {
    if (letra == 'a') {
      ++cantidad_de_aes;
    } else if (letra == '.') {
      return cantidad_de_aes;
    }
  }
  return cantidad_de_aes;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  std::string cadena{};
  while (std::getline (std::cin, cadena)) {
    std::cout << CantidadDeAes(cadena) << std::endl;
  }
}
