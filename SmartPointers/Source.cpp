#include "iostream"
#include "memory"

int main()
{
	std::unique_ptr<int> p1(new int(5));
	std::unique_ptr<int> p2 = std::move(p1);
	std::cout << *p2 << std::endl;
	//std::cout << *p1 << std::endl; // Error: p1 is empty
	
	std::unique_ptr<int>* p3 = &p2;
	std::cout << **p3 << std::endl;

	int* p4 = p2.get();
	std::cout << *p4 << std::endl;
	*p4 = 4;
	std::cout << *p4 << std::endl;
	std::cout << *p2 << std::endl;
	std::cout << **p3 << std::endl;
	std::cout << std::endl;

	int* p5;
	if (true)
	{
		std::unique_ptr<int> p6(new int(6));
		p5 = p6.get();
		std::cout << *p5 << std::endl;
		std::cout << *p6 << std::endl;
	}
	std::cout << *p5 << std::endl;
	
	return 0;
}