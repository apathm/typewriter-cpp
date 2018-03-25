#ifndef TYPEWRITER_H
#define TYPEWRITER_H

#include<iostream>
#include<string>
#include<stdexcept>
#include<chrono>
#include<thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

class Typewriter{
	string output;
	int scrollSpeed;
	int deletionDelay;
	public:
		Typewriter(const string& output, int scrollSpeed = 0, int deletionDelay = 0):
		output{output}, scrollSpeed{scrollSpeed}, deletionDelay{deletionDelay}{
			if(output.length() == 0)
				throw runtime_error("Typewriter: empty string");
		}
		void print() const{
			for(const char c: output){
				cout << c << flush;
				sleep_for(milliseconds(scrollSpeed));
			}
			sleep_for(milliseconds(1000));
				
			bool first{true};
			for(size_t i{1}; i <= output.length(); ++i){
				if(first){
					cout << "\b" << flush;
					cout << " " << flush;
					first = false;
				}

				else
					cout << "\b\b " << flush;

				sleep_for(milliseconds(scrollSpeed));
			}
			cout << "\b" << flush;
		}
};



#endif
