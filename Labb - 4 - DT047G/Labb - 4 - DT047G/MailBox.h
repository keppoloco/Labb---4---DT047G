#pragma once
#ifndef MAILBOX_H
#define MAILBOX_H
#include "Email.h"
#include <vector>
class Mailbox {
public:
	Mailbox() {}

	void sortWho(std::vector<email>& vec);
	void sortDate(std::vector<email>& vec);
	void sortSubject(std::vector<email>& vec);

	void insertEmail(const email& e);
	std::vector<email> getMail() const;


	friend std::ostream& operator<<(std::ostream& o, const email& e)
	{
		o << "Sender: " << e.who << " Subject: " << e.subject << " date: " << e.date << '\n';
		return o;
	}
private:
	std::vector<email> mail_vector;


};



#endif //! MAILBOX