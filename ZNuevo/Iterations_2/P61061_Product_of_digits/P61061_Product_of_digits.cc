/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 28 2023
 * @brief Programa que lee varios números, y para cada uno imprime el producto
 * de sus dígitos, y el producto de los dígitos del último producto, etcétera,
 * hasta que el producto resultante tenga un solo dígito.
 * @bug No hay errores conocidos
 * @see
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lee varios números, y para cada uno imprime el "
               "producto de sus dígitos, y el producto de los dígitos del "
               "último producto, etcétera, hasta que el producto resultante "
               "tenga un solo dígito."
            << std::endl;
  std::cout << "Introduzca un número natural:" << std::endl;
}

/**
 * @brief Programa que lee un número entero, e imprime el producto de sus
 * dígitos, y el producto de los dígitos del último producto, etcétera, hasta
 * que el producto resultante tenga un solo dígito.
 * @param numero es el número que se lee.
 */
void ProductoDeDigitos(int numero) {
  int producto{10}, copia_numero{numero};
  int const kNunmero10{10};
  while (producto / 10 != 0) {
    producto = 1;
    while (copia_numero != 0) {
      producto *= copia_numero % kNunmero10;
      copia_numero /= kNunmero10;
    }
    if (numero == 0) {
      std::cout << "The product of the digits of " << numero << " is 0." << std::endl;
    } else {
      std::cout << "The product of the digits of " << numero << " is "
                << producto << "." << std::endl;
    }
    numero = producto;
    copia_numero = numero;
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero{};
  while (std::cin >> numero) {
    ProductoDeDigitos(numero);
    std::cout << "----------" << std::endl;
  }
  return 0;
}