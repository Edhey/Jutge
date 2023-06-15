#include <cmath>
#include <iomanip>
#include <iostream>

/**
 * @brief Función que lee un numero 'x' y un polinomio p() creando p(x).
 * @param variable es el número 'x' donde se evalua el polinomio.
 * @return Devuelve el polinomio evaluado en 'x'.
 */
double EvaluaPolinomio(double variable) {
  double polinomio{0}, resultado{0}, exponente{0};
  while (std::cin >> polinomio) {
    resultado += polinomio * pow(variable, exponente);
    exponente++;
  }
  return resultado;
}

int main() {
  double variable{};
  while (std::cin >> variable) {
    std::cout << std::fixed << std::setprecision(4) << EvaluaPolinomio(variable)
              << std::endl;
  }
  return 0;
}