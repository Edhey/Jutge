/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
* @date May 23 2023
* @brief Función que devuelva el valor absoluto de un entero n.
* @bug No hay errores conocidos
* @see https://jutge.org/problems/P96275_en
*/

#include <iostream>

/**
 * @brief Función que devuelva el valor absoluto de un entero n.
 * @param numero es el numero sobre el que se aplica el valor absoluto.
 * @return devuelve el valor absoluto del número.
 */
int absolute(int numero) {
  return numero < 0 ? -numero : numero;
}

int main() {
  std::cout << absolute(42) << std::endl;
  std::cout << absolute(-23) << std::endl;
  return 0;
}