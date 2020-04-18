#include <iostream>

int main()
{

	double pens = 0;
	double nicks = 0;
	double dimes = 0;
	double quarts = 0;
	double half = 0;
	double one = 0;
	double final = 0;

	std::cout << "How many coins do you have? Program!" << std::endl
		<< "How many pennies do you have: ";
	while (std::cin >> pens) {
		std::cout << "How many nickels do you have: ";
		std::cin >> nicks;
		std::cout << "How many dimes: ";
		std::cin >> dimes;
		std::cout << "How many quarters: ";
		std::cin >> quarts;
		std::cout << "How many half dollars: ";
		std::cin >> half;
		std::cout << "How many dollars do you have: ";
		std::cin >> one;
		
		// display amounts of each currency before converting
		std::cout << "You have " << pens << " pennies." << std::endl;
		std::cout << "You have " << nicks << " nickels." << std::endl;
		std::cout << "You have " << dimes << " dimes." << std::endl;
		std::cout << "You have " << quarts << " quarters." << std::endl;
		std::cout << "You have " << half << " half dollars." << std::endl;
		std::cout << "You have " << one << " dollars." << std::endl;

		system("pause");


		// Math to convert final dollar amount and individual amounts
		pens = pens * 0.01;
		nicks = nicks * 0.05;
		dimes = dimes * 0.10;
		quarts = quarts * 0.25;
		half = half * 0.50;
		one = one * 1.00;
		final = pens + nicks + dimes + quarts + half + one;

		// out results
		std::cout << "You have exactyly $" << final << std::endl;

		system("pause");
		system("cls");
		return main();

	}

	return 0;

}