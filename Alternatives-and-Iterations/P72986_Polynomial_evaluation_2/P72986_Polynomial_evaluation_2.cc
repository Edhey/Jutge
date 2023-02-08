/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 06 2023
  * @brief Programa que lee un número x y un polinomio p(z) = c0 * z^0 + 
  * c1 * z^1 + ⋯ + cn * z^n, y calcule p(x). La solución esperada utiliza la 
  * regla de Horner.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P72986_en
  */  

#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>

/** Función que imprime la introduccion del programa
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee un número x y un polinomio p(z) y calcule p(x)" 
  << std::endl;
  std::cout <<  "Escribe un número real x seguido de la descripción del "
  << "polinomio p(z): los coeficientes reales cn, cn-1, …, c0 en este orden: " 
  << std::endl;
}

/** Función que da el valor de un polinomio evaluado en un número real.
  * @param numero valor donde se evalua el polinimio
  * @return valor del polinio evaluado en dicho número
  */
void EvaluacionDePolinimio(const double variable_x) {
  double coeficiente{0}, exponente{0}, resultado{0};
  std::vector<double> polinomio{};
  while (std::cin >> coeficiente) {
    polinomio.emplace_back(coeficiente);
  }
  for (int i{1}; i <= polinomio.size(); ++i) {
    resultado += polinomio[polinomio.size() - i] * pow(variable_x, exponente);
    ++exponente;
  }
  std::cout << std::fixed << std::setprecision(4) << resultado
  << std::endl;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  double variable_x{};
  std::cin >> variable_x;
  EvaluacionDePolinimio(variable_x);
}