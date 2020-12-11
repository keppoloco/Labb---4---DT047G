#pragma once
#ifndef MAILBOX_H
#define MAILBOX_H
#include "Email.h"
#include <vector>
class Mailbox {
public:
	Mailbox() {}

	void sortWho();
	void sortDate();
	void sortSubject();

	void insertEmail(const email& e);
	std::vector<email> getMail() const;

private:
	std::vector<email> mail_vector;


};



#endif //! MAILBOX