#include <iostream>
#include "typewriter.h"
#include <string>
#include<chrono>
#include<thread>
using namespace std;

int main(){
	Typewriter t {"Hello", 100};
	t.print();

	t = "How are you?";
	t.print();

	return 0;
}
