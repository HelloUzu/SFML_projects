#include <SFML/Graphics.hpp>
#include <cstdint>
#include <array>
#include "linux.hpp"

int main(int argc, char **argv)
{
        sf::RenderWindow mainWindow( sf::VideoMode(968, 800), "MyWindow" );

        sf::Image linux_image;
        linux_image.loadFromMemory(&linux_data, linux_size);

        sf::Texture linux_texture;
        linux_texture.loadFromImage(linux_image);

        sf::Sprite linux_sprite(linux_texture);

        while(mainWindow.isOpen()){
                sf::Event event;

                while(mainWindow.pollEvent(event)){
                        if(event.type == sf::Event::Closed){
                                mainWindow.close();
                        }
                }

                mainWindow.clear();
                mainWindow.draw(linux_sprite);
                mainWindow.display();
        }


        return 0;
}
