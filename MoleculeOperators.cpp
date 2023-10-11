#include "Molecule.h"

Molecule Molecule::operator+ (const Molecule& molecule)
{
	short countMolecule = {1};
	float sumAtomMass = _sumAtomMass + molecule._sumAtomMass;
	std::string formulaElement = _formulaElement + molecule._formulaElement;
	std::string nameElement = _nameElement + molecule._nameElement;

	return Molecule(countMolecule, sumAtomMass, formulaElement, nameElement);
}
;
Molecule Molecule::operator+ (const Atom& atom1)
{
	short countMolecule(_countMolecule);
	float sumAtomMass = _sumAtomMass + atom1.getAtomMass();
	std::string formulaElement = _formulaElement + atom1.getAtomSymbol();
	std::string nameElement = _nameElement + atom1.getAtomName();

	return Molecule(countMolecule, sumAtomMass, formulaElement, nameElement);
}
;
Molecule Molecule::operator* (const short count)
{
	_countMolecule *= (count < 1 ? 1 : count);
	_sumAtomMass *= (count < 1 ? 1 : count);
	std::string formulaElement = std::to_string(count < 1 ? 1 : count) + _formulaElement;
	std::string nameElement = _nameElement;

	return Molecule(_countMolecule, _sumAtomMass, formulaElement, nameElement);
}
;
Molecule Molecule::operator++()
{
	_sumAtomMass += _sumAtomMass / _countMolecule;
	_countMolecule++;

	return Molecule(_countMolecule, _sumAtomMass, _formulaElement, _nameElement);
}
;
Molecule Molecule::operator++(int value)
{
	_sumAtomMass += _sumAtomMass / _countMolecule;
	_countMolecule++;

	return Molecule(_countMolecule, _sumAtomMass, _formulaElement, _nameElement);
}
Molecule Molecule::operator=(const Molecule& molecule)
{
	_sumAtomMass = molecule._sumAtomMass;
	_countMolecule = molecule._countMolecule;
	_formulaElement = molecule._formulaElement;
	_nameElement = molecule._nameElement;

	_atom1 = molecule._atom1;

	return Molecule(_countMolecule, _sumAtomMass, _formulaElement, _nameElement);
}
;
