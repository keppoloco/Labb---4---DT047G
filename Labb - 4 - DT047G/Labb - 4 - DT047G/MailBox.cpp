#include "MailBox.h"
#include <algorithm>

void Mailbox::sortWho(std::vector<email>& vec)
{
	std::sort(vec.begin(), vec.end(), email::CompWhoDateSubject());
}

void Mailbox::sortDate(std::vector<email>& vec)
{
	std::sort(vec.begin(), vec.end(), email::CompDateWhoSubject());
}

void Mailbox::sortSubject(std::vector<email>& vec)
{
	std::sort(vec.begin(), vec.end(), email::CompSubjectWheDate());
}

void Mailbox::insertEmail(const email& e)
{
	mail_vector.emplace_back(e);
}

std::vector<email> Mailbox::getMail() const
{
	return mail_vector;
}