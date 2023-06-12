/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 27 2023
 * @brief Programa que lee un carácter y diga si es una letra, si es una vocal,
 * si es una consonante, si es una letra mayúscula, si es una letra minúscula y
 * si es un dígito.
 * @bug No hay errores conocidos
 * @see
 */

#include <iostream>

/**
 * @brief Función que imprime de que tipo de caracter se trata. 
 * @param c caracter a analizar.
 * @param s tipo de caracter.
 * @param b condición del caracter.
 */
void print_line(char c, std::string s, bool b) {
  std::cout << s << "('" << c << "') = ";
  if (b)
    std::cout << "true" << std::endl;
  else
    std::cout << "false" << std::endl;
}

/**
 * @brief Función que imprime la clasificación de un caracter.
 * @param character caracter que se clasifica.
 */
void CharacterClassification(char character) {
  bool condicion;
  std::string cadena{"letter"};
  if ((character >= 'a' && character <= 'z') ||
      (character >= 'A' && character <= 'Z'))
    condicion = true;
  else
    condicion = false;
  print_line(character, cadena, condicion);
  cadena = "vowel";
  if (character == 'a' || character == 'e' || character == 'i' ||
      character == 'o' || character == 'u' || character == 'A' ||
      character == 'E' || character == 'I' || character == 'O' ||
      character == 'U')
    condicion = true;
  else
    condicion = false;
  print_line(character, cadena, condicion);
  cadena = "consonant";
  if ((character != 'a' && character != 'e' && character != 'i' &&
       character != 'o' && character != 'u' && character != 'A' &&
       character != 'E' && character != 'I' && character != 'O' &&
       character != 'U') && ((character >= 'A' && character <= 'Z') ||
      (character >= 'a' && character <= 'z')))
    condicion = true;
  else
    condicion = false;
  print_line(character, cadena, condicion);
  cadena = "uppercase";
  if (character >= 'A' && character <= 'Z')
    condicion = true;
  else
    condicion = false;
  print_line(character, cadena, condicion);
  cadena = "lowercase";
  if (character >= 'a' && character <= 'z')
    condicion = true;
  else
    condicion = false;
  print_line(character, cadena, condicion);
  cadena = "digit";
  if (character >= '0' && character <= '9')
    condicion = true;
  else
    condicion = false;
  print_line(character, cadena, condicion);
}

int main() {
  char caracter_entrada;
  while (std::cin >> caracter_entrada) {
    CharacterClassification(caracter_entrada);
  }
  return 0;
}