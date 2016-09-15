#include <iostream>
#include <random>
using namespace std;



class Card(){
    private:
        int number_arr [] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        char colour_arr [] = {'red_heart', 'red_karo', 'black_pik', 'black_cross'};

    public:
        int number;
        char colour;

};


void set_card(void){
    number = number_arr[rand() % 10];
    colour = colour_arr[rand() % 10];
}

int main() {

    Card c;
    c.set_card();
    cout << "Hello, World!" << endl;
    return 0;
}