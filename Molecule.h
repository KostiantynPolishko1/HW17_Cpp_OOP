#pragma once

#ifndef MOLECULE
#define MOLECULE

#include "Atom.h"

class Molecule
{
private:
	Atom atom1;
	short countMolecule;
	float sumAtomMass;
	std::string formulaElement;
	std::string nameElement;

public:
	Molecule() : atom1{}, sumAtomMass{}, countMolecule{}, formulaElement{ "NO FORMULA" }, nameElement{ "NO ELEMENT" } {};

	Molecule(const Atom& atom1, const short numberAtom = 1) : countMolecule(1)
	{
		sumAtomMass = (numberAtom < 1 ? 1 : numberAtom) * atom1.getAtomMass();
		formulaElement = atom1.getAtomSymbol() + (numberAtom == 1 ? "" : std::to_string(numberAtom));
		nameElement = atom1.getAtomName();
	}

	Molecule(const Molecule& molecule) : atom1(molecule.atom1), countMolecule(molecule.countMolecule), 
		sumAtomMass(molecule.sumAtomMass),
		formulaElement(molecule.formulaElement), nameElement(molecule.nameElement) {}

#pragma region operators
	Molecule operator+ (const Molecule& molecule);
	Molecule operator+ (const Atom& atom1);
	Molecule& operator* (const short multiply);
	Molecule& operator++ ();
	Molecule& operator++ (int value);
	void operator= (const Molecule& molecule);
	bool operator==(const Molecule& molecule);

	float getCountMolecula() const;
	float getMassMolecula() const;
	std::string getFormulaElement() const;
	std::string getNameElement() const;
}
;
#endif