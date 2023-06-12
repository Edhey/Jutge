/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 05 2023
 * @brief Programa tal que, dada una secuencia de líneas, cada una con cuatro
 * números naturales a, b, c, d con a ≤ b y c ≤ d, imprima la primera solución
 * natural de la ecuación x^3 + y^3 = z^3 que cumple las restricciones de una
 * recta: a ≤ x ≤ b y c ≤ y ≤ d.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P18203_en
 */

#include <cmath>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa tal que, dada una secuencia de líneas, cada una con "
               "cuatro números naturales a, b, c, d con a ≤ b y c ≤ d, imprima "
               "la primera solución natural de la ecuación x^3 + y^3 = z^3 que "
               "cumple las restricciones de una recta: a ≤ x ≤ b y c ≤ y ≤ d. "
            << std::endl;
  std::cout << "La entrada tiene varias líneas, cada una con cuatro números "
               "naturales a, b, c, d tales que a ≤ b y c ≤ d."
            << std::endl;
}

/**
 * @brief Función que, dada una secuencia de líneas, cada una con cuatro
 * números naturales a, b, c, d con a ≤ b y c ≤ d, imprime la primera solución
 * natural de la ecuación x^3 + y^3 = z^3 que cumple las restricciones de una
 * recta: a ≤ x ≤ b y c ≤ y ≤ d.
 */
void FermatsTheoremForCube() {
  int solucion_int{0};
  double solucion_z{INFINITY}, solucion_x{}, solucion_y{}, solucion_posible{};
  int numero1{}, numero2{}, numero3{}, numero4{};
  while (std::cin >> numero1 >> numero2 >> numero3 >> numero4) {
    for (int i{numero1}; i <= numero2; ++i) {
      for (int j{numero3}; j <= numero4; ++j) {
        solucion_int = i * i * i + j * j * j;
        solucion_posible = pow(solucion_int, 1.0 / 3.0);
        solucion_int = floor(solucion_posible);
        if (solucion_posible - solucion_int == 0 &&
            solucion_posible < solucion_z) {
          solucion_z = solucion_posible;
        }
      }
    }
  }
  if (solucion_z != INFINITY) {
    std::cout << solucion_x << "^3 + " << solucion_y << "^3 = " << solucion_z
              << "^3" << std::endl;
  } else {
    std::cout << "No solution!" << std::endl;
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  FermatsTheoremForCube();
  return 0;
}