/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 14 2023
 * @brief Programa que imprime numeros aleatorios 
 * @bug No hay errores conocidos
 * @see 
 */
 
#include <iostream>
#include <random>
#include <ctime>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que imprime numeros aleatorios" << std::endl;
  std::cout << "Introduzca una: " << std::endl;
}

/**
 * @brief Función que genera un vector con n números aleatorios.
 * @param cantidad_de_numeros es la cantidad de números aleatorios del vector.
 * @return Devuelve un vector con n números aleatorios.
 */
std::vector<int> VectorEnteroAleatorio(int cantidad_de_numeros) {
  std::vector<int> vector_aleatorio(cantidad_de_numeros);
  // Semilla generadora
  std::srand(std::time(nullptr));
  for (auto& elemento : vector_aleatorio) {
    elemento = rand() % 300 + 1985;   // El número está en el rango 1985-2284
  }
  return vector_aleatorio;
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  for (auto& elemento : VectorEnteroAleatorio(10)) {
    std::cout << elemento << " ";
  }
  std::cout << std::endl;
  std::mt19937 generador(std::time(nullptr)); // Semilla para generar números aleatorios
  std::uniform_int_distribution<int> distribucion_int(0, 99); // Distribución uniforme entre 0 y 99
  int numero_aleatorio_int = distribucion_int(generador); // Genera un número aleatorio entre 0 y 99
  std::uniform_real_distribution<double> distribucion_double(0.0, 99.0); // Distribución uniforme entre 0.0 y 99.0
  double numero_aleatorio_double = distribucion_double(generador); // Genera un número aleatorio entre 0.0 y 99.0
  std::cout << numero_aleatorio_int << std::endl;
  std::cout << numero_aleatorio_double << std::endl;
  return 0;
}