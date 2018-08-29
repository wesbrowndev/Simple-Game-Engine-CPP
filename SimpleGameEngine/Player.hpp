//
//  Player.hpp
//  SimpleGameEngine
//
//  Created by Wes Brown on 8/28/18.
//  Copyright © 2018 Wes Brown. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

class Player {
private:
    
    Vector2f position;
    Sprite sprite;
    Texture texture;
    
    float speed;
    
    bool leftPressed;
    bool rightPressed;
    bool upPressed;
    bool downPressed;
    
    void input();
    
public:
    Player(); // Constructor
    
    Sprite getSprite();
    
    void update(float dt);
    
};

#endif /* Player_hpp */
