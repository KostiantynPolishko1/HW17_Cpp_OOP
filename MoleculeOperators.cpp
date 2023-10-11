#include "Molecule.h"

Molecule Molecule::operator+ (const Molecule& molecule)
{
	float sumAtomMass = _sumAtomMass + molecule._sumAtomMass;
	std::string formulaElement = _formulaElement + molecule._formulaElement;
	std::string nameElement = _nameElement + molecule._nameElement;

	return Molecule(sumAtomMass, formulaElement, nameElement);
}
;
Molecule Molecule::operator+ (const Atom& atom1)
{
	float sumAtomMass = _sumAtomMass + atom1.getAtomMass();
	std::string formulaElement = _formulaElement + atom1.getAtomSymbol();
	std::string nameElement = _nameElement + atom1.getAtomName();

	return Molecule(sumAtomMass, formulaElement, nameElement);
}
;