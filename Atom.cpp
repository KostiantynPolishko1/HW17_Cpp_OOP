#include "Atom.h"

short Atom::initEnergyLevel(short atomNumber)
{
    short size = sizeof(arrAtomPeriod) / sizeof(arrAtomPeriod[0]);
    for (short i = 0; i < size; i++)
        if (atomNumber >= arrAtomPeriod[i][0] && atomNumber <= arrAtomPeriod[i][1])
            return ++i;
}
;
short* Atom::initElectronLevel(short* _arrElectron, short _atomNumber, short _atomEnergyLevel)
{
    _arrElectron = new short[_atomEnergyLevel];

    for (short *iter = _arrElectron, i = 0; iter != _arrElectron + _atomEnergyLevel; iter++)
    {
        short max = 2 * ++i * i;

        if (_atomNumber > max)
        {
            *iter = max;
            _atomNumber -= *iter;
        }
        else if (_atomNumber - 1 <= max && _atomNumber * 2 == max)
        {
            *iter = _atomNumber - 1;
            _atomNumber -= *iter;
        }
        else if (_atomNumber - 1 <= max && _atomNumber * 2 > max)
        {
            *iter = _atomNumber - 2;
            _atomNumber -= *iter;
        }
        else if (_atomNumber - 1 > max)
        {
            *iter = max;
            _atomNumber -= *iter;
        }
        else
            *iter = _atomNumber;
    }

    return _arrElectron;
}
;

std::string Atom::getAtomSymbol() const
{
    return _atomSymbol;
}
;
std::string Atom::getAtomName() const
{
    return this->_atomName;
}
;
short Atom::getAtomNumber()
{
    return _atomNumber;
}

short Atom::getAtomNProton()
{
    return _atomNProton;
}

short Atom::getAtomNNeitron()
{
    return _atomNNeitron;
}

 short Atom::getAtomNElectron()
{
    return _atomNElectron;
}

 short Atom::getAtomEnergyLevel()
{
    return _atomEnergyLevel;
}

 float Atom::getAtomMass() const
{
    return _atomMass;
}

 short* Atom::getArrElectron()
{
    return _arrElectron;
}

 void Atom::setAtomNNeitron(short atomNNeitron)
{
    _atomNNeitron = atomNNeitron;
}
