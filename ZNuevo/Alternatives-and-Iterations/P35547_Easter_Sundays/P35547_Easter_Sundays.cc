/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 14 2023
  * @brief Programa que imprime el día y el mes del Domingo de Resurrección de 
  * cada año.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P35547_en
  */

#include <iostream>

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que imprime el día y el mes del Domingo de Resurrección"
  << " de cada año.";
  std::cout <<  std::endl;
  std::cout << "Escribe un año entre 1800 y 9999: "; 
  std::cout << std::endl;
}

void DomingoDePascua(int anyo) {
  int k, x, b, c, p, q, y, z, n, e, domingo_de_pascua_dia,
  domingo_de_pascua_mes; // Se utilizan estos nombres para las variables según lo indicado por el problema.
  k = anyo / 100;
  x = anyo % 19;
  b = anyo % 4;
  c = anyo % 7;
  q = k / 4;
  p= (13 + 8 * k) / 25;
  y = (15 - p + k - q) % 30;
  z = (19 * x + y) % 30;
  n = (4 + k - q) % 7;
  e = (2 * b + 4 * c + 6 * z + n) % 7;
  if (z + e <= 9) {
    domingo_de_pascua_dia = 22 + z + e;
    domingo_de_pascua_mes = 3;
  } else if (z == 29 && e == 6) {
    domingo_de_pascua_dia = 19;
    domingo_de_pascua_mes = 4;
  } else if (z == 28 && e == 6 && x > 10) {
    domingo_de_pascua_dia = 18;
    domingo_de_pascua_mes = 4;
  } else {
     domingo_de_pascua_dia = z + e - 9;
     domingo_de_pascua_mes = 4;
  }
  std::cout << domingo_de_pascua_dia << "/" << domingo_de_pascua_mes << std::endl;
}

int main() {
  // Introduccion();
  int anyo;
  while (std::cin >> anyo) {
    if (anyo < 1800 || anyo > 9999) {
      // std::cout << "Fecha inválida\n" << "Escribe un año entre 1800 y 9999: "; 
      std::cin >> anyo;
    } 
    DomingoDePascua(anyo);
  }
}