/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @date Jun 16, 2023
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @brief Archivo main que ejecuta los métodos de la clase Books
 * @see
 */

#include <cstring>
#include <string>

#include "Books.h"

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que define la clase Book. Esta clase permite "
               "almacenar las características de un libro: título, año de "
               "publicación y precio. También posee un método que permite "
               "calcular el precio del libro con impuestos."
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
              << std::endl;
    std::cerr << "Parámetro1: Porcentaje a aplicar."
              << "" << std::endl;
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
  Books libro1("El Quijote", 1605, 21);
  std::cout << libro1;
  std::cout << ", " << libro1.Impuesto(std::stod(argv[1])) << std::endl;
  Books libro2;
  std::cout << "Introduzca un nuevo libro: " << std::endl;
  std::cin >> libro2;
  double impuesto{};
  std::cout << "Introduzca un nuevo impuesto: " << std::endl;
  std::cin >> impuesto;
  std::cout << libro2;
  std::cout << ", " << libro2.Impuesto(impuesto) << std::endl;
}