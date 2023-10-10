#include <iostream>
using std::string;
using std::cout;

#include "Atom.h"
#include "Molecule.h"


int main(void) {

	Atom O(16), H(1);
	Molecule O2(O);
	Molecule H2(H);

	Molecule H2O = H2 + O2; // element = molecule + molecule

	Atom C(14);
	Molecule CO2(O2 + C); // element = molecule + atom

	cout << CO2.getMassMolecula() << "\n";

	return 0;
}
;