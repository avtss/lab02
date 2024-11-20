#include <iostream>

int main(int argc, char** argv)
{
	//изменения в коде после удаления using namespace std
	std::cout << "Enter username:";
	std::string userName;
	std::cin >> userName;

	std::cout << "Hello world from @" << userName << "!\n";
	return 0;
}
