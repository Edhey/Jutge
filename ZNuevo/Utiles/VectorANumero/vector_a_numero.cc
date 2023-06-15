#include <cmath>
#include <iostream>
#include <vector>

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
    numero *= pow(kNumero10, CantidadDeDigitos(elemento));
    numero += elemento;
  }
  return numero;
}

int main() {
  std::vector<int> vec{1, 2, 3, 49, 99, 822, 3, 1, 2};
  std::cout << VectorAEntero(vec) << std::endl;
  return 0;
}