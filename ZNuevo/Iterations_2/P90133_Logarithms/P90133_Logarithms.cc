/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date 30 03 2023
  * @brief Programa que calcula logaritmos en varias bases.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P90133_en
  */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que calcula logaritmos en varias bases." << std::endl;
  std::cout << "Escribe un numero y la base del logaritmo: " << std::endl;
}

/**
 * @brief Función que calcula el logaritmo de un número pasado como parámetro
 * en base otro número también pasado como parámetro.
 * @param numero Número del que se calculará el logaritmo.
 * @param base Es la base que se usará a la hora de aplicar el logaritmo.
 */
int Logaritmo(int numero, int base) {
  if (base < 2 || numero < 1) {
    std::cout << "Condiciones de uso: \nBase debe ser mayor o igual a 2." <<
    std::endl << "Numero debe ser mayor o igual a 1." << std::endl;
    exit;
  }
  int contador{};
  while (numero / base != 0) {
    numero /= base;
    ++contador;
  }
  return contador;
}

int main () {
  // Introduccion();
  int numero{}, base{};
  while (std::cin >> numero >> base) {
    std::cout << Logaritmo(base, numero) << std::endl;
  }
} 