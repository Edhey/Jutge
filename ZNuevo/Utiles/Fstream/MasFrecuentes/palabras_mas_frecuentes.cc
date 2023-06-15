/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 14 2023
 * @brief Programa que
 * @bug No hay errores conocidos
 * @see
 */

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

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
    std::cout << "Parámetro1: nombre del fichero." << std::endl;
    std::cout << "Parámetro2: número de palabras a buscar" << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que imprime las n palabras más frecuentes dado un fichero."
      << std::endl;
  std::cout << "Introduzca el nombre del fichero y el número de palabras a "
               "buscar 'n': "
            << std::endl;
}

/**
 * @brief Función que dado el nombre de un fichero y el número de palabras más
 * freceuentes a buscar, busca dentro del fichero las n palabras más
 * freceuentes.
 * @param nombre_fichero Es el nombre del fichero a analizar.
 * @param numero_de_palabras Es la cantidad de palabras más frecuentes a buscar.
 */
void PalabrasMasFrecuentes(std::string nombre_fichero, int numero_de_palabras) {
  std::string palabra{};
  std::vector<std::pair<std::string, int>> frecuencia{};
  std::ifstream texto_de_entrada{nombre_fichero};
  if (!texto_de_entrada) {
    std::cerr << "Oh no, ocurrió un error en " << nombre_fichero
              << " ¡No se pudo abrir el archivo!" << std::endl;
    return;
  }
  while (!texto_de_entrada.eof()) {
    texto_de_entrada >> palabra;
    bool encontrado{false};
    for (int i{0}; i < frecuencia.size(); ++i) {
      if (frecuencia[i].first == palabra) {
        ++frecuencia[i].second;
        encontrado = true;
        break;
      }
    }
    if (!encontrado)
      frecuencia.emplace_back(palabra, 1);
  }
  for (int i{0}; i < numero_de_palabras; ++i) {
    std::pair<std::string, int> mayor_frecuencia{"", 0};
    for (auto &elemento : frecuencia) {
      if (elemento.second > mayor_frecuencia.second) {
        mayor_frecuencia.first = elemento.first;
        mayor_frecuencia.second = elemento.second;
      }
    }
    std::cout << "La palabra " << mayor_frecuencia.first << " aparece "
              << mayor_frecuencia.second << " veces." << std::endl;
    for (auto it = frecuencia.begin(); it != frecuencia.end(); ++it) {
      if (it->first == mayor_frecuencia.first) {
        frecuencia.erase(it);
        break;
      }
    }
  }
}

/**
 * @brief Función main.
 * @param argc número de argumentos pasados al programa desde la línea de
 * comandos.
 * @param argv puntero a un array de cadenas de caracteres que contiene los
 * argumentos pasados al programa desde la línea de comandos.
 */
int main(int argc, char *argv[]) {
  Introduccion();
  int numero_de_parametros{2};
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros)) {
    return 1;
  }
  PalabrasMasFrecuentes(argv[1], std::stoi(argv[2]));
}