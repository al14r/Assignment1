//


#include <string> 
#include "Weapon.h"

#ifndef SimpleAxe_h
#define SimpleAxe_h

class SimpleAxe : public Weapon {
public:
    SimpleAxe(): Weapon ("Simple Axe", 60.0) {
        
    }
    
    virtual ~SimpleAxe () {
    };
    
    virtual double hit (double armor); 
    
};










#endif /* SimpleAxe_h */



