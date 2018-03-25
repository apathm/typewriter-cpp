#include <iostream>
#include "typewriter.h"
#include <string>
#include<chrono>
#include<thread>
using namespace std;

int main(){
	Typewriter hello {"Hello", 100};
	hello.print();

	return 0;
}
