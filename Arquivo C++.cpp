#include<string>
#include<locale>
#include<iostream>


#include"Energy.hpp"

int main() {
	setlocale(LC_ALL, "pt-BR.UTF_8");
	PowerSource pS;
	SolarPannel sP;
	WindTurbine wT;
	HidroPlant hP;
	NuclearPlant nP;
	GeoThermalPlant gTp;

	sP.InstalledPower = 5;
	wT.InstalledPower = 5;

	std::cout << "====== Fonte Solar ======\n";
	std::cout << "Tipo: " << sP.sourceType << "\n";
	std::cout << "Pot�ncia instalada: " << sP.InstalledPower << " MW\n";
	std::cout << "Produ��o Anual Estimada: " << sP.output << " MWh\n";
	std::cout << "Custo de instala��o: R$ " << sP.setupCost << " \n";
	std::cout << "Custo de manuten��o: R$ " << sP.maintenanceCost << " \n";
	std::cout << "\n";
	std::cout << "====== Fonte Eolica ======\n";
	std::cout << "Tipo: " << wT.sourceType << "\n";
	std::cout << "Pot�ncia instalada: " << wT.InstalledPower << " MW\n";
	std::cout << "Produ��o Anual Estimada: " << wT.output << " MWh\n";
	std::cout << "Custo de instala��o: R$ " << wT.setupCost << " \n";
	std::cout << "Custo de manuten��o: R$ " << wT.maintenanceCost << " \n";
	std::cout << "\n";
	std::cout << "====== Fonte Hidroeletrica ======\n";
	std::cout << "Tipo: " << hP.sourceType << "\n";
	std::cout << "Pot�ncia instalada: " << hP.InstalledPower << " MW\n";
	std::cout << "Produ��o Anual Estimada: " << hP.output << " MWh\n";
	std::cout << "Custo de instala��o: R$ " << hP.setupCost << " \n";
	std::cout << "Custo de manuten��o: R$ " << hP.maintenanceCost << " \n";
	std::cout << "\n";
	std::cout << "====== Fonte Nuclear ======\n";
	std::cout << "Tipo: " << nP.sourceType << "\n";
	std::cout << "Pot�ncia instalada: " << nP.InstalledPower << " MW\n";
	std::cout << "Produ��o Anual Estimada: " << nP.output << " MWh\n";
	std::cout << "Custo de instala��o: R$ " << nP.setupCost << " \n";
	std::cout << "Custo de manuten��o: R$ " << nP.maintenanceCost << " \n";
	std::cout << "\n";
	std::cout << "====== Fonte Geotermal ======\n";
	std::cout << "Tipo: " << gTp.sourceType << "\n";
	std::cout << "Pot�ncia instalada: " << gTp.InstalledPower << " MW\n";
	std::cout << "Produ��o Anual Estimada: " << gTp.output << " MWh\n";
	std::cout << "Custo de instala��o: R$ " << gTp.setupCost << " \n";
	std::cout << "Custo de manuten��o: R$ " << gTp.maintenanceCost << " \n";
	std::cout << "\n";

	return 0;
}