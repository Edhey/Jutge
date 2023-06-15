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
    std::cout << "Este programa ha de ser llamado " << argv[0] << " parametro1 "
              << "parametro2 " << std::endl;
    std::cout << "Parámetro1: Texto donde se busca la letra."
              << "" << std::endl;
    std::cout << "Parámetro2: Letra a buscar en el texto."
              << "" << std::endl;
    return false;
  }
  return true;
}

int BuscaLetra(std::string texto, char letra) {
  for (int i{0}; i < texto.size(); ++i) {
    if (texto[i] == letra) {
      return i + 1;
    }
  }
  return -1;
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
  std::string nombre = argv[0];
  std::string texto = argv[1];
  std::string letra = argv[2];
  std::cout << BuscaLetra(texto, letra[0]) << std::endl;
}