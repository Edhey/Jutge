/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 14 2023
 * @brief Programa que elimina las lineas en blanco de un fichero.
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
  std::cout << "Elimina las lineas en blanco de un fichero" << std::endl;
  std::cout << "Introduzca el nombre de un fichero: " << std::endl;
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
  if (argc != kCorrectNumber + 1) {
    std::cout << "Error. Número de parámetros incorrecto" << std::endl;
    std::cout << "Este programa ha de ser llamado " << argv[0] << " Parámetro1 "
              << " Parámetro2" << std::endl;
    std::cout << "Parámetro1: "
              << "nombre del fichero" << std::endl;
    std::cout << "Parámetro2: "
              << "ocurrencia a borrar" << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Función que dado un fichero borra todas sus líneas en blanco.
 * @param nombre_fichero Fichero a analizar.
 */
void BorrarLineasEnBlancoDeFichero(std::string nombre_fichero) {
  std::string linea{};
  std::ifstream texto_de_entrada{nombre_fichero};
  if (!texto_de_entrada) {
    std::cerr << "Oh no, ocurrió un error en " << nombre_fichero
              << " ¡No se pudo abrir el archivo!" << std::endl;
    return;
  }
  std::ofstream fichero_de_salida{"output.txt"};
  if (!fichero_de_salida) {
    std::cerr
        << "Oh no, ocurrió un error en output.txt ¡No se pudo abrir el archivo!"
        << std::endl;
    return;
  }
  while (std::getline(texto_de_entrada, linea)) {
    for (auto &elemento : linea) {
      if (!isspace(elemento)) {
        fichero_de_salida << linea;
        if (!texto_de_entrada.eof())
          std::cout << std::endl;
        break;
      }
    }
  }
  fichero_de_salida.close();
  const char *c_nombre_fichero = nombre_fichero.c_str();
  std::rename("output.txt", c_nombre_fichero);
}

/**
 * @brief Función main.
 * @param argc número de argumentos pasados al programa desde la línea de
 * comandos.
 * @param argv puntero a un array de cadenas de caracteres que contiene los
 * argumentos pasados al programa desde la línea de comandos.
 */
int main(int argc, char *argv[]) {
  int numero_de_parametros{1};
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros)) {
    return 1;
  }
  BorrarLineasEnBlancoDeFichero(argv[1]);
}