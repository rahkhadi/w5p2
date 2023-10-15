/**********************************************************************************************************************************
				<assessment name: Workshop - #5 (Part-2)>
Full Name  : Rahimullah Khadim Hussain
Student ID#: 119515229
Email      : rkhadim-hussain@myseneca.ca
Section    :  NEE
Date of Completion: OCT/14/2023

Authenticity Declaration:
 I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
***********************************************************************************************************************************/
#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H
#include <iostream>
#include <string>


namespace sdds
{
	class Movie
	{
		std::string m_titles{};
		size_t m_release{};
		std::string m_descriptions{};

	public:
		Movie() = default;
		Movie(const std::string& strMovie);
		const std::string& title() const;
		std::ostream& print(std::ostream& out) const;
		//ASSUMPTION: In this design, type T must have an overload of the operator() that accepts a string as a parameter.
		template <typename T>
		void fixSpelling(T& spellChecker)
		{
			spellChecker(m_titles);
			spellChecker(m_descriptions);
		}

		friend std::ostream& operator<<(std::ostream& out,const Movie& movie);

	};
}

#endif // !SDDS_MOVIE_H

