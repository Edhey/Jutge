/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 14 2023
  * @brief Programa que lee dos palabras y dice su orden lexicográfico.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P90226_en
  */

#include <iostream>
#include <string>

/** Función que imprime la introduccion del programa.
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee dos palabras y dice su orden lexicográfico.";
  std::cout <<  std::endl;
  std::cout <<  "Escribe dos palabras: "; 
  std::cout << std::endl;
}

/** @brief Función que lee dos palabras e imprime su orden lexicográfico.
  * @param palabra1 string con una de las palabras a evaluar.
  * @param palabra2 string con la otra palabras a evaluar.
  */
void OrdenLexicografico(std::string& palabra1, std::string& palabra2) {
  if (palabra1 == palabra2) {
    std::cout << palabra1 << " = " << palabra2 << std::endl;
    return;
  } else {
    for (int i{0}; i < palabra1.size(); ++i) {
      if (palabra1[i] > palabra2[i]) {
        std::cout << palabra1 << " > " << palabra2 << std::endl;
        return;
      } else if (palabra1[i] < palabra2[i]) {
        std::cout << palabra1 << " < " << palabra2 << std::endl;
        return;
      }
    }
    std::cout << palabra1 << " < " << palabra2 << std::endl; 
    // Si esta línea se ejecuta significa que ninguno de los returns anteriores 
    // ha sido llamado, con lo cual la primera palabra tiene todas sus letras 
    // iguales a la segunda, pero es de un tamaño menor.
  }
}

int main() {
  // Introduccion();
  std::string palabra1{}, palabra2{};
  std::cin >> palabra1 >> palabra2;
  OrdenLexicografico(palabra1, palabra2);
}