/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Mar 03 2023
  * @brief Programa que lee varios números e imprime la suma de los dígitos de
  * cada uno.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P33839_en
  */

#include <iostream>

/** @brief Función que imprime el propósito del programa
    */
void Introduccion() {
  std::cout << "Programa que lee varios números e imprime la suma de los "
  << "dígitos de cada uno." << std::endl;
  std::cout << "Escribe tantos números como quieras: " << std::endl;
}

/** @brief Función que lee varios números e imprime la suma de los dígitos de cada uno.
   * @param numero número del cuál se sumarán sus dígitos
   */
int SumaDeDigitos(int numero) {
  int suma{0};
  int const kNumero10{10};
  while (numero / kNumero10 != 0) {
    suma += numero % kNumero10;
    numero /= kNumero10;
  }
  suma += numero;
  return suma;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int numero{};
  while (std::cin >> numero) {
    std::cout << "The sum of the digits of " << numero << " is " << 
    SumaDeDigitos(numero) << "." << std::endl;
  }
} 