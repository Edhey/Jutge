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

#include <iostream>
#include <string>

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
  if (argc != 1 + kCorrectNumber) {
    std::cout << "Error. Número de parámetros incorrecto" << std::endl;
    std::cout << "Este programa ha de ser llamado " << argv[0] << " Parámetro1 "
              << "Parámetro2 "
              << "parametro3 " << std::endl;
    std::cout << "Parámetro1: "
              << "" << std::endl;
    std::cout << "Parámetro2: "
              << "" << std::endl;
    std::cout << "Parámetro3: "
              << "" << std::endl;
    return false;
  }
  return true;
}



/**
 * @brief that Checks if the number of parameters introduced is correct.
 * @param[in] argc Number of command line parameters.
 * @param[in] argv Vector containing (char*) the parameters.
 * @param[in] kCorrectNumber Number of parameters that should be.
 * @return true if number of parameters is correct
 *         false if it is not correct.
 */
bool CheckCorrectParameters(const int argc, char *argv[],
                            const int kCorrectNumber) {
  if (argc != 1 + kCorrectNumber) {
    std::cout << "Error. Number of parameters introduced is not correct"
              << std::endl;
    std::cout << "This program must be called " << argv[0] << " parameter1 "
              << "parameter2 "
              << "parameter3 " << std::endl;
    std::cout << "Parameter1: "
              << "" << std::endl;
    std::cout << "Parameter2: "
              << "" << std::endl;
    std::cout << "Parameter3: "
              << "" << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Función main.
 * @param argc número de argumentos pasados al programa desde la línea de
 * comandos.
 * @param argv puntero a un array de cadenas de caracteres que contiene los
 * argumentos pasados al programa desde la línea de comandos.
 */
int main(int argc, char *argv[]) {
  int numero_de_parametros{2};
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros))
    return 1;
  int numero = std::stoi(argv[2]);
  double doe = std::stod(argv[1]);
}