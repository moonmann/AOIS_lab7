#include "Proc.h"

int main()
{
    Memory m;
    m.getRandomMass();
    cout << m << endl;
    bool valueFind;
    cout << "1 - sort Descending, 0 - Ascending" << endl;
    cin >> valueFind;
    if (valueFind) m.sortDescending();
    else  m.sortAscending();
    cout << m << endl;
    string testValue = "1XX0XXX0";
    Memory findTestValue = m.findByBool(testValue);
    cout << findTestValue;
}