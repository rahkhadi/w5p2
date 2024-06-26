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

#include <iostream>
#include <iomanip>
#include <string>
#include "Movie.h"
#include "Book.h"

using namespace std;
namespace sdds
{
	Movie::Movie(const std::string& strMovie)
	{
		string temp{};
		string copy = strMovie;
		size_t delim{};

		//get Movie title
		delim = copy.find_first_of(',');
		temp = copy.substr(0, delim);
		m_titles = cutSpaces(temp);
		copy.erase(0, delim + 1);

		//get Movie year
		delim = copy.find_first_of(',');
		temp = copy.substr(0, delim);
		temp = cutSpaces(temp);
		m_release = stoi(temp);
		copy.erase(0, delim + 1);

		//get Movie description
		//delim = copy.find_first_of(',');
		temp = copy.substr(0, strMovie.length() - 1);
		m_descriptions = cutSpaces(temp);
	}
	const std::string& sdds::Movie::title() const
	{
		return m_titles;
	}
	std::ostream& Movie::print(std::ostream& out) const
	{
		out << setw(40) << m_titles << " | "
			<< setw(4) << m_release << " | "
			<< setw(5) << m_descriptions << endl;;
		return out;
	}
	std::ostream& operator<<(std::ostream& out,const Movie& movie)
	{
		return movie.print(out);
	}
}
