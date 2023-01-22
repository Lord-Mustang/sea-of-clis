#include <cannons_light.h>

#include <random/random.h>
#include <tradable.h>

namespace Soc
{
	Cannons_light::Cannons_light(int min_amount, int max_amount, int price): Cannons("12-pounder short guns", min_amount, max_amount, price)
	{}

	int Cannons_light::damage()
	{
		return Random::random(0, 2);
	}

	std::shared_ptr<Tradable> Cannons_light::copy() const
	{
		return std::make_shared<Cannons_light>(*this);
	}
}
