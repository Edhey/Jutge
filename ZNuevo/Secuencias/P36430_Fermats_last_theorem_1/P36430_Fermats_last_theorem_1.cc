/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 05 2023
 * @brief Un famoso teorema del matemático Pierre de Fermat, probado después de
 * más de 300 años, establece que, para cualquier número natural n ≥ 3, no hay
 * solución natural (excepto x = 0 o y = 0) a la ecuación X norte  +  y norte  =
 * z norte. Para n = 2, por el contrario, hay infinitas soluciones no triviales.
 * Por ejemplo, 3^2 + 4^2 = 5^2, 5^2 + 12^2 = 13^2, 6^2 + 8^2 = 10^2, …. Escriba
 * un programa que, dados cuatro números naturales a, b, c, d con a ≤ b y c ≤
 * d, imprima una solución natural a la ecuación x^2 + y^2 = z^2 tal que a ≤ x
 * ≤ b y c ≤ y ≤ re.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P36430_en
 */

#include <cmath>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que, dados cuatro números naturales a, b, c, d con a "
               "≤ b y c ≤ d, imprima una solución natural a la ecuación x^2 + "
               "y^2 = z^2 tal que a ≤ x ≤ b y c ≤ y ≤ re."
            << std::endl;
  std::cout << "La entrada consta de cuatro números naturales a, b, c, d tales "
               "que a ≤ b y c ≤ d."
            << std::endl;
}

/**
 * @brief Fución que, dados cuatro números naturales a, b, c, d con a ≤ b y c ≤
 * d, imprime una solución natural a la ecuación x^2 + y^2 = z^2 tal que a ≤ x ≤
 * b y c ≤ y ≤ re.
 * @param numero1 menor valor de x.
 * @param numero2 mayor valor de x.
 * @param numero3 menor valor de y.
 * @param numero4 mayor valor de y.
 */
void FermatsTheorem(int numero1, int numero2, int numero3, int numero4) {
  int solucion_int{0};
  double solucion{};
  for (int i{numero1}; i <= numero2; ++i) {
    for (int j{numero3}; j <= numero4; ++j) {
      solucion_int = i * i + j * j;
      solucion = sqrt(solucion_int);
      solucion_int = floor(solucion);
      if (solucion - solucion_int == 0) {
        std::cout << i << "^2 + " << j << "^2 = " << solucion << "^2"
                  << std::endl;
        return;
      }
    }
  }
  std::cout << "No solution!" << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero1{}, numero2{}, numero3{}, numero4{};
  std::cin >> numero1 >> numero2 >> numero3 >> numero4;
  FermatsTheorem(numero1, numero2, numero3, numero4);
  return 0;
}