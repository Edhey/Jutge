/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Dec 27 2022
  * @brief Imprime si un número es primo perfecto.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P90664_en
  */
 
#include <iostream>
#include <cmath>

/**
 * @brief Función que decide si un número es primo o no.
 * @param numero es el número a analizar.
 * @return true si es primo.
 *         false si no es primo.
 */
bool Primality(const int numero) {
  if (numero <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(numero);) {
    if (numero % i == 0) {
      return false;
    }
    if (i == 2)
      ++i;
    else
      i = i + 2;
  }
  return true;
}

/** @brief Funcion that prints if a number is a perfect prime or not.
  * @param numero Number that could be a perfect prime.
  */
void IsPerfectPrime(int numero) {
  int const kNumero10{10};
  if (numero == 0) {
    return;
  }
  while (Primality(numero) == true && numero / kNumero10 != 0) {
  int suma = 0;
    while ((numero / kNumero10) != 0) {
      suma += (numero % kNumero10);
	    numero /= kNumero10;
    }
    numero += suma;
  } 
  if (Primality(numero) == true) {
    std::cout << "yes" << '\n';
  } else {
		std::cout << "no" << '\n';
	}
}

/** @brief Main function
  */
int main() {
	int numero{1};
  while (numero != 0) {
    std::cin >> numero;
		IsPerfectPrime(numero);
	}
}