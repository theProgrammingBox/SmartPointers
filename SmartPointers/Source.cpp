#include "iostream"
#include "memory"

int main()
{
	std::unique_ptr<uint32_t> zero = std::make_unique<uint32_t>(0);
	std::unique_ptr<uint32_t> one = std::make_unique<uint32_t>(1);
	std::unique_ptr<uint32_t> two = std::make_unique<uint32_t>(2);
	
	std::cout << zero << std::endl;
	std::cout << *zero << std::endl;
	std::cout << one << std::endl;
	std::cout << *one << std::endl;
	std::cout << std::endl;

	*one = *zero;	// value replaced, not address

	std::cout << zero << std::endl;
	std::cout << *zero << std::endl;
	std::cout << one << std::endl;
	std::cout << *one << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	*one = 1;

	std::cout << one << std::endl;
	std::cout << *one << std::endl;
	std::cout << two << std::endl;
	std::cout << *two << std::endl;
	std::cout << std::endl;

	one = std::move(two);	// address replaced, not value. two is now empty
	
	std::cout << one << std::endl;
	std::cout << *one << std::endl;
	std::cout << two << std::endl;
	//std::cout << *two << std::endl;	// address set to nothing
	std::cout << std::endl;
	std::cout << std::endl;
	
	two = std::make_unique<uint32_t>(2);
	
	return 0;
}