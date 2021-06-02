#pragma once
#include "Gracz.h"
class GraczKomputerowy : public Gracz {
private:
	int odwaga;
public:
	GraczKomputerowy();
	GraczKomputerowy(int _odwaga) : Gracz(), odwaga(_odwaga) {}
	virtual bool decyzja();
	int getOdwaga() { return odwaga; }
	void ustawOdwage(int _odwaga);
	void ustawNazwe(int _iloscBotow);
};