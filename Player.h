#ifndef PLAYER_H
#define PLAYER_H

#include "GameMechs.h"
#include "objPos.h"
#include "objPosArrayList.h"
#include "FoodBin.h"

class Player
{
    
    
    public:
        enum Dir {UP, DOWN, LEFT, RIGHT, STOP};  // This is the direction state

        Player(GameMechs* thisGMRef);
        ~Player();

        objPosArrayList* getPlayerPos() const; // Upgrade this in iteration 3.       
        void updatePlayerDir();
        void movePlayer(FoodBin* foodBin);
        char checkFoodConsumption(FoodBin* foodBin);
        bool checkSelfCollision();
        // More methods to be added here

    private:
        // objPos playerPos; // Upgrade this in iteration 3.       
        enum Dir myDir;

        

        objPosArrayList* playerPosList;
        // Need a reference to the Main Game Mechanisms
        GameMechs* mainGameMechsRef;
};

#endif