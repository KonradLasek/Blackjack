#include <iostream>
#include<cstdlib>
#include<time.h>
#include"Kasyno.h"
#include"Gracz.h"
#include"Karta.h"

int main() {
	srand(time(NULL));
	Kasyno caesars_Palace;
	int a=1;
	while (a == 1) {
		caesars_Palace.graj();
		std::cout << "Rozpoczac nowa gre? 1-Tak, 2-Nie" << std::endl;
		while (1) {
			std::cin >> a;
			if (std::cin.fail() == true || (a !=1 && a != 2)) { 
				std::cout << "wykryto blad" << std::endl; 
				std::cin.clear(); 
				std::cin.ignore(256, '\n'); 
			} 
			else break;
		}
		caesars_Palace.zapisz();
		}
	system("PAUSE");
	return 0;
}