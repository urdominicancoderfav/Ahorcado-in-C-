#include <iostream>
#include <vector>
#include <cmath>

int main () {
  double pizzas_num; 
  double pizzas_person;

  std::cout << "Bienvenido a tu repartidor de pizzas favorito." << "\n";

  std::cout << "Cuantas pizzas quiere?" << "\n";
  std::cin >> pizzas_num;

  std::cout << "Para cuantas personas son repartidas las pizzas?" << "\n";
  std::cin >> pizzas_person;

  std::cout << "Bien, eso significaria que tendrias " << 8 * pizzas_num << " pedazos de pizza que seran repartidos entre " << pizzas_person << " personas, lo que daria un resultado de que tendrias que repartir " << lround((8 * pizzas_num) / pizzas_person) << " pedazos de pizza a cada uno.";


  


}

