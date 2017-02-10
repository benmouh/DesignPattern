#include <vector>
/* Our car has a color and may change */
enum class Color
{
	RED,
	GREEN,
	BLUE
};

/* Our car has a size and can change */
enum class  Size
{
	SMALL,
	MEDIUM,
	LARGE
};

/* We define our Car interface like this */
struct Car
{

	std::string brand;
	Color color;
	Size size;

};

/* Using a close for extension and open for modification principal */
struct CarFilter
{

	typedef std::vector<Car*> Items;

	static Items by_color(Items items, Color color)
	{
		Items result;
		for (auto& itm : items)
		{
			if (itm->color == color)
				result.push_back(itm);
		}
		return result;
	}

	static Items by_size(Items items, Size size)
	{
		Items result;
		for (auto& itm : items)
		{
			if (itm->size == size)
				result.push_back(itm);
		}
		return result;
	}

	static Items by_color_and_size(Items items, Color color, Size size)
	{
		Items result;
		for (auto& itm : items)
		{
			if (itm->color == color && itm->size == size)
				result.push_back(itm);
		}
		return result;
	}
};

/* Using a close for modification and open for extension principal this will give us some happiness */
/* Lets define an interface for the Car's Color specification */
template <typename T> struct Ispecification
{
	virtual bool isSatisfied(T* item) = 0;
};
struct colorSpecification : Ispecification<Car>
{
	Color color;
	explicit colorSpecification(const Color color) : color
	{ color}
	{

	}
	bool isSatisfied(Car* p) override
	{
		return p->color == color;
	}

};

/* Lets define an interface for the Car's Size specification */
struct sizeSpecification : Ispecification<Car>
{
	Size size;
	explicit sizeSpecification(const Size size) : size
	{ size }
	{

	}
	bool isSatisfied(Car* p) override
	{
		return p->size == size;
	}

};

/* Now its time to define a filter for our cars */
template <typename T> struct IFilter
{

	virtual std::vector<T*> filter(std::vector<T*> items, Ispecification<T>& spec) = 0;
};

/* Lets implement our Filter now  */
struct BetterFilter : IFilter<Car>
{
	typedef std::vector<Car*>Items;
	std::vector<Car*> filter(std::vector<Car*> items, Ispecification<Car>& spec)
	{
		std::vector<Car*> result;
		for (auto& it : items)
		{
			if (spec.isSatisfied(it))
				result.push_back(it);
		}
		return result;

	}


};
