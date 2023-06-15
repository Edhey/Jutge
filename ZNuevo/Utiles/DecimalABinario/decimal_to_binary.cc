/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 14 2023
 * @brief Programa que pasa de binario a decimal.
 * @bug No hay errores conocidos
 * @see
 */

#include <cmath>
#include <iostream>
#include <vector>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que pasa de decimal a binario" << std::endl;
  std::cout << "Introduzca un número entero: " << std::endl;
}

/**
 * @brief Función que invierte el número que se le pasa.
 * @param numero número a invertir.
 * @return Devuelve el número inverso como vector.
 */
std::vector<int> ReverseNumber(int numero) {
  int const kNumero10{10};
  std::vector<int> inverso{};
  while (numero / kNumero10 != 0) {
    inverso.emplace_back(numero % kNumero10);
    numero /= kNumero10;
  }
  inverso.emplace_back(numero);
  return inverso;
}

/**
 * @brief Función que dado un número devuelve su cantidad de digitos.
 * @param numero número del que se devuelve su cantidad de dígitos.
 * @return Devuelve la cantidad de dígitos de un número dado.
 */
int CantidadDeDigitos(int numero) {
  const int kNumero10{10};
  int cantidad_de_digitos{0};
  while (numero) {
    ++cantidad_de_digitos;
    numero /= kNumero10;
  }
  return cantidad_de_digitos;
}

/**
 * @brief Función que pasa un vector de enteros a un número leyendo sus números
 * de izquierda a derecha.
 * @param vector Es el vector de enteros de donde se leen los números.
 * @return devuelve el número que forma el vector al leer sus elementos de
 * izquierda a derecha.
 */
long long VectorAEntero(std::vector<int> vector) {
  long long numero{};
  int const kNumero10{10};
  for (auto &&elemento : vector) {
    if (elemento == 0) {
      numero *= kNumero10;
    } else {
      numero *= pow(kNumero10, CantidadDeDigitos(elemento));
      numero += elemento;
    }
  }
  return numero;
}

/**
 * @brief Función que pasa de decimal a binario.
 * @param entero número entero.
 * @return Devuelve su equivalente binario como un vector.
 */
std::vector<int> EnteroABinario(int entero) {
  int const kNumero2{2}, kNumero10{10};
  int iteraciones{0}, contador_de_ceros{0};
  std::vector<int> binario{};
  while (entero) {
    if (entero % kNumero2 == 0) {
      binario.insert(binario.begin(), 0);
    } else {
      binario.insert(binario.begin(), 1);
    }
    entero /= kNumero2;
  }
  return binario;
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int numero{};
  while (std::cin >> numero) {
    for (auto &&elemento : EnteroABinario(numero)) {
      std::cout << elemento;
    }
    std::cout << std::endl;
    std::cout << VectorAEntero(EnteroABinario(numero)) << std::endl;
  }
  return 0;
}