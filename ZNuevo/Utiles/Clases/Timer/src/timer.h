/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Declaración de los métodos de la clase Timer
 * @bug No hay errores conocidos
 * @see
 */

#ifndef TIMER_H
#define TIMER_H

#include <chrono>
#include <iostream>

class Timer {
 public:
  Timer() : inicio_(std::chrono::steady_clock::now()) {}
  ~Timer();
  double Elapsed();
  void Reset();
 private:
  std::chrono::time_point<std::chrono::steady_clock> inicio_ =
      std::chrono::steady_clock::now();
};

bool CompruebaParametrosCorrectos(const int argc, char *argv[],
                                  const int kCorrectNumber);
void Introduccion();
#endif