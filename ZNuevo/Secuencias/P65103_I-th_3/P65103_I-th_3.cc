/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 04 2023
 * @brief Programa que, dado un número entero i y una secuencia de números
 * naturales x1, …, xn, imprima xi. Si la posición i es correcta, imprima el
 * contenido de i como se muestra en los ejemplos. De lo contrario, imprima
 * “Posición incorrecta.”.
 * @bug No hay errores conocidos
 * @seehttps://jutge.org/problems/P65103_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que, dado un número entero i y una secuencia de "
               "números naturales x1, …, xn, imprima xi. Si la posición i es "
               "correcta, imprima el contenido de i como se muestra en los "
               "ejemplos. De lo contrario, imprima “Posición incorrecta.”."
            << std::endl;
  std::cout
      << "Introduzca un número entero i y una secuencia de números naturales:"
      << std::endl;
}

/**
 * @brief Función que, dado un número entero i, lee una secuencia de números
 * naturales x1, …, xn, e imprime xi.
 * @param numero_x número a buscar en la secuencia.
 */
void ImprimeX(int numero_x) {
  int numero{}, posicion{0};
  while (std::cin >> numero && numero != -1) {
    ++posicion;
    if (posicion == numero_x) {
      std::cout << "At the position " << posicion << " there is a(n) " << numero
                << "." << std::endl;
      return;
    }
  }
  std::cout << "Incorrect position." << std::endl;
}


/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero_x;
  // Solo debe funcionar para una secuencia.
  // while (std::cin >> numero_x) {
  std::cin >> numero_x;
  ImprimeX(numero_x);
  // }
  return 0;
}