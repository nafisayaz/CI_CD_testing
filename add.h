
#include <vector>

int add(int const& x, int const& y )
{
	return x + y;
}

template<typename T, typename Predicate> auto graph(T begin, T end, Predicate pre)->int
{
	while(begin != end)
	{
		if( (begin+1) != end and pre(*begin, *(begin+1)) )
		{
			return * begin;
		}
		++begin;
	}
}


