#pragma once

#ifndef MOLECULE
#define MOLECULE

#include "Atom.h"

class Molecule
{
private:
	Atom _atom1;

	float _sumAtomMass;
	std::string _formulaElement;
	std::string _nameElement;

public:
	Molecule() : _sumAtomMass{}, _formulaElement{ "NO FORMULA" }, _nameElement{ "NO ELEMENT" } {
		_atom1 = {};
	}

	Molecule(const Atom& atom1, short numberAtom = 1) 
	{
		_sumAtomMass = (numberAtom < 1 ? 1 : numberAtom) * atom1.getAtomMass();
		_formulaElement = atom1.getAtomSymbol() + (numberAtom == 1 ? "" : std::to_string(numberAtom));
		_nameElement = atom1.getAtomName();
	}

	Molecule(float sumAtomMass, std::string formulaElement, std::string nameElement)
	{
		_sumAtomMass = sumAtomMass;
		_formulaElement = formulaElement;
		_nameElement = nameElement;
	}

	Molecule(const Molecule& molecule) : _atom1(molecule._atom1), _sumAtomMass(molecule._sumAtomMass),
		_formulaElement(molecule._formulaElement), _nameElement(molecule._nameElement) {}

#pragma region operators
	Molecule operator+ (const Molecule& molecule);

	Molecule operator+ (const Atom& atom1);

	float getMassMolecula() const;
	std::string getFormulaElement() const;
	std::string getNameElement() const;
}
;
#endif