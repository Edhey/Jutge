/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 06 2023
  * @brief Programa que, dada una cantidad de euros y céntimos, calcula el 
  * número mínimo de billetes y monedas necesarios para obtener esa cantidad. 
  * Hay monedas de 1, 2, 5, 10, 20 y 50 céntimos y de 1 y 2 euros, y billetes de
  * 5, 10, 20, 50, 100, 200 y 500 euros.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P81629_en
  */  

#include <iostream>

/** Función que imprime la introduccion del programa
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que, dada una cantidad de euros y céntimos, calcula el" 
  << " número mínimo de billetes y monedas necesarios para obtener esa cantidad."
  << " Hay monedas de 1, 2, 5, 10, 20 y 50 céntimos y de 1 y 2 euros, y billetes"
  << "de 5, 10, 20, 50, 100, 200 y 500 euros." << std::endl;
  std::cout <<  "Escribe una cantidad de euros y céntimos, separados por un "
  << "espacio, en ese orden: " << std::endl;
}

class Dinero {
 public:
  Dinero(int euros, int centimos) : euros_{euros}, centimos_{centimos} {};
  void RepresentacionEnBilletesYModenas();
 private:
  const int kBilleteDe500{500},
            kBilleteDe200{200},
            kBilleteDe100{100},
            kBilleteDe50{50},
            kBilleteDe20{20},
            kBilleteDe10{10},
            kBilleteDe5{5},
            kMonedaDe2Euros{2},
            kMonedaDe1Euro{1},
            kMonedaDe50Centimos{50},
            kMonedaDe20Centimos{20},
            kMonedaDe10Centimos{10},
            kMonedaDe5Centimos{5},
            kMonedaDe2Centimos{2}, 
            kMonedaDe1Centimo{1};
  int centimos_{},
      euros_{},
      billetes_de_500{0},
      billetes_de_200{0},
      billetes_de_100{0},
      billetes_de_50{0},
      billetes_de_20{0},
      billetes_de_10{0},
      billetes_de_5{0},
      moneda_de_2_euros{0},
      moneda_de_1_euro{0},
      moneda_de_50_centimos{0},
      moneda_de_20_centimos{0},
      moneda_de_10_centimos{0},
      moneda_de_5_centimos{0},
      moneda_de_2_centimos{0},
      moneda_de_1_centimo{0};
};

/** Función que imprime el número de billetes y monedas de cada tipo que se 
  * necesitan para representar el importe de la entrada, de forma que se 
  * minimiza el número total de billetes y monedas.
  * @param centimos cantidad de céntimos a evaluar.
  * @param euros cantidad de euros a evaluar.
  * @return 
  */
void Dinero::RepresentacionEnBilletesYModenas() {
  if (euros_ / kBilleteDe500 != 0) {
    billetes_de_500 = euros_ / kBilleteDe500;
    euros_ = euros_ % kBilleteDe500; 
  } 
  if (euros_ / kBilleteDe200 != 0) {
    billetes_de_200 = euros_ / kBilleteDe200;
    euros_ = euros_ % kBilleteDe200; 
  } 
  if (euros_ / kBilleteDe100 != 0) {
    billetes_de_100 = euros_ / kBilleteDe100;
    euros_ = euros_ % kBilleteDe100; 
  } 
  if (euros_ / kBilleteDe50 != 0) {
      billetes_de_50 = euros_ / kBilleteDe50;
    euros_ = euros_ % kBilleteDe50; 
  } 
  if (euros_ / kBilleteDe20 != 0) {
    billetes_de_20 = euros_ / kBilleteDe20;
    euros_ = euros_ % kBilleteDe20; 
  }
  if (euros_ / kBilleteDe10 != 0) {
    billetes_de_10 = euros_ / kBilleteDe10;
    euros_ = euros_ % kBilleteDe10; 
  }
  if (euros_ / kBilleteDe5 != 0) {
    billetes_de_5 = euros_ / kBilleteDe5;
    euros_ = euros_ % kBilleteDe5;
  }
  if (euros_ / kMonedaDe2Euros != 0) {
    moneda_de_2_euros = euros_ / kMonedaDe2Euros;
    euros_ = euros_ % kMonedaDe2Euros;
  }
  if (euros_ / kMonedaDe1Euro != 0) {
    moneda_de_1_euro = euros_ / kMonedaDe1Euro;
    euros_ = euros_ % kMonedaDe1Euro;
  }
  if (centimos_ / kMonedaDe50Centimos != 0) {
    moneda_de_50_centimos = centimos_ / kMonedaDe50Centimos;
    centimos_ = centimos_ - (kMonedaDe50Centimos * moneda_de_50_centimos);
  }
  if (centimos_ / kMonedaDe20Centimos != 0) {
    moneda_de_20_centimos = centimos_ / kMonedaDe20Centimos;
    centimos_ = centimos_ - (kMonedaDe20Centimos * moneda_de_20_centimos);
  }
  if (centimos_ / kMonedaDe10Centimos != 0) {
    moneda_de_10_centimos = centimos_ / kMonedaDe10Centimos;
    centimos_ = centimos_ - (kMonedaDe10Centimos * moneda_de_10_centimos);
  }
  if (centimos_ / kMonedaDe5Centimos != 0) {
    moneda_de_5_centimos = centimos_ / kMonedaDe5Centimos;
    centimos_ = centimos_ - (kMonedaDe5Centimos * moneda_de_5_centimos);
  }
  if (centimos_ / kMonedaDe2Centimos != 0) {
    moneda_de_2_centimos = centimos_ / kMonedaDe2Centimos;
    centimos_ = centimos_ - (kMonedaDe2Centimos * moneda_de_2_centimos);
  }
  if (centimos_ / kMonedaDe1Centimo != 0) {
    moneda_de_1_centimo = centimos_ / kMonedaDe1Centimo;
    centimos_ = centimos_ - (kMonedaDe1Centimo * moneda_de_1_centimo);
  }
  std::cout << "Bitllets de 500 euros: " << billetes_de_500 << std::endl;
  std::cout << "Bitllets de 200 euros: " << billetes_de_200 << std::endl;
  std::cout << "Bitllets de 100 euros: " << billetes_de_100 << std::endl;
  std::cout << "Bitllets de 50 euros: " << billetes_de_50 << std::endl;
  std::cout << "Bitllets de 20 euros: " << billetes_de_20 << std::endl;
  std::cout << "Bitllets de 10 euros: " << billetes_de_10 << std::endl;
  std::cout << "Bitllets de 5 euros: " << billetes_de_5 << std::endl;
  std::cout << "Monedes de 2 euros: " << moneda_de_2_euros << std::endl;
  std::cout << "Monedes de 1 euro: " << moneda_de_1_euro << std::endl;
  std::cout << "Monedes de 50 centims: " << moneda_de_50_centimos << std::endl;
  std::cout << "Monedes de 20 centims: " << moneda_de_20_centimos << std::endl;
  std::cout << "Monedes de 10 centims: " << moneda_de_10_centimos << std::endl;
  std::cout << "Monedes de 5 centims: " << moneda_de_5_centimos << std::endl;
  std::cout << "Monedes de 2 centims: " << moneda_de_2_centimos << std::endl;
  std::cout << "Monedes de 1 centim: " << moneda_de_1_centimo << std::endl;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int euros{}, centimos{};
  std::cin >> euros >> centimos;
  Dinero dinero(euros, centimos);
  dinero.RepresentacionEnBilletesYModenas();
}