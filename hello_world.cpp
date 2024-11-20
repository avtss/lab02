#include <iostream>

int main(int argc, char** argv)
{
	//changes to code caused by using namespace std removal
	std::cout << "Enter username:";
	std::string userName;
	std::cin >> userName;

	std::cout << "Hello world from @" << userName << "!\n";
	return 0;
}