//
//  main.cpp
//  Obliczenia pola figur geometrycznych
//
//  Created by Marcin Magiera on 16/07/2020.
//  Copyright © 2020 Magme Agency. All rights reserved.
//

#include <iostream>

int a;
int h;
int result;

int main() {
    
        std::cout << "Program do obliczania pola figury Trójkąta\n";
        std::cout << "Podaj wartosć a: ";
        std::cin >> a;
        std::cout << "Podaj wartość dla h: ";
        std::cin >> h;
    
    if(a > 0 and h > 0){
        result = (a * h)/ 2;
        std::cout << "Pole powrzchni trójkąta to: ";
        std::cout << result;
    }else{
        std::cout << " Wartości muszą być dodatnie";
    }
           
           

        

    
   
    
}
