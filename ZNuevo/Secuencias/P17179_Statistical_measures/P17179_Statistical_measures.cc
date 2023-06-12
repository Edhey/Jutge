/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 06 2023
 * @brief Programa que lee secuencias no vacías de números reales y, para cada
 * secuencia, imprima su mínimo, su máximo y su promedio.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P17179_en
 */

#include <iomanip>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que lee secuencias no vacías de números reales y, para cada "
         "secuencia, imprima su mínimo, su máximo y su promedio."
      << std::endl;
  std::cout << "La entrada consta de un número natural n, seguido de n "
               "secuencias. Cada secuencia comienza con el número de elementos "
               "m > 0, seguido de m números reales."
            << std::endl;
}

/**
 * @brief Función que lee secuencias no vacías de números reales y, para cada
 * secuencia, imprime su mínimo, su máximo y su promedio.
 * @param numero_de_secuencias es la cantidad de secuencias a leer.
 */
void StatisticalMeasures(int numero_de_secuencias) {
  for (int i{0}; i < numero_de_secuencias; ++i) {
    double elementos_secuencia{}, mayor{}, menor{}, promedio{}, elemento{};
    std::cin >> elementos_secuencia;
    for (int i{0}; i < elementos_secuencia; ++i) {
      std::cin >> elemento;
      if (i == 0) {
        mayor = elemento;
        menor = elemento;
      }
      if (mayor < elemento)
        mayor = elemento;
      if (menor > elemento)
        menor = elemento;
      promedio += elemento;
    }
    promedio /= elementos_secuencia;
    std::cout << std::fixed << std::setprecision(4) << menor << " " << mayor
              << " " << promedio << std::endl;
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero_de_secuencias{};
  while (std::cin >> numero_de_secuencias) {
    StatisticalMeasures(numero_de_secuencias);
  }
  return 0;
}