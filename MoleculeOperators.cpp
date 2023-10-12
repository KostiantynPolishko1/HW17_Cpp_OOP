#include "Molecule.h"

Molecule Molecule::operator+ (const Molecule& molecule)
{
	short countMolecule = {1};
	float sumAtomMass = this->sumAtomMass + molecule.sumAtomMass;
	std::string formulaElement = this->formulaElement + molecule.formulaElement;
	std::string nameElement = this->nameElement + molecule.nameElement;

	return Molecule(countMolecule, sumAtomMass, formulaElement, nameElement);
}
;
Molecule Molecule::operator+ (const Atom& atom1)
{
	short countMolecule(this->countMolecule);
	float sumAtomMass = this->sumAtomMass + atom1.getAtomMass();
	std::string formulaElement = this->formulaElement + atom1.getAtomSymbol();
	std::string nameElement = this->nameElement + atom1.getAtomName();

	return Molecule(countMolecule, sumAtomMass, formulaElement, nameElement);
}
;
Molecule Molecule::operator* (const short countMolecule)
{
	this->countMolecule *= (countMolecule < 1 ? 1 : countMolecule);
	this->sumAtomMass *= (countMolecule < 1 ? 1 : countMolecule);
	std::string formulaElement = this->formulaElement + std::to_string(countMolecule < 1 ? 1 : countMolecule);
	std::string nameElement = this->nameElement;

	return Molecule(countMolecule, sumAtomMass, formulaElement, nameElement);
}
;
Molecule Molecule::operator++()
{
	sumAtomMass += sumAtomMass / countMolecule;
	countMolecule++;

	return Molecule(countMolecule, sumAtomMass, formulaElement, nameElement);
}
;
Molecule Molecule::operator++ (int value)
{
	sumAtomMass += sumAtomMass / countMolecule;
	countMolecule++;

	return Molecule(countMolecule, sumAtomMass, formulaElement, nameElement);
}
Molecule Molecule::operator= (const Molecule& molecule)
{
	sumAtomMass = molecule.sumAtomMass;
	countMolecule = molecule.countMolecule;
	formulaElement = molecule.formulaElement;
	nameElement = molecule.nameElement;

	atom1 = molecule.atom1;

	return Molecule(countMolecule, sumAtomMass, formulaElement, nameElement);
}
bool Molecule::operator== (const Molecule& molecule)
{
	bool flag = sumAtomMass == molecule.sumAtomMass;
	bool flag2 = countMolecule == molecule.countMolecule;
	bool flag3 = formulaElement == molecule.formulaElement;
	bool flag4 = nameElement == molecule.nameElement;

	return (flag && flag2 && flag3 && flag4);
}
;
