#include <iostream>

float number[15];


int main() {
    std::cout << "Enter 15 fractional numbers" << std::endl;
    for (int i = 0; i < 15; ++i) {
        std::cin >> number[i];
    }

    for(int i = 1; i < 15; ++i)
    {
        float x = number[i];
        int j;
        for(j = i-1; j >= 0 && number[j] > x; --j)
            number[j+1] = number[j];
        number[j+1] = x;
    }

    for (int i=14; i>=0; --i){
        std::cout<<number[i]<<" ";
    }
}
