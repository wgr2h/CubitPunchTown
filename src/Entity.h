#include <SFML/Graphics.hpp>


#ifndef Entity_h
#define Entity_h



class Entity {
	public:
		Entity(float, float, float); // X, Y, Speed
        Entity();
void HorizontalMovement(char LorR);
void VerticalMovement(char LorR);
		void rotate(float rot);

	private:
        sf::Vector2f position;
//sf::Vector2f position;
		int health;
		float speed;
//		RectangleShape square (const Vector2f &size=Vector2f(1, 1));


//		void update();
};
#endif
