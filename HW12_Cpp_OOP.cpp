#include "Atom.h"
#include "Molecule.h"
#include "OutPut.h"


int main(void) {

	cout << "\n1 operator of SUM";
	Molecule C(Atom(6)); // element = molecule + atom
	Atom O(8);

	cout << "\n2 Molecule + Atom\n";
	Molecule CO(C + O);
	moleculeOutPut(CO);

	cout << "\n3 Molecule + Molecule\n";
	Molecule CO2(C + Molecule(O, 2));
	moleculeOutPut(CO2);

	CO == CO2 ? cout << "\n4 CO == CO2\n" : cout << "\nCO != CO2\n";

	CO2 * 3;
	cout << "\n5 Molecule * Count\n";
	moleculeOutPut(CO2);

	++CO2;
	cout << "\n6 Molecule++\n";
	moleculeOutPut(CO2);

	CO2++;
	cout << "\n7 ++Molecule\n";
	moleculeOutPut(CO2);

	cout << "\n8 Molecule H2O\n";
	Molecule H2O(Molecule(Atom(1),2) + O);
	moleculeOutPut(H2O);

	H2O = CO2;
	cout << "\n9 Molecule =\n";
	moleculeOutPut(H2O);

	cout << "\n10 Molecule =, ++, *\n";
	H2O = ++(H2O * 3) + C;
	moleculeOutPut(H2O);

	return 0;
}
;