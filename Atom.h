#pragma once

#ifndef ATOM_H
#define ATOM_H

#include "DataBase.h"
#include <string>

class Atom
{
private:
	std::string _atomSymbol;
	std::string _atomName;
	short _atomNumber;
	short _atomNProton;
	short _atomNNeitron;
	short _atomNElectron;
	short _atomEnergyLevel;
	float _atomMass;
	short *_arrElectron;

	short initEnergyLevel(short atomNumber);
	short* initElectronLevel(short* _arrElectron, short _atomNumber, short _atomEnergyLevel);


public:
	Atom() : _atomSymbol{}, _atomName{}, _atomNumber{}, _atomEnergyLevel{}, _atomMass{},
		_arrElectron{ nullptr }, _atomNProton{}, _atomNNeitron{}, _atomNElectron{}
	{ }

	Atom(short atomNumber)
	{
		if (atomNumber >= MIN && atomNumber <= MAX) {
			_atomNumber = atomNumber;
			_atomNProton = atomNumber;
			_atomNElectron = atomNumber;
			_atomEnergyLevel = initEnergyLevel(atomNumber);

			_atomSymbol = arrAtomName[_atomNumber-1][0];
			_atomName = arrAtomName[_atomNumber-1][1];
			_atomMass = arrAtomMass[_atomNumber-1];
			_atomNNeitron = (short)(_atomMass)-_atomNumber;
			_arrElectron = initElectronLevel(_arrElectron, _atomNumber, _atomEnergyLevel);
		}
		else
			Atom();
	}

	~Atom() {
		if (_arrElectron) {
			delete[] _arrElectron;
			_arrElectron = nullptr;
		}
	}

	std::string getAtomSymbol() const;
	std::string getAtomName() const;
	short getAtomNumber();
	short getAtomNProton();
	short getAtomNNeitron();
	short getAtomNElectron();
	short getAtomEnergyLevel();
	float getAtomMass() const;
	short* getArrElectron();

	void setAtomNNeitron(short atomNNeitron);
}
;
#endif