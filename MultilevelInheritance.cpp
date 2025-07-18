#include <iostream>
using namespace std;

class Fruits {
public:
    string name;
    int weight;

    Fruits(string n, int w) : name(n), weight(w) {}

    void Weight() {
        cout << "Weight of " << name << " is: " << weight << " kg" << endl;
    }
};

class Apple : public Fruits {
public:
    string colour;

    Apple(string n, int w, string c) : Fruits(n, w), colour(c) {}

    void Colour() {
        cout << "Colour of Apple is: " << colour << endl;
    }
};

class Banana : public Apple {
public:
    int dozen;

    Banana(string n, int w, string c, int d) : Apple(n, w, c), dozen(d) {}

    void Dozen() {
        cout << "Total dozen of Bananas: " << dozen << endl;
    }
};

int main() {
    Banana obj("Banana", 12, "Yellow", 2);
    cout << "Fruit Name: " << obj.name << endl;
    obj.Weight();
    obj.Colour();
    obj.Dozen();

    return 0;
}
