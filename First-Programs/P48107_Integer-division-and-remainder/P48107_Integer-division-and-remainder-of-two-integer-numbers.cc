/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P48107_integer_division_and_remainder_of_two_natural_numbers.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Oct 29 2022
  * @brief programa que lee dos números naturales a y b, con b > 0, e imprime
  * la división entera y el resto de a dividido por b. 
  * @bug No hay errores conocidos
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  * @see https://jutge.org/problems/P48107
  */

  #include<iostream>
  
  int main(){
  int a ,b;
  //std::cout << "Este programa solicita 2 numeros naturales e imprime la";
  //std::cout << " división entera y el resto del primero entre el segundo";
  //std::cout << std::endl;
  //std::cout << "Escriba dos números naturales, siendo el último";
  //std::cout << " necesariamente distinto a 0:" << std::endl;
  std::cin >> a >> b;
  //std::cout << a << " / " << b << " = ";
  std::cout << a / b << " ";
  //std::cout << a << " % " << b << " = ";
  std::cout << a % b << std::endl;
  }