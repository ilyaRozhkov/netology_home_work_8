#include <iostream>
#include <windows.h>

static int value = 1;

namespace addition {

	int calc(int x, int y) {

		return x + y;
	}
}

namespace subtraction {

	int calc(int x, int y) {

		return x - y;
	}
}

namespace multiplication {

	int calc(int x, int y) {

		return x * y;
	}
}

namespace division {

	int calc(int x, int y) {

		return x / y;
	}
}


int main(int argc, char** argv)
{
	int x = 6, y = 9;
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "x = " << x << " y = " << y << std::endl;
	std::cout << "Сложение: " << addition::calc(x, y) << std::endl;
	std::cout << "Вычитание: " << subtraction::calc(x, y) << std::endl;
	std::cout << "Умнжение: " << multiplication::calc(x, y) << std::endl;
	std::cout << "Деление: " << division::calc(x, y) << std::endl;
	return 0;
}
