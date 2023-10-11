#pragma once

#ifndef MOLECULE
#define MOLECULE

#include "Atom.h"

class Molecule
{
private:
	Atom _atom1;
	short _countMolecule;
	float _sumAtomMass;
	std::string _formulaElement;
	std::string _nameElement;

public:
	Molecule() : _atom1{}, _sumAtomMass{}, _countMolecule{}, _formulaElement{ "NO FORMULA" }, _nameElement{ "NO ELEMENT" } {};

	Molecule(const Atom& atom1, const short numberAtom = 1) : _countMolecule(1)
	{
		_sumAtomMass = (numberAtom < 1 ? 1 : numberAtom) * atom1.getAtomMass();
		_formulaElement = atom1.getAtomSymbol() + (numberAtom == 1 ? "" : std::to_string(numberAtom));
		_nameElement = atom1.getAtomName();
	}

	Molecule(short countMolecule, float sumAtomMass, std::string formulaElement, std::string nameElement)
	{
		_countMolecule = countMolecule;
		_sumAtomMass = sumAtomMass;
		_formulaElement = formulaElement;
		_nameElement = nameElement;
	}

	Molecule(const Molecule& molecule) : _atom1(molecule._atom1), _countMolecule(molecule._countMolecule), 
		_sumAtomMass(molecule._sumAtomMass),
		_formulaElement(molecule._formulaElement), _nameElement(molecule._nameElement) {}

#pragma region operators
	Molecule operator+ (const Molecule& molecule);
	Molecule operator+ (const Atom& atom1);
	Molecule operator* (const short multiply);
	Molecule operator++ ();
	Molecule operator++ (int value);

	float getCountMolecula() const;
	float getMassMolecula() const;
	std::string getFormulaElement() const;
	std::string getNameElement() const;
}
;
#endif