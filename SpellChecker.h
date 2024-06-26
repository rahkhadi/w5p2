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
#ifndef SDDS_SPELLCHECKER_H
#define SDDS_SPELLCHECKER_H
#include <iostream>
#include <string>

namespace sdds
{
	const unsigned WORD_COUNT = 6;

	class SpellChecker
	{
		std::string m_badWords[WORD_COUNT]{};
		std::string m_goodWords[WORD_COUNT]{};
		unsigned m_numFixed[WORD_COUNT]{};
	public:
		SpellChecker() = default;
		SpellChecker(const char* filename);
		void operator()(std::string& text);
		void showStatistics(std::ostream& out) const;
	};

	void readWords(std::string line,std::string& bad, std::string& good);
}


#endif // SDDS_SPELLCHECKER_H