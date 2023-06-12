/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Dec 27 2022
 * @brief Programa que lee una secuencia de números naturales y, para cada uno,
 * diga si es un número primo o no. Recuerda que un número natural es primo si y
 * solo si es mayor que 1 y no tiene ningún divisor positivo más que 1 y él
 * mismo.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P48713
 */

#include <iostream>
#include <cmath>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lee una secuencia de números naturales y, para "
               "cada uno, diga si es un número primo o no. Recuerda que un "
               "número natural es primo si y solo si es mayor que 1 y no tiene "
               "ningún divisor positivo más que 1 y él mismo."
            << std::endl;
  std::cout << "Introduzca la cantidad de números de la secuancia y a "
               "continuación, la secuencia:"
            << std::endl;
}

/**
 * @brief Función que dice si un número es primo o no.
 * @param numero es el número a analizar.
 * @return true si es primo.
 *         false si no lo es.
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
 * @brief Función main
 */
int main() {
  int cantidad_de_numeros{0};
  std::cin >> cantidad_de_numeros;
  for (int i{0}; i < cantidad_de_numeros; ++i) {
    int numero{0};
    std::cin >> numero;
    std::cout << numero;
    Primality(numero) ? std::cout << " is prime" : std::cout << " is not prime";
    std::cout << std::endl;
  }
}