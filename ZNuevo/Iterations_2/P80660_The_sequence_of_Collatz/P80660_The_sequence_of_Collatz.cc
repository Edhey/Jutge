/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 28 2023
 * @brief Sea n cualquier número natural estrictamente positivo. Considere el
 * siguiente proceso. Si n es un número par, lo dividimos por dos. De lo
 * contrario, lo multiplicamos por 3 y le sumamos 1. Cuando llegamos a 1,
 * paramos. Por ejemplo, a partir de 3, obtenemos la sucesión 3, 10, 5, 16, 8,
 * 4, 2, 1. Desde 1937 se conjetura que este proceso termina para cualquier n
 * inicial, aunque nadie ha podido probarlo. En este problema, no le pedimos
 * una demostración. Solo tiene que escribir un programa que imprima la cantidad
 * de pasos que se necesitan para llegar a 1 para cada n dado.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P80660_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Sea n cualquier número natural estrictamente positivo. Considere el "
         "siguiente proceso. Si n es un número par, lo dividimos por dos. De "
         "lo contrario, lo multiplicamos por 3 y le sumamos 1. Cuando llegamos "
         "a 1, paramos. Por ejemplo, a partir de 3, obtenemos la sucesión 3, "
         "10, 5, 16, 8, 4, 2, 1. Desde 1937 se conjetura que este proceso "
         "termina para cualquier n inicial. Este programa imprime la cantidad "
         "de pasos que se necesitan para llegar a 1 para cada n dado."
      << std::endl;
  std::cout << "Introduzca un número entero:" << std::endl;
}

/**
 * @brief Función que imprime la cantidad de pasos que se necesitan para llegar
 * a 1 para un número dado, al aplicarle la sucesion de Collazt.
 * @param numero es el número de donde se parte la secuencia de Collatz.
 * @return Devuelve los pasos realizados para llegar a 1.
 */
int CollatzHasta1(int numero) {
  int contador{0};
  while (numero != 1) {
    if (numero % 2 == 0)
      numero /= 2;
    else
      numero = (numero * 3) + 1;
    ++contador;
  }
  return contador;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero{0};
  while (std::cin >> numero) {
    std::cout << CollatzHasta1(numero) << std::endl;
  }
  return 0;
}