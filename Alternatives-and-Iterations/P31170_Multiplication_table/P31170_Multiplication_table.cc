/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 05 2023
  * @brief Programa que lee un número n e imprime la "tabla de multiplicar" de n
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P31170_en
  */

#include <iostream>

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee un número n e imprime la 'tabla de multiplicar'"
  << " de n." << std::endl;
}

/** @brief Función que imprime la tabla de multiplicar de un número pasado como parámetro.
   * @param numero Número del cual se imprimirá la tabla de multiplicar.
   */
void TablaDeMultiplicar(const int& numero) {
  int factor {1};
  const int kNumero10{10};
  while (factor <= kNumero10) {
    std::cout << numero << "*" << factor << " = " << numero * factor << std::endl;
    ++factor;
  }
}


/** @brief Función main.
  */
int main() {
  //Introduccion();
  int numero{};
  std::cin >> numero;
  TablaDeMultiplicar(numero);
} 