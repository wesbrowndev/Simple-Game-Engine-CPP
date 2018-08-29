//
//  Engine.hpp
//  SimpleGameEngine
//
//  Created by Wes Brown on 8/28/18.
//  Copyright © 2018 Wes Brown. All rights reserved.
//

#ifndef Engine_hpp
#define Engine_hpp

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Player.hpp"

using namespace sf;

class Engine {
private:
    Player player;
    
    Vector2f resolution;
    RenderWindow window;
    
    void update(float dt);
    void render();
    
public:
    Engine(); // Constructor
    
    void start();
};

#endif /* Engine_hpp */
