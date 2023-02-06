/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 06 2023
  * @brief Programa que lee un número e imprime su cantidad de dígitos.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P55622_en/
  */  

#include <iostream>

/** Funcion que imprime la introduccion del programa
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee un número e imprime su cantidad de dígitos."; 
  std::cout <<  std::endl;
  std::cout <<  "Escribe un número: "; 
  std::cout << std::endl;
}

/** Funcion que imprime la cantidad de dígitos de un número pasado como parámetro
  * @param numero Es el número del cual se imprimirá la cantidad de dígitos.
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
int CantidadDeDigitos(int numero) {
  const int kNumero10{10};
  int cantidad_de_digitos;
  while (numero / kNumero10 != 0) {
    ++cantidad_de_digitos;
    numero /= kNumero10;
  }
  ++cantidad_de_digitos;
  return cantidad_de_digitos;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int numero{};
  std::cin >> numero;
  std::cout << "The number of digits of " << numero << " is " 
  << CantidadDeDigitos(numero) << "." << std::endl;
}