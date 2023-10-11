#include "Atom.h"
#include "Molecule.h"
#include "OutPut.h"


int main(void) {

	cout << "\noperator of SUM";
	Molecule C(Atom(6)); // element = molecule + atom
	Atom O(8);
	Molecule CO(C + O);
	Molecule CO2(C + Molecule(O, 2));

	CO == CO2 ? cout << "\nCO == CO2\n" : cout << "\nCO != CO2\n";

	cout << "\nMolecule + Atom\n";
	moleculeOutPut(CO);
	cout << "\nMolecule + Molecule\n";
	moleculeOutPut(CO2);

	Molecule CO2_3(CO2 * 3);
	cout << "\nMolecule * Count\n";
	moleculeOutPut(CO2_3);

	++CO2;
	cout << "\nMolecule++\n";
	moleculeOutPut(CO2);

	CO2++;
	cout << "\n++Molecule\n";
	moleculeOutPut(CO2);

	cout << "\nMolecule H2O\n";
	Molecule H2O(Molecule(Atom(1),2) + O);
	moleculeOutPut(H2O);

	H2O = CO2;
	cout << "\nMolecule =\n";
	moleculeOutPut(H2O);

	cout << "\nMolecule =, ++, *\n";
	H2O = ++(H2O * 3) + C;
	moleculeOutPut(H2O);

	return 0;
}
;