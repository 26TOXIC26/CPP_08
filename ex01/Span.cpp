#include "Span.hpp"

Span::Span () : N(0)
{}

Span::Span (unsigned int N) : N(N)
{}

Span::Span (const Span &src)
{
	*this = src;
}

Span::~Span ()
{}

Span &Span::operator=(const Span &src)
{
	if (this == &src)
		return (*this);
	this->N = src.N;
	this->numbers = src.numbers;
	return *this;
}

void Span::addNumber (int num)
{
	if (this->N == 0)
		throw std::runtime_error("The Span Is Already Full!!");
	this->N--;
	this->numbers.push_back(num);
}

void Span::addManyNumber (std::vector<int> nums)
{
	if (this->N == 0 || static_cast<int>(this->N - nums.size()) < 0)
	{
		throw std::runtime_error("The Span Is Already Full!!");
	}
	this->N -= nums.size();
	std::vector<int>::iterator i = nums.begin();
	while (i != nums.end())
	{
		this->numbers.push_back(*i);
		i++;
	}
}

void Span::printNumbers()
{
	std::vector<int>::iterator i = this->numbers.begin();
	while (i != this->numbers.end())
	{
		std::cout << *i << ", ";
		i++;
	}
	std::cout << std::endl;
}

int Span::shortestSpan ()
{
	if (this->numbers.size() < 2)
		throw "The Span Is Too Short";
	std::vector<int> tmp = this->numbers;
	std::sort (tmp.begin(), tmp.end());
	int span = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; i++)
		if (span > (tmp[i + 1] - tmp[i]))
			span = tmp[i + 1] - tmp[i];
	return span;
}

int Span::longestSpan ()
{
	if (this->numbers.size() < 2)
		throw "The Span Is Too Short";
	int min = *std::min_element(this->numbers.begin(), this->numbers.end());
	int max = *std::max_element(this->numbers.begin(), this->numbers.end());
	return max - min;
}
