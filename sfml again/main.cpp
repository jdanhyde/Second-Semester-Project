#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class buttonTemplate
{
public:
    sf::Texture& buttonLoadingTexture;
    void setButton(sf::Texture& buttonLoadingTexture,int x,int y);
    sf::Vector2i coordinates;
    sf::Sprite button;
};

void buttonTemplate::setButton(sf::Texture& buttonLoadingTexture,int x,int y)
{
    if (!buttonLoadingTexture.loadFromFile("button420.png"))
    {
    }
    button.setTexture(buttonLoadingTexture);
    //sf::Vector2i coordinates;
    coordinates.x=x;
    coordinates.y=y;
    //return coordinates
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Saves!");
    sf::Texture menuLoadingTexture;
    buttonTemplate button1;

    button1.setButton(buttonTemplate.buttonLoadingTexture,200,300);

    if (!menuLoadingTexture.loadFromFile("menu420.png"))
    {

    }


    sf::Sprite menu;

    menu.setTexture(menuLoadingTexture);

    while (window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        sf::Vector2i position=sf::Mouse::getPosition(window);
        if (position.x >200 and position.x < 400 and position.y >300 and position.y<400)
        {
            if (Button1.xlocation<250)
            {
                Button1.xlocation++;
            }
        }
        else
        {
            if (Button1.xlocation>200)
            {
                Button1.xlocation--;
            }
        }
        window.clear();
        window.draw(menu);
        window.draw(Button1.button);
        window.display();
    }
}
