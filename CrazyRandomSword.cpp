

#include <cstdlib>
#include "CrazyRandomSword.h"
#include <ctime>
#include <cmath>

double CrazyRandomSword::hit(double armor){
    double damage;
    
    double ignore;
    
    srand((unsigned)time(0));
    hitPoints = rand()%90+10; /*hitPoints between 10-100*/
    floor(hitPoints);
    damage = hitPoints - armor;
    
    int bound = damage/2; /*max bound of possible random number is half of the armor that the weapon hits*/
    floor(bound);
    
    ignore = rand()%bound+1; /*amount of armor to ignore*/
    
    damage = hitPoints - (armor-ignore);
    
    if (damage <0)
        return 0;
    
    return floor(damage);
    
}
