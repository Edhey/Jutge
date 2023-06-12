/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 04 2023
 * @brief Programa que lea una secuencia de números primos y, para cada uno,
 * imprima el siguiente número primo.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P50095_en
 */

#include <cmath>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lea una secuencia de números primos y, para cada "
               "uno, imprima el siguiente número primo."
            << std::endl;
  std::cout << "Introduzca una secuencia de números primos:" << std::endl;
}

/**
 * @brief Función que decide si un número es primo o no.
 * @param numero es el número a analizar.
 * @return true si es primo.
 *         false si no es primo.
 */
bool Primality(const int numero) {
  if (numero <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(numero); i++) {
    if (numero % i == 0) {
      return false;
    }
  }
  return true;
}

/**
 * @brief Función que dado un número primos, imprime el siguiente número primo.
 * @param primo es el número primo que determina el siguiente primo.
 * @return devuelve el siguiente primo del número primo pasado.
 */
int NextPrimeNumber(int primo) {
  // if (!Primality(primo))
  //   return 0;
  if (primo == 2) {
    return 3;
  }
  do {
    primo += 2;
  } while (!Primality(primo));
  return primo;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int primo;
  while (std::cin >> primo) {
    if (Primality(primo))
      std::cout << NextPrimeNumber(primo) << std::endl;
  }

  return 0;
}