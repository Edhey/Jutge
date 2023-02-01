/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Jan 30 2023
  * @brief Programa que lea un número n, e imprima 0^3, 1^3, ..., (n-1)^3,n^3.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P69277_en
  */

#include <iostream>

/** Función que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lea un número n, e imprima 0^3, 1^3, ..., (n-1)^3,"
  << "n^3.";
  std::cout <<  std::endl;
  std::cout <<  "Escriba un número: "; 
  std::cout << std::endl;
}

/** @brief Función que imprime los cubos desde 0 hasta un número pasado como 
  * parámetro.
  * @param numero Numero donde acaba la sucesión.
  */
void SucesionDePotenciasDe3(const int numero){
  for (int i{0}; i < numero; i++) {
    std::cout << i * i * i << ",";
  }
  std::cout << numero * numero * numero << std::endl;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int numero{};
  std::cin >> numero;
  SucesionDePotenciasDe3(numero);
}