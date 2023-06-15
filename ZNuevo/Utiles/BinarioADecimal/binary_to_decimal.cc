/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 14 2023
 * @brief Programa que pasa de binario a decimal.
 * @bug No hay errores conocidos
 * @see
 */

#include <cmath>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que pasa de binario a decimal" << std::endl;
  std::cout << "Introduzca un número binario: " << std::endl;
}

/**
 * @brief Función que pasa de binario a decimal.
 * @param binario número en binario.
 * @return Devuelve su equivalente decimal.
 */
int BinarioADecimal(int binario) {
  int const kNumero10{10};
  int decimal{}, iteraciones{0};
  while (binario) {
    if (binario % kNumero10 == 1)
      decimal += pow(2, iteraciones);
    binario /= kNumero10;
    ++iteraciones;
  }
  return decimal;
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int numero{};
  while (std::cin >> numero) {
    std::cout << BinarioADecimal(numero) << std::endl;
  }
  return 0;
}