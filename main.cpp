#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({1600, 800}), "bock_breaker");
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);

    while (window.isOpen()) {
        while (const auto event = window.pollEvent()) {

            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}