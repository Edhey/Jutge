/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @date Jun 16, 2023
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @brief Archivo main que ejecuta los métodos de la clase Cars
 * @see
 */

#include <cstring>
#include <string>

#include "cars.h"

/**
 * @brief Función que comprueba si el número de parámetros introducido es
 * correcto.
 * @param[in] argc: Número de parámetros en la línea de comando.
 * @param[in] argv: Vector contenedor (char*) de parámetros.
 * @param[in] kCorrectNumber: Número de parámetros que debería haber.
 * @return verdadero si el número de parámetros es correcto.
 *         falso si no lo es.
 */
bool CompruebaParametrosCorrectos(const int argc, char *argv[],
                                  const int kCorrectNumber) {
  if (argc == 2 && (!strcmp(argv[1], "--help"))) {
    return false;
  } else if (argc != kCorrectNumber + 1) {
    std::cerr << "Error. Número de parámetros incorrecto" << std::endl;
    std::cerr << "Este programa ha de ser llamado " << argv[0] << " Parámetro1"
              << std::endl;
    std::cerr << "Parámetro1: "
              << "Cantidad de coches a instanciar" << std::endl;
    std::cerr << "Pruebe " << argv[0] << " --help para más información"
              << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Función main
 */
int main(int argc, char *argv[]) {
  int numero_de_parametros{1};
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros)) {
    return 1;
  }
  // Cars coche1;
  // std::cin >> coche1;
  // std::cout << coche1;
  std::vector<Cars> vector_de_coches;
  vector_de_coches = InstanciaCoches(std::stoi(argv[1]));
  ImprimeVectorCoches(vector_de_coches);
}
