/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 28 2023
 * @brief Programa que lea pares de números n y m con n ≥ m , y para cada par
 * imprima H n − H m.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P58153_en
 */

#include <iomanip>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lea pares de números n y m con n ≥ m , y para "
               "cada par imprima H n - H m."
            << std::endl;
  std::cout << "Introduzca un par de números naturales n y m tales que n ≥ m:"
            << std::endl;
}

/**
 * @brief Dado un número entero devuelve su armónico.
 * @param numero es el número que se convertirá en armónico.
 * @return devuelve el armónico.
 */
double Armonico(int numero) {
  double armonico{0.0};
  for (double i = 1; i <= numero; i++) {
    armonico += 1 / i;
  }
  return armonico;
}

/**
 * @brief Dado dos números enteros devuelve la resta de sus armónicos.
 * @param numero1 es uno de los número que se convertirá en armónico.
 * @param numero2 es uno de los número que se convertirá en armónico.
 * @return Devuelve la resta de los dos armónicos.
 */
double NumerosArmonicos(int numero1, int numero2) {
  return Armonico(numero1) - Armonico(numero2);
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero1, numero2;
  while (std::cin >> numero1 >> numero2)
    std::cout << std::fixed << std::setprecision(10)
              << NumerosArmonicos(numero1, numero2) << std::endl;
  return 0;
}