/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 07 2023
 * @brief Programa que, dados n números naturales estrictamente positivos x1 ...
 * xn, imprima su mínimo común múltiplo mayor que cero.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P96564_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que, dados n números naturales estrictamente positivos x1 "
         "... xn, imprima su mínimo común múltiplo mayor que cero."
      << std::endl;
  std::cout << "Introduzca la cantidad de números de los que se obtendrá en "
               "mínimo común múltiplo, luego dichos números:"
            << std::endl;
}

/**
 * @brief Función que calcula el máximo común divisor de dos números naturales a
 * y b utilizando la versión rápida del algoritmo euclidiano.
 * @param a entero del que se calcula el máximo común divisor.
 * @param b entero del que se calcula el máximo común divisor.
 * @return máximo común divisor de los dos números.
 */
int MCD(int a, int b) {
  do {
    int aux{b};
    b = a % b;
    a = aux;
  } while (b != 0);
  return a;
}

/**
 * @brief Función que devuelve el mínimo común múltiplo de los números pasados
 * como parámetros. Siguiendo la igualdad matemática:
 * MCD(a, b) * mcm(a, b) = a * b.
 * @param cantidad_de_numeros cantidad de números de los que se obtiene el
 * mínimo común múltiplo.
 * @return mínimo común múltiplo.
 */
int mcm(int cantidad_de_numeros) {
  long long numero{}, mcm{};
  for (int i{0}; i < cantidad_de_numeros; ++i) {
    std::cin >> numero;
    if (i == 0) {
      mcm = numero;
    } else {
      // mcm(a, b) = (a * b) / MCD(a, b)
      mcm = mcm * numero / MCD(mcm, numero);
    }
  }
  return mcm;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int cantidad_de_numeros{};
  while (std::cin >> cantidad_de_numeros && cantidad_de_numeros != 0) {
    std::cout << mcm(cantidad_de_numeros) << std::endl;
  }
  return 0;
}