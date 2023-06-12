/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 07 2023
 * @brief Programa que imprime la suceción de Fibonacci.
 * @bug No hay errores conocidos
 * @see
 */

#include <iostream>

/**
 * @brief imprime la suceción de fibonacci para los n términos dados
 * @param cantiad_de_terminos Es la cantidad de términos de la suceción;
 */
void SucecionDeFibonacci(int cantiad_de_terminos) {
  int anterior{0}, siguiente{1}, suma{};
  std::cout << anterior << " ";
  for (int i{1}; i < cantiad_de_terminos; ++i) {
    std::cout << siguiente << " ";
    suma = anterior + siguiente;
    anterior = siguiente;
    siguiente = suma;
  } 
  std::cout << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero{};
  while (std::cin >> numero) {
    SucecionDeFibonacci(numero);
  }
  return 0;
}