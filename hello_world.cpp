#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	std::cout << "Enter username:";
	std::string userName;
	std::cin >> userName;

	std::cout << "Hello world from @" << userName << "!\n";
	return 0;
}