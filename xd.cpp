#include<vector>
#include<cmath>
#include <string>
#include <iostream>
#include <stdlib.h>


int main () {
    std::string hola = "AMEN";
    std::string answer1;
    std::string answer2;
    std::string answer3;
    std::string answer4;
    int tries = 3;
    int score = 0;


    std::cout << "Bienvenido al juego del ahorcado." << "\n" << "Adivine la palabra:" << "\n";

            std::cout << "A _ _ _" << "\n";
            std::cin >> answer1;

        if (answer1 == "M") {
            std::cout << "A M _ _" << "\n"; 
            score++;
        }

        else if (answer1 != "M") {
           
            while (score == 0) {
            tries--;
            std::cout << "Te quedan " << tries << " intentos." << "\n";
            std::cout << "A _ _ _" << "\n";
            std::cin >> answer1;
             if (tries <= 0) {
                break;
                abort();
            }

            }
            }

                std::cin >> answer2;

        if (answer2 == "E") {
                std::cout << "A M E _"<< "\n"; 
                score++;
            }

        else if (answer2 != "E"){
            while (score == 1) {
            tries--;
            std::cout << "Te quedan " << tries << " intentos." << "\n";
            std::cout << "A M _ _" << "\n";
            std::cin >> answer2;
             if (tries <= 0) {
                break;
                abort();
            }
            }
            }

            std::cin >> answer3;

        if (answer3 == "N") {
                std::cout << "A M E N" << "\n"; 
                score++;
            }

        if (score >= 3) {
                std::cout << "Felicidades, has ganado.";
            }

        else if (answer3 != "N"){

            while (score == 2) {
            tries--;
            std::cout << "Te quedan " << tries << " intentos." << "\n";
            std::cout << "A M E _" << "\n";
            std::cin >> answer3;
             if (tries <= 0) {
                break;
                abort();
            }
            }
            }

            if (tries <= 0) {
                std::cout << "Lo siento, no lo has logrado.";
                abort();
            }
       
        

       
    

    
    

}