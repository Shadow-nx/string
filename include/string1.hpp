#include <iostream>

class string_t {
	private:
		char *ch;
		std::size_t size_;
	public:
		string_t();
		string_t(const char *ch);
		string_t&  operator =(string_t const &other);
		~string_t();
		char* getCh();
		size_t getSize_();
		void setCh(const char *ch1);
		void setSize_(size_t count);
		void operator ++();
		bool operator ==(string_t const & other) const;
		string_t& operator +(string_t &str);
};
bool operator !=(string_t const & lhs, string_t const & rhs);
