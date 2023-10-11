#include "OutPut.h"

void moleculeOutPut(const Molecule& molecule)
{
	cout << molecule.getMassMolecula() << "\n";
	cout << molecule.getFormulaElement() << "\n";
	cout << molecule.getNameElement() << "\n";
}
