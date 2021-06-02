#include "GraczKomputerowy.h"
GraczKomputerowy::GraczKomputerowy() : Gracz() {
	pass = 0;
	odwaga = 1;
	rozmiar = 0;
}
bool GraczKomputerowy::decyzja() {
	int max;
	if (odwaga == 1)
		max = 16;
	if (odwaga == 2)
		max = 17;
	if (odwaga == 3)
		max = 18;
	if (zliczPunkty() < max) {
		pass = 0;
		return true;
	}
	if (zliczPunkty() >= max) {
		pass = 1;
		return false;
	}
}
void GraczKomputerowy::ustawOdwage(int _odwaga) {
	odwaga = _odwaga;
}
void GraczKomputerowy::ustawNazwe(int _iloscBotow) {
	nazwa[0] = 'B';
	nazwa[1] = 'o';
	nazwa[2] = 't';
	nazwa[3] = _iloscBotow+49;
	nazwa[4] = '\0';
}