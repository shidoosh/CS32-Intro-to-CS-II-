//
//  Arena.hpp
//  CS32 - PROJECT 1
//
//  Created by Stefanie Shidoosh on 4/6/17.
//  Copyright © 2017 Stefanie Shidoosh. All rights reserved.
//

#ifndef Arena_h
#define Arena_h

#include "History.h"
#include "globals.h"
#include <string>
using namespace std;

//forward declaration!
class Player;
class Rat;

class Arena
{
public:
    // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();
    
    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    History& history();
    int     ratCount() const;
    int     getCellStatus(int r, int c) const;
    int     numberOfRatsAt(int r, int c) const;
    void    display(std::string msg) const;
    
    // Mutators
    void setCellStatus(int r, int c, int status);
    bool addRat(int r, int c);
    bool addPlayer(int r, int c);
    void moveRats();
    
    
private:
    int     m_grid[MAXROWS][MAXCOLS];
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Rat*    m_rats[MAXRATS];
    History m_history;              
    int     m_nRats;
    int     m_turns;
    

    
    // Helper functions
    void checkPos(int r, int c) const;
    bool isPosInBounds(int r, int c) const;
};



#endif /* Arena_h */
