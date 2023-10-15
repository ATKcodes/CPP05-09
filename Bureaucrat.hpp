#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat {
	private :
		int 				_grade;
		const std::string	_name;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		virtual	~Bureaucrat();
		Bureaucrat&	operator=(const Bureaucrat& other);

		int			getGrade() const;
		std::string	getName() const;
		void		incrementGrade();
		void		decrementGrade();

		class GradeTooHighException : public std::exception {
			public :
				virtual const char*	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<( std::ostream &out, const Bureaucrat &fixed );

#endif