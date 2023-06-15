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
  if (argc != kCorrectNumber + 1) {
    std::cout << "Error. Número de parámetros incorrecto" << std::endl;
    std::cout << "Este programa ha de ser llamado " << argv[0] << " Parámetro1 "
              << "Parámetro2 " << std::endl;
    std::cout << "Parámetro1: "
              << "cadena a analizar" << std::endl;
    std::cout << "Parámetro2: "
              << "subcadena a buscar" << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Función que comprueba si una subcadena dada se encuentra dentro de una
 * cadena pasada por parámetros.
 * @param cadena Es el string en el que se busca.
 * @param subcadena Es el string a buscar.
 * @return true si la subcadena está en la cadena.
 *         false si la subcadena no está en la cadena.
 */
bool BuscaSubcadenaEnCadena(std::string cadena, std::string subcadena) {
  for (int i{0}; i < cadena.size(); ++i) {
    if (cadena[i] == subcadena[0]) {
      bool encontrado{true};
      for (int j{1}; j < subcadena.size(); ++j) {
        if (cadena[i + j] != subcadena[j] || i + j >= cadena.size()) {
          encontrado = false;
          break;
        } else {
          encontrado = true;
        }
      }
      if (encontrado)
        return true;
    }
  }
  return false;
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
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros)) {
    return 1;
  }
  std::string cadena{argv[1]}, subcadena{argv[2]};
  BuscaSubcadenaEnCadena(cadena, subcadena) ? std::cout << "true"
                                            : std::cout << "false";
  std::cout << std::endl;
}
