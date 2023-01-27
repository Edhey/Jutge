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

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "program that store in f the most frequent factor of n, and" 
  << " store in q how many times it appears. If there is a tie, choose the"
  << " smallest factor."; 
  std::cout <<  std::endl;
  std::cout <<  "Print an integer number"; 
  std::cout << std::endl;
}

/** Funcon que lee un numero entero n y guarda su mayor factor y las veces que
  * aparece este al decomponerlo
  * 
  * @param[in] n numero entero
  * @param[in] f parametro por referencia que almacena el mayor factor de n
  * @param[in] q parametro por referencia que almacena las veces que aparece f
  * @return el menor factor más frecuentes y las veces que aparece
  */
void factor(int n, int& f, int& q) {
  f = 0, q = 0;
  int contador{0};
  for(int i{2}; n > 1; ++i) {
    while (n % i == 0) {
      ++contador;
      n /= i;
      if(n % i != 0 && contador > q) {
        f = i;
        q = contador;
        contador = 0;
      }
    }
  }
}

/*
int main() {
  int n;
  while (std::cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    std::cout << f << ' ' << q << std::endl;
  }
}
*/
