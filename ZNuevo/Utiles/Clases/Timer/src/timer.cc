/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Definición de los métodos de la clase Timer
 * @bug No hay errores conocidos
 * @see
 */
#include "timer.h"

#include <cstring>

/**
 * @brief Destructor de la clase Timer.
 */
Timer::~Timer() {}

/**
 * @brief Función que devuelve el tiempo transcurrido desde la última vez que se
 * inicializó el objeto Timer o desde la última vez que se llamó a Reset().
 * @return La diferencia entre el tiempo transcurrido al principio y al llamar a
 * esta función.
 */
double Timer::Elapsed() {
  std::chrono::time_point<std::chrono::steady_clock> tiempo_transcurrido{
      std::chrono::steady_clock::now()};
  return (std::chrono::duration_cast<std::chrono::milliseconds>(
              tiempo_transcurrido - inicio_).count());
}

/**
 * @brief Función que resetea el valor del cronómetro.
 */
void Timer::Reset() {
  inicio_ = std::chrono::steady_clock::now();
}

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa contenedor de la clase Timer que toma medidas del "
               "tiempo de ejecución que consume un determinado fragmento de "
               "código. Un programa que utilice esta clase podría tener "
               "sentencias que se utilizen para medir cuánto tiempo consume "
               "una función al ser invocada."
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
    std::cerr << "Pruebe " << argv[0] << " --help para más información"
              << std::endl;
    return false;
  }
  return true;
}