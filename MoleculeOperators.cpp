#include "Molecule.h"

Molecule Molecule::operator+ (const Molecule& molecule)
{
	Molecule temp;
	temp.countMolecule = {1};
	temp.sumAtomMass = this->sumAtomMass + molecule.sumAtomMass;
	temp.formulaElement = this->formulaElement + molecule.formulaElement;
	temp.nameElement = this->nameElement + molecule.nameElement;

	return temp;
}
;
Molecule Molecule::operator+ (const Atom& atom1)
{
	Molecule temp;
	temp.countMolecule = this->countMolecule;
	temp.sumAtomMass = this->sumAtomMass + atom1.getAtomMass();
	temp.formulaElement = this->formulaElement + atom1.getAtomSymbol();
	temp.nameElement = this->nameElement + atom1.getAtomName();

	return temp;
}
;
Molecule& Molecule::operator* (const short countMolecule)
{
	this->countMolecule *= (countMolecule < 1 ? 1 : countMolecule);
	this->sumAtomMass *= (countMolecule < 1 ? 1 : countMolecule);
	this->formulaElement += std::to_string(countMolecule < 1 ? 1 : countMolecule);
	this->nameElement;

	return *this;
}
;
Molecule& Molecule::operator++()
{
	this->sumAtomMass += sumAtomMass / countMolecule;
	this->countMolecule++;

	return *this;
}
;
Molecule& Molecule::operator++ (int value)
{
	Molecule temp(*this);
	this->sumAtomMass += sumAtomMass / countMolecule;
	this->countMolecule++;

	return temp;
}
;
void Molecule::operator= (const Molecule& molecule)
{
	this->sumAtomMass = molecule.sumAtomMass;
	this->countMolecule = molecule.countMolecule;
	this->formulaElement = molecule.formulaElement;
	this->nameElement = molecule.nameElement;
}
;
bool Molecule::operator== (const Molecule& molecule)
{
	return (this->sumAtomMass == molecule.sumAtomMass && this->countMolecule == molecule.countMolecule &&
		this->formulaElement == molecule.formulaElement && this->nameElement == molecule.nameElement);
}
;
