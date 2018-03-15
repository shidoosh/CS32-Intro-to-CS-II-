
#ifndef SSNSet_h
#define SSNSet_h


#include "Set.h"

class SSNSet
{
public:
    SSNSet();          // Create an empty SSN set.
    
    bool add(ItemType ssn);
    // Add an SSN to the SSNSet.  Return true if and only if the SSN
    // was actually added.
    
    int size() const;  // Return the number of SSNs in the SSNSet.
    
    void print() const;
    // Write every SSN in the SSNSet to cout exactly once, one per
    // line.  Write no other text.
    
private:
    // Some of your code goes here.
    Set SSN;

};


#endif 
