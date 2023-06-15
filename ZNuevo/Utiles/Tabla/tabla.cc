/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date XXX XX 2023
 * @brief Programa que
 * @bug No hay errores conocidos
 * @see
 */

#include <iomanip>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Imprime una tabla" << std::endl;
  std::cout << "Introduce el número de filas y columnas" << std::endl;
}

/**
 * @brief Función que imprime una tabla.
 * @param filas número de filas de la tabla.
 * @param columnas número de columnas de la tabla.
 */
void Tabla(const int filas, const int columnas) {
  for (int i = 0; i < filas; ++i) {
    for (int j = 0; j < columnas; ++j) {
      if (i == 0)
        std::cout << "Elemento " << j + 1 << ' ';
      else
        // A la derecha:
        // std::cout << std::setw(10) << (i * 1000) * (j / 3) + (j / 7) + (i * 3)
        // << ' ';
        // Centrado:
        std::cout << std::right << std::setw(5)
                  << (i * 1000) * (j / 3) + (j / 7) + (i * 3) << std::left
                  << std::setw(5) << ' ' << ' ';
    }
    std::cout << std::endl;
  }
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int filas{}, columnas{};
  while (std::cin >> filas >> columnas) {
    Tabla(filas, columnas);
  }
  return 0;
}