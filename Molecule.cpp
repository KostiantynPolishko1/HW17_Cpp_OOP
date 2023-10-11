#include "Molecule.h"

float Molecule::getCountMolecula() const
{
	return _countMolecule;
}
;
float Molecule::getMassMolecula() const
{
	return _sumAtomMass;
}
;
std::string Molecule::getFormulaElement() const
{
	return _formulaElement;
}
;
std::string Molecule::getNameElement() const
{
	return _nameElement;
}
;