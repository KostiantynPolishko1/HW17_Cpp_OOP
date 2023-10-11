#pragma once
#ifndef DATABASE_H
#define DATABASE_H

const float arrAtomMass[]{ 1.00797f, 4.00260f, 6.941f, 9.01218f, 10.81f, 12.011f, 14.0067f,
15.9994f, 18.998403f, 20.179f, 22.98977f, 24.305f, 26.98154f, 28.0855f,  30.97376f, 32.06f, 35.453f, 39.948f, 39.098f };

const short arrAtomPeriod[][2]{ {1, 2}, {3, 10}, {11, 18}, {19, 36} };

const char arrAtomName[][3][20]{ {"H", "Hydrogen"}, {"He", "Helium"}, {"Li", "Lithium"}, {"Be", "Beryllium"},
	{"B", "Boron"}, {"C", "Carbon"}, {"N", "Nitrogen"}, {"O", "Oxygen"}, {"F", "Fluorine"}, {"Ne", "Neon"},
	{"Na", "Sodium"}, {"Mg", "Magnesium"}, {"Al", "Aluminum"}, {"Si", "Silicon"}, {"P", "Phosphorus"},
	{"S", "Sulfur"}, {"Cl", "Chlorine"}, {"Ar", "Argon"}, {"K", "Kalium"}};

enum atomNum 
{
	MIN = 1,
	MAX = sizeof(arrAtomName) / sizeof(arrAtomName[0])
}
;
#endif