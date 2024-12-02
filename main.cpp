#include <iostream>
#include "kitty.hpp"
#include "duckling.hpp"
#include "cutie.hpp"
#include "puppy.hpp"
#include "rabbit.hpp"
#include "turtle.hpp"
#include "raccoon.hpp"
#include "queuetees.hpp"
#include <iostream>

using namespace std;

int main() {
    Cutie* duckling = new Duckling();
    Cutie* kitty = new Kitty();
    Cutie* puppy = new Puppy();
    Cutie* rabbit = new Rabbit();
    Cutie* raccoon = new Raccoon();
    Cutie* turtle = new Turtle();

    QueueTees queue(5);

    std::cout << "Size of the Queue before adding Cuties: " << queue.get_size() << std::endl;

    queue.enqueue(duckling);
    queue.enqueue(kitty);
    queue.enqueue(puppy);
    queue.enqueue(rabbit);
    queue.enqueue(raccoon);
    queue.enqueue(turtle);  // Should print the Queue is full!

    std::cout << "Size of the Queue after adding Cuties: " << queue.get_size() << std::endl;

    queue.dequeue(); // Duckling
    queue.dequeue(); // Kitty
    queue.dequeue(); // Puppy
    queue.dequeue(); // Rabbit   
    queue.dequeue(); // Racoon   

    queue.dequeue(); // Should print Queue is empty!

    return 0;
}