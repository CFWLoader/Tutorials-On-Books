#ifndef SUMPOLICY_HPP_
#define SUMPOLICY_HPP_

template<typename T1, typename T2>
class SumPolicy
{
public:
	static void accumulate(T1& total, T2 const& value)
	{
		total += value;
	}
};

#endif