/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @date Jun 16, 2023
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @brief Archivo main que ejecuta los métodos de la clase Coche
 * @see asf
 */

#include "Coche.h"

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Prueba de CMakeLists.txt" << std::endl;
}

/**
 * @brief Función que comprueba si el número de parámetros introducido es
 * correcto.
 * @param[in] argc: Número de parámetros en la línea de comando.
 * @param[in] argv: Vector contenedor (char*) de parámetros.
 * @param[in] kCorrectNumber: Número de parámetros que debería haber.
 * @return verdadero si el número de parámetros es correcto.
 *         falso si no lo es.
 */
bool CompruebaParametrosCorrectos(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber + 1) {
    std::cout << "Error. Número de parámetros incorrecto" << std::endl;
    std::cout << "Este programa ha de ser llamado " << argv[0] << " Parámetro1 " << "Parámetro2 " << std::endl;
    std::cout << "Parámetro1: " << "Marca del coche" << std::endl;
    std::cout << "Parámetro2: " << "Matrícula" << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Función main
 */
int main(int argc, char *argv[]) {
  Introduccion();
  int numero_de_parametros{2};
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros)) {
    return 1;
  }
  Coche<int> coche1{argv[1], argv[2]};
  std::cout << coche1;
}
