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

#include <fstream>
#include <iostream>
#include <string>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Copia desde un fichero a otro" << std::endl;
  std::cout << "Introduzca el nombre del fichero: " << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  std::string nombre_fichero{}, linea{};
  std::cin >> nombre_fichero;
  std::ifstream texto_de_entrada{nombre_fichero};
  if (!texto_de_entrada) {
    std::cerr << "Oh no, ocurrió un error en " << nombre_fichero
              << " ¡No se pudo abrir el archivo!" << std::endl;
    return 0;
  }
  std::ofstream fichero_de_salida{"output.txt"};
  if (!fichero_de_salida) {
    std::cerr
        << "Oh no, ocurrió un error en output.txt ¡No se pudo abrir el archivo!"
        << std::endl;
    return 0;
  }
  while (std::getline(texto_de_entrada, linea)) {
    fichero_de_salida << linea << std::endl;
  }
  return 0;
}