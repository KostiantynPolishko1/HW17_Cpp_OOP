#pragma once

#ifndef MOLECULE
#define MOLECULE
#include "Atom.h"

class Molecule
{
private:
	Atom _atom1;

	float _sumAtomMass;
	string _formulaElement;
	string _nameElement;

public:
	Molecule() : _sumAtomMass{}, _formulaElement{ "NO FORMULA" }, _nameElement{ "NO ELEMENT" } {
		_atom1 = {};
	}
	;

	Molecule(Atom atom1) {
		_sumAtomMass = atom1.getAtomMass();
		_formulaElement = atom1.getAtomSymbol();
		_nameElement = atom1.getAtomName();
	}
	
	Molecule(float sumAtomMass, string formulaElement, string nameElement) 
	{
		_sumAtomMass = sumAtomMass;
		_formulaElement = formulaElement;
		_nameElement = nameElement;
	}

	Molecule(const Molecule& molecule) : _atom1(molecule._atom1), _sumAtomMass(molecule._sumAtomMass),
		_nameElement(molecule._nameElement) {}

#pragma region operators
	Molecule operator+ (const Molecule& molecule)
	{
		float sumAtomMass = _atom1.getAtomMass() + molecule._atom1.getAtomMass();
		string formulaElement = _atom1.getAtomSymbol() + molecule._atom1.getAtomSymbol();
		string nameElement = _atom1.getAtomName() + molecule._atom1.getAtomName();

		return Molecule(sumAtomMass, formulaElement, nameElement);
	}

	Molecule operator+ (const Atom& atom1)
	{
		float sumAtomMass = _sumAtomMass + atom1.getAtomMass();
		string formulaElement = _formulaElement + atom1.getAtomSymbol();
		string nameElement = _nameElement + atom1.getAtomName();

		return Molecule(sumAtomMass, formulaElement, nameElement);
	}

	float getMassMolecula() const;
}
;
#endif