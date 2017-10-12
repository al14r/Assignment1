//


#include <string>
#include "Weapon.h"

#ifndef CrazyRandomSword_h
#define CrazyRandomSword_h

class CrazyRandomSword : public Weapon {
public:
    CrazyRandomSword(): Weapon ("Crazy Random Sword", 0.0) {
    
    }
    
    virtual ~CrazyRandomSword () {
    };
    
    virtual double hit (double armor);
    
};






#endif /* CrazyRandomSword_h */

