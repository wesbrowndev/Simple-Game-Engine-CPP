//
//  Player.cpp
//  SimpleGameEngine
//
//  Created by Wes Brown on 8/28/18.
//  Copyright © 2018 Wes Brown. All rights reserved.
//

#include "Player.hpp"

Player::Player() {
    speed = 3;
    
    texture.loadFromFile("player.png");
    sprite.setTexture(texture);
    
    position.x = 917;
    position.y = 450;
}

Sprite Player::getSprite() {
    return sprite;
}

void Player::update(float dt) {
    input();
    
    if (rightPressed && position.x < 1840) {
        position.x += speed * dt;
    }
    if (leftPressed && position.x > 0) {
        position.x -= speed * dt;
    }
    if (upPressed && position.y > 0) {
        position.y -= speed * dt;
    }
    if (downPressed && position.y < 960) {
        position.y += speed * dt;
    }
    sprite.setPosition(position);
}

void Player::input() {
    if (Keyboard::isKeyPressed(Keyboard::A)) {
        leftPressed = true;
    } else {
        leftPressed = false;
    }
    if (Keyboard::isKeyPressed(Keyboard::D)) {
        rightPressed = true;
    } else {
        rightPressed = false;
    }
    if (Keyboard::isKeyPressed(Keyboard::W)) {
        upPressed = true;
    } else {
        upPressed = false;
    }
    if (Keyboard::isKeyPressed(Keyboard::S)) {
        downPressed = true;
    } else {
        downPressed = false;
    }
}

