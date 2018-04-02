#include <iostream>
#include <cstring>
#include "string1.hpp"

using namespace std;

string_t::string_t() {
	ch=nullptr;
	size_=0;
}
string_t::string_t(const char *ch1) {
	size_=strlen(ch1);
	ch=new char[size_+1];
	for(unsigned int i=0; i<size_; i++)
		ch[i]=ch1[i];
}
string_t& string_t::operator =(string_t const &other) {
	if(this != &other) {
		size_=other.size_;
		if(ch!=nullptr)
			delete [] ch;
		ch=new char[size_+1];
		for(unsigned int i=0; i<size_; i++)
			ch[i]=other.ch[i];
	}
	return *this;
}
string_t::~string_t() {
	delete [] ch;
}
char* string_t::getCh() {
	return ch;
}
size_t string_t::getSize_() {
	return size_;
}
void string_t::setCh(const char *ch1) {
	size_=strlen(ch1);
	ch=new char[size_+1];
	for(unsigned int i=0; i<size_; i++)
		ch[i]=ch1[i];
}
void string_t::setSize_(size_t count) {
	size_=count;
}
void string_t::operator ++() {
	if(ch!=nullptr)
		for(unsigned i=0; i<size_; i++)
			ch[i]=towlower(ch[i]);
}
bool string_t::operator ==(string_t const & other) const {
	if (size_ != other.size_)
		return false;
	for (int i = 0; i < size_; i++)
		if (ch[i] != other.ch[i])
			return false;
	return true;
}
string_t& string_t::operator +(string_t &str) {
	char *ch1=new char[size_+1];
	for(unsigned int i=0; i<size_; i++)
		ch1[i]=ch[i];
	for(unsigned int i=size_,j=0; i<size_+str.size_; i++,j++)
		ch1[i]=str.ch[j];
	size_=size_+str.size_;
	delete []ch;
	ch=ch1;
	return *this;
}
bool operator !=(string_t const & lhs, string_t const & rhs) {
	return !(lhs == rhs);
}
