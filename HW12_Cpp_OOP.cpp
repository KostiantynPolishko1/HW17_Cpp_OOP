
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

	Molecule CO2_3(CO2 * 3);
	cout << "\nMolecule * Count\n";
	moleculeOutPut(CO2_3);


	return 0;
}
;