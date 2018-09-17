//
//  Engine.cpp
//  SimpleGameEngine
//
//  Created by Wes Brown on 8/28/18.
//  Copyright © 2018 Wes Brown. All rights reserved.
//

#include "Engine.hpp"

Engine::Engine() {
    //resolution.x = VideoMode::getDesktopMode().width;
    //resolution.y = VideoMode::getDesktopMode().height;
    
    window.create(VideoMode(1920, 1080), "Simple Game Engine");
    //window.create(VideoMode(resolution.x, resolution.y), "Simple Game Engine", Style::Fullscreen);
    
}

void Engine::start() {
    Clock clock;
    
    while (window.isOpen()) {
        Event event;
        
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }
        
        Time newTime = clock.restart();
        
        float deltaTime = newTime.asSeconds() * 100;
        
        update(deltaTime);
    }
}

void Engine::update(float dt) {
    player.update(dt);
    
    if (Keyboard::isKeyPressed(Keyboard::Escape)) {
        window.close();
    }
    
    render();
}

void Engine::render() {
    window.clear(Color::White);
    
    window.draw(player.getSprite());

    window.display();
}

