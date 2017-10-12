//

//



#include <cstdlib>
#include <string>
#include "Tomahawk.h"
#include <ctime>


double Tomahawk::hit(double armor){
    double damage;
    
    srand((unsigned)time(0));
    hitPoints = rand()%100+1; /*hitPoints between 1-100*/
    
    if (hitPoints < 50){
        damage = hitPoints - (armor*.85);
    }
    
    else damage = hitPoints-  armor;
    
    if (damage <0)
        return 0;
    
    return damage;
    
}


