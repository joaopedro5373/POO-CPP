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
	std::cout << "Potência instalada: " << sP.InstalledPower << " MW\n";
	std::cout << "Produção Anual Estimada: " << sP.output << " MWh\n";
	std::cout << "Custo de instalação: R$ " << sP.setupCost << " \n";
	std::cout << "Custo de manutenção: R$ " << sP.maintenanceCost << " \n";
	std::cout << "\n";
	std::cout << "====== Fonte Eolica ======\n";
	std::cout << "Tipo: " << wT.sourceType << "\n";
	std::cout << "Potência instalada: " << wT.InstalledPower << " MW\n";
	std::cout << "Produção Anual Estimada: " << wT.output << " MWh\n";
	std::cout << "Custo de instalação: R$ " << wT.setupCost << " \n";
	std::cout << "Custo de manutenção: R$ " << wT.maintenanceCost << " \n";
	std::cout << "\n";
	std::cout << "====== Fonte Hidroeletrica ======\n";
	std::cout << "Tipo: " << hP.sourceType << "\n";
	std::cout << "Potência instalada: " << hP.InstalledPower << " MW\n";
	std::cout << "Produção Anual Estimada: " << hP.output << " MWh\n";
	std::cout << "Custo de instalação: R$ " << hP.setupCost << " \n";
	std::cout << "Custo de manutenção: R$ " << hP.maintenanceCost << " \n";
	std::cout << "\n";
	std::cout << "====== Fonte Nuclear ======\n";
	std::cout << "Tipo: " << nP.sourceType << "\n";
	std::cout << "Potência instalada: " << nP.InstalledPower << " MW\n";
	std::cout << "Produção Anual Estimada: " << nP.output << " MWh\n";
	std::cout << "Custo de instalação: R$ " << nP.setupCost << " \n";
	std::cout << "Custo de manutenção: R$ " << nP.maintenanceCost << " \n";
	std::cout << "\n";
	std::cout << "====== Fonte Geotermal ======\n";
	std::cout << "Tipo: " << gTp.sourceType << "\n";
	std::cout << "Potência instalada: " << gTp.InstalledPower << " MW\n";
	std::cout << "Produção Anual Estimada: " << gTp.output << " MWh\n";
	std::cout << "Custo de instalação: R$ " << gTp.setupCost << " \n";
	std::cout << "Custo de manutenção: R$ " << gTp.maintenanceCost << " \n";
	std::cout << "\n";

	return 0;
}