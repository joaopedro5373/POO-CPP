#ifndef ENERGY_HPP
#define ENERGY_HPP

#include<string>

class PowerSource
{
public:
	std::string sourceType;
	//average energy production in MW/h for year for each MW of installed power
	float output;

	//the cost of installation for each MW of installed power
	float setupCost;

	//the maintenance cost for each MW of installed power
	float maintenanceCost;

	//the maximum capacity of installed power
	float InstalledPower;

	PowerSource(float installedPower = 1)
	{
		this->sourceType = "None";
		this->InstalledPower = installedPower;
		this->output = 0;
		this->setupCost = 0;
		this->maintenanceCost = 0;
	}
};

class SolarPannel :public PowerSource
{
public:
	SolarPannel(float installedPower = 1)
	{
		this->sourceType = "Solar Pannel Farm";
		this->InstalledPower = installedPower;
		this->output = this->InstalledPower * (1200 + (rand() % 500));
		this->setupCost = this->InstalledPower * (1500 + (rand() % 1500));
		this->maintenanceCost = this->InstalledPower * (10 + (rand() % 10));
	}
};

class WindTurbine :public PowerSource
{
public:
	WindTurbine(float installedPower = 1)
	{
		this->sourceType = "Wind Turbine Farm";
		this->InstalledPower = installedPower;
		this->output = this->InstalledPower * (2500 + (rand() % 1500));
		this->setupCost = this->InstalledPower * (1300 + (rand() % 1200));
		this->maintenanceCost = this->InstalledPower * (15 + (rand() % 15));
	}
};

class HidroPlant : public PowerSource
{
public:
	HidroPlant(float installedPower = 1)
	{
		this->sourceType = "Hydroelectric Power Plant";
		this->InstalledPower = installedPower;
		this->output = this->InstalledPower * (3500 + (rand() % 4500));
		this->setupCost = this->InstalledPower * (2000 + (rand() % 6000));
		this->maintenanceCost = this->InstalledPower * (5 + (rand() % 10));
	}
};

class NuclearPlant : public PowerSource
{
public:
	NuclearPlant(float installedPower = 1)
	{
		this->sourceType = "Nuclear Power Plant";
		this->InstalledPower = installedPower;
		this->output = this->InstalledPower * (7000 + (rand() % 1500));
		this->setupCost = this->InstalledPower * (5000 + (rand() % 4000));
		this->maintenanceCost = this->InstalledPower * (30 + (rand() % 30));
	}
};

class GeoThermalPlant : public PowerSource
{
public:
	GeoThermalPlant(float installedPower = 1)
	{
		this->sourceType = "Geothermal Power Plant";
		this->InstalledPower = installedPower;
		this->output = this->InstalledPower * (6500 + (rand() % 1500));
		this->setupCost = this->InstalledPower * (2500 + (rand() % 2500));
		this->maintenanceCost = this->InstalledPower * (10 + (rand() % 10));
	}
};

#endif  // !ENERGY_HPP