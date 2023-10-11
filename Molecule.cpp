#include "Molecule.h"

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