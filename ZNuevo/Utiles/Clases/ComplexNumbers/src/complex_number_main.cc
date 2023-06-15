/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @date Jun 16, 2023
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @brief Archivo main que ejecuta los métodos de la clase ComplexNumber
 * @see
 */

#include "complex_number.h"

#include <cstring>
#include <string>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa contenedor de la clase ComplexNumber que trabaja con "
               "números complejos."
            << std::endl;
  std::cout << "Introduzca dos números complejos por línea de comandos, de la "
               "manera Real1 Imaginario1 Real2 Imaginario2"
            << std::endl;
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
bool CompruebaParametrosCorrectos(const int argc, char *argv[],
                                  const int kCorrectNumber) {
  if (argc == 2 && (!strcmp(argv[1], "--help"))) {
    Introduccion();
    return false;
  } else if (argc != kCorrectNumber + 1) {
    std::cerr << "Error. Número de parámetros incorrecto" << std::endl;
    std::cerr << "Este programa ha de ser llamado " << argv[0] << " Parámetro1 "
              << "Parámetro2 "
              << "Parámetro3 "
              << "Parámetro4" << std::endl;
    std::cerr << "Parámetro1: "
              << "Número real 1º" << std::endl;
    std::cerr << "Parámetro2: "
              << "Número imaginario 1º" << std::endl;
    std::cerr << "Parámetro3: "
              << "Número real 2º" << std::endl;
    std::cerr << "Parámetro4: "
              << "Número imaginario 2º" << std::endl;
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
  int numero_de_parametros{4};
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros)) {
    return 1;
  }
  ComplexNumber complejo1(std::stod(argv[1]), std::stod(argv[2]));
  ComplexNumber complejo2(std::stod(argv[3]), std::stod(argv[4]));
  ComplexNumber complejo3;

  // Impresión por pantalla
  std::cout << "complejo1: " << complejo1 << std::endl;
  std::cout << "complejo2: " << complejo2 << std::endl;
  std::cout << "Por defecto, complejo3: " << complejo3 << std::endl;

  // Operaciones
  std::cout << "Suma de complejo1 + complejo2: " << complejo1 + complejo2
            << std::endl;
  std::cout << "Resta de complejo1 - complejo2: " << complejo1 - complejo2
            << std::endl;
  std::cout << "Multiplicación de complejo1 * complejo2: "
            << complejo1 * complejo2 << std::endl;
  std::cout << "División de complejo1 / complejo2: " << complejo1 / complejo2
            << std::endl;
  std::cout << "Conjugado de complejo 2: " << complejo2.Conjugado()
            << std::endl;
  std::cout << "Valor absoluto de complejo 2: " << complejo2.Abs()
            << std::endl;
  std::cout << "Forma exponencial del complejo 2: " << complejo2.Exp()
            << std::endl;

  // Operador de extracción
  ComplexNumber complejo4;
  std::cout << "Introduce un número complejo: " << std::endl;
  std::cin >> complejo4;
  std::cout << "complejo4: " << complejo4 << std::endl;
}