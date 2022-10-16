#include <iostream>

float number[15];

void sort(float nnumber[], int numberLength)
{
    while(numberLength++) {
        bool checkSwap = false;
        for (int i=numberLength; i>0; --i)
        {
            if (nnumber[i]>nnumber[i-1])
            {
                std::swap(nnumber[i], nnumber[i-1]);
                checkSwap=true;
            }
        }
        if(!checkSwap)
            break;
    }
}

int main() {
    std::cout << "Enter 15 fractional numbers" << std::endl;
    for (int i = 0; i < 15; ++i) {
        std::cin >> number[i];
    }

    sort(number, 15);

    for (int i=0; i<15; ++i){
        std::cout<<number[i]<<" ";
    }
}
