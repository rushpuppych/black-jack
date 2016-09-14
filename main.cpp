#include <iostream>
#include <random>
using namespace std;



class Card(){

    public:
        int number;
        char colour;
    private:
        int number_arr [] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        char colour_arr [] = {'red_heart', 'red_karo', 'black_pik', 'black_cross'};

}


int main() {

    Card c;
    c.set_values();
    cout << "Hello, World!" << endl;
    return 0;
}