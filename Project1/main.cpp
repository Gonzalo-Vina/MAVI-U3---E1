//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
///Punto de entrada a la aplicación///
int main() {
	//////Variables//////
	Texture texture;
	Sprite circleRed1, circleRed2, circleRed3, circleRed4;

	//Cargamos la textura del archivo
	texture.loadFromFile("imagenes/rcircle.png");

	//Cargamos el material del sprite
	circleRed1.setTexture(texture);
	circleRed2.setTexture(texture);
	circleRed3.setTexture(texture);
	circleRed4.setTexture(texture);

	//Modificamos posicionamiento
	circleRed2.setPosition(672, 0);
	circleRed3.setPosition(0, 472);
	circleRed4.setPosition(672, 472);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		App.draw(circleRed1);
		App.draw(circleRed2);
		App.draw(circleRed3);
		App.draw(circleRed4);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}
