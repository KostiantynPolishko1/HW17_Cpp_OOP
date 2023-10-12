#include "Molecule.h"

float Molecule::getCountMolecula() const
{
	return countMolecule;
}
;
float Molecule::getMassMolecula() const
{
	return sumAtomMass;
}
;
std::string Molecule::getFormulaElement() const
{
	return formulaElement;
}
;
std::string Molecule::getNameElement() const
{
	return nameElement;
}
;