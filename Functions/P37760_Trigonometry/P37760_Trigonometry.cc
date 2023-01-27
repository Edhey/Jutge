/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 17 2022
  * @brief program that reads a sequence of angles in degrees, and prints their
  * @sine and their cosine.
  * @bug Al imprimir el cos 90º el output es -0.000000; corregido con Funcion
  * @see https://jutge.org/problems/P37760_en
  */

#include <iostream>
#include <cmath>
#include <iomanip>

double ConversionGradosRadian(double grados) {
  double const KPi = 3.14159265359;
  double radian;
  radian = grados * KPi / 180;
  return radian;
}

double Coseno(const double radian) {
  double coseno = cos(radian);
  if(sqrt(coseno*coseno) < 0.00001) {
    coseno *= -1; 
    }
  return coseno;
}

double Seno(const double radian) {
  double seno = sin(radian);
  return seno;
}

/*
double Correccion0NegativoCoseno(Coseno) {
  if(coseno == -0.000000) {
    coseno *= -1; 
  }
return coseno
}
*/

int main() {
  double grados;
  while(std::cin >> grados) {
    std::cout << std::fixed << std::setprecision(6) <<
    Seno(ConversionGradosRadian(grados)) << " ";
    std::cout << Coseno(ConversionGradosRadian(grados))
    << std::endl;
  }
}
