#include <iostream>
#include <SFML/Window.hpp>

int main(void)
{
	sf::Window mainWindow( sf::VideoMode(800, 600), "MyWindow" );
	std::cout << "The window is open!" << '\n';

	while(mainWindow.isOpen()){

		sf::Event event;

		while(mainWindow.pollEvent(event)){
			if(event.type == sf::Event::Closed){
			mainWindow.close();
			std::cout << "You closed the window!" << '\n';
		
			}
		}
	}

	return 0;
}	
		

	

