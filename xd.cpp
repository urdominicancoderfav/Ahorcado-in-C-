#include <vector>
#include <cmath>
#include <string>
#include <iostream>
#include <stdlib.h>


int main () {
    std::string hola = "AMEN";
    std::string answer1;
    std::string answer2;
    std::string answer3;
    std::string answer4;
    int tries = 4;
    int score = 0;


    std::cout << "Bienvenido al juego del ahorcado." << "\n" << "Adivine la palabra:" << "\n";

            std::cout << "A _ _ _" << "\n";
            std::cin >> answer1;

            while (answer1 != "M") {
            tries--;
            std::cout << "Te quedan " << tries << " intentos." << "\n";
            std::cout << "A _ _ _" << "\n";
            std::cin >> answer1;
             if (answer1 == "M") {
                std::cout << "A M _ _" << "\n"; 
                score++;
                std::cin >> answer1;
                break;
            }
             if (tries <= 0) {
                break;
                abort();
            }

            }
            // el if está dentro del while porque de esta forma el while reconoce que el if es parte de el mismo
            // osea el while

            while (answer2 != "E") {
            tries--;
            std::cout << "Te quedan " << tries << " intentos." << "\n";
            std::cout << "A M _ _" << "\n";
            std::cin >> answer2;
             if (answer2 == "E") {
                std::cout << "A M E _"<< "\n"; 
                score++;
                std::cin >> answer2;
                break;
            }
             if (tries <= 0) {
                break;
                abort();
            }

            }
            // el if está dentro del while porque de esta forma el while reconoce que el if es parte de el mismo
            // osea el while

            while (answer3 != "N") {
            tries--;
            std::cout << "Te quedan " << tries << " intentos." << "\n";
            std::cout << "A M E _" << "\n";
            std::cin >> answer3;
            if (answer3 == "N") {
                 std::cout << "A M E N" << "\n"; 
                 score++;
                break;
            }
             if (tries <= 0) {
                break;
                abort();
            }
            }
        
            if (tries <= 0) {
                std::cout << "Lo siento, no lo has logrado.";
                abort();
            }
}