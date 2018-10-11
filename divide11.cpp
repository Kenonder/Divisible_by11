//============================================================================
// Name        : divide11.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool divisible_by_11(int n){

	/*int arry_digits[16] = {1,2,3,4,5,6};

    for(int i = 0;i < 16;i++ ){
    	arry_digits[i] = 0;
    }
    int arry_location = 0;
    while(split_digits > 0){
    }*/

	int splict_digits = n;
	int t_sum = 11;
	int counter = 1;
	while(t_sum >= 11){
		t_sum = 0;
		while(splict_digits > 0){
		int current_digit = splict_digits % 10;
		splict_digits = splict_digits/10;
		t_sum = t_sum + current_digit*counter;
		counter=counter*-1;
	    }
		splict_digits = t_sum;

	}
	std::cout<<t_sum<<std::endl;
	if(t_sum == 0)
		return true;
	else
		return false;

}

int main() {
	divisible_by_11(8784204);
	int input;
	std::cin>>input;
	if(divisible_by_11(input)){
		std::cout<<"divisible by 11"<<std::endl;
	}


	return 0;
}

