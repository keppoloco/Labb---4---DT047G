#pragma once
#ifndef EMAIL_H
#define EMAIL_H
#include <iostream>
#include <string>

class email {
public:
	
	email(std::string who, std::string date, std::string subject) : who(who), date(date), subject(subject) {}


	friend std::ostream& operator<<(std::ostream& o, const email& e)
	{
		o << "Sender: " << e.who << " | Subject: " << e.subject << " | date: " << e.date << '\n';
		return o;
	}
	struct CompWhoDateSubject {
		bool operator()(const email& lhs, const email& rhs)
		{
			if (lhs.who == rhs.who)
				return false;
			return lhs.who < rhs.who;
		}
	};

	struct CompDateWhoSubject {
		bool operator()(const email& lhs, const email& rhs)
		{
			return lhs.date < rhs.date;
		}
	};

	struct CompSubjectWheDate {
		bool operator()(const email& lhs, const email& rhs)
		{
			return lhs.subject < rhs.subject;
		}
	};
private:
	std::string who;
	std::string date;
	std::string subject;
};


#endif //! EMAIL_H