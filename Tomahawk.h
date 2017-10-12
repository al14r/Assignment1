//
//  
//

#include <string>
#include "Weapon.h"

#ifndef Tomahawk_h
#define Tomahawk_h

class Tomahawk : public Weapon{
public:
    Tomahawk() : Weapon("Tomahawk", 0.0){
        
    }
    
    virtual ~Tomahawk(){};
    virtual double hit (double armor);
    
};


#endif /* Tomahawk_h */

