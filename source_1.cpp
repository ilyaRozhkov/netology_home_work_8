#include <iostream>
#include <windows.h>

static int value = 1;

void counting_function() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Количество вызовов функции counting_function(): " << value << std::endl;
	value += 1;
};


int main(int argc, char** argv)
{
	for (int i = 0; i < 15; i++)
	{
		counting_function();
	}

	return 0;
}
