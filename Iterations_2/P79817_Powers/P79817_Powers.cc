/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Mar 03 2023
  * @brief Programa para calcular potencias.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P79817_en
  */

#include <iostream>

/** @brief Función que imprime el propósito del programa
    */
void Introduccion() {
  std::cout << "Programa para calcular potencias." << std::endl;
  std::cout << "Escribe un numero y el exponente al que se elevará: " 
  << std::endl;
}

/** @brief Función que eleva un número pasado como parámetro a un exponente también pasado como parámetro.
   * @param numero Número que se elevará al exponente.
   * @param exponente Número de veces que se multipicará el número por si mismo.
   */
int Potencia(int numero, int exponente) {
  if (exponente == 0) {
    return 1;
  } else {
    int resultado{1};
    for (int i{exponente}; i > 0; --i) {
      resultado *= numero;
    }
    return resultado;
  }
}

int main () {
  // Introduccion();
  int numero{}, exponente{};
  while (std::cin >> numero >> exponente) {
    std::cout << Potencia(numero, exponente) << std::endl;
  }
} 