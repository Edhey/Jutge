/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Dec 1 2022
 * @brief program that store in f the most frequent factor of n, and store in
 * q how many times it appears. If there is a tie, choose the smallest factor.
 * For instance, if called with n = 450 = 21 · 32 · 52, the values after the
 * call must be f =3 and q = 2.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P21281_en
 */

#include <iostream>

/** Funcon que lee un numero entero n y guarda su mayor factor y las veces que
 * aparece este al decomponerlo
 *
 * @param[in] n numero entero.
 * @param[in] f parametro por referencia que almacena el mayor factor de n.
 * @param[in] q parametro por referencia que almacena las veces que aparece f.
 * @return el menor factor más frecuentes y las veces que aparece.
 */
void factor(int n, int& f, int& q) {
  int numero{n};
  f = 0, q = 0;
  for (int i{2}; i <= n / 2; ++i) {
    int contador{0};
    while (numero % i == 0) {
      ++contador;
      numero /= i;
    }
    if (contador > q) {
      f = i;
      q = contador;
    }
  }
  if (q == 0) {
    q = 1;
    f = n;
  }
}

/**
 * @brief Función main
 */
int main() {
  int n;
  while (std::cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    std::cout << f << ' ' << q << std::endl;
  }
}
