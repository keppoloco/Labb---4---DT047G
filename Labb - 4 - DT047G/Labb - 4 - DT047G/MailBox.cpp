#include "MailBox.h"
#include <algorithm>

void Mailbox::sortWho()
{
	std::sort(mail_vector.begin(), mail_vector.end(), email::CompWhoDateSubject());
}

void Mailbox::sortDate()
{
	std::sort(mail_vector.begin(), mail_vector.end(), email::CompDateWhoSubject());
}

void Mailbox::sortSubject()
{
	std::sort(mail_vector.begin(), mail_vector.end(), email::CompSubjectWheDate());
}

void Mailbox::insertEmail(const email& e)
{
	mail_vector.emplace_back(e);
}

std::vector<email> Mailbox::getMail() const
{
	return mail_vector;
}