
#include "Atom.h"
#include "Molecule.h"
#include "OutPut.h"


int main(void) {

	cout << "\noperator of SUM";
	Molecule C(Atom(6)); // element = molecule + atom
	Atom O(8);
	Molecule CO(C + O);
	Molecule CO2(C + Molecule(O, 2));
	cout << "\nMolecule + Atom\n";
	moleculeOutPut(CO);
	cout << "\nMolecule + Molecule\n";
	moleculeOutPut(CO2);

	return 0;
}
;