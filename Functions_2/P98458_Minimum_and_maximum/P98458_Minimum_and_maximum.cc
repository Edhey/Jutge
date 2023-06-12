/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 31 2023
 * @brief Programa que almacena en mn el mínimo de a y b, y almacenar en mx el
 * máximo de a y b. Por ejemplo, si se llama con a = 7 y b = −3, los valores
 * después de la llamada deben ser mn = −3 y mx = 7.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P98458_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que almacena en mn el mínimo de a y b, y almacenar en mx el "
         "máximo de a y b. Por ejemplo, si se llama con a = 7 y b = -3, los "
         "valores después de la llamada deben ser mn = -3 y mx = 7."
      << std::endl;
  std::cout << "Introduzca dos valores enteros: " << std::endl;
}

/**
 * @brief Función que almacena en mn el mínimo de a y b, y almacena en mx el
 * máximo de a y b. Por ejemplo, si se llama con a = 7 y b = −3, los valores
 * después de la llamada deben ser mn = −3 y mx = 7.
 * @param a valor de entrada a comparar.
 * @param b valor de entrada a comparar.
 * @param mn variable donde se guardará el mayor valor.
 * @param mx variable donde se guardará el menor valor.
 */
void min_max(int a, int b, int& mn, int& mx) {
  if (a < b) {
    mn = a;
    mx = b;
  } else {
    mn = b;
    mx = a;
  }
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int num1{-12}, num2{-4}, min, max;
  min_max(num1, num2, min, max);
  std::cout << min << std::endl;
  std::cout << max << std::endl;
  return 0;
}