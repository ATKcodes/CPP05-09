#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "Bureaucrat best grade" << std::endl;
	Bureaucrat best("Best", 1);
	std::cout << best << std::endl;
	try {
		best.decrementGrade();
		std::cout << best << std::endl;
		best.incrementGrade();
		std::cout << best << std::endl;
		best.incrementGrade();
		std::cout << best << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Bureaucrat worst grade" << std::endl;
	Bureaucrat worst("Worst", 150);
	std::cout << worst << std::endl;
	try {
		worst.incrementGrade();
		std::cout << worst << std::endl;
		worst.decrementGrade();
		std::cout << worst << std::endl;
		worst.decrementGrade();
		std::cout << worst << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}