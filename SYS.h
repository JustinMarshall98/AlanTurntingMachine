#ifndef SYS_H
#define SYS_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Drink.h"
#include <vector>

class SYS{
public:
    SYS(std::vector<Drink> drinks);
    void ShootYourShot();
private:
    Drink goodDrink;
    Drink badDrink;

};
#endif
