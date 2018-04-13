#include <catch.hpp>
#include <sstream>

#include "queue.hpp"

TEST_CASE("creating queue")
{
	queue_t<int> queue;
	REQUIRE( queue.head_() == nullptr);
	REQUIRE( queue.tail_() == nullptr);
}

TEST_CASE("pop and push")
{
	queue_t<int> queue;
	queue.push(1);
	queue.push(2);
	int sum=queue.pop();
	sum+=queue.pop();
	REQUIRE( sum == 3 );
}
TEST_CASE("throw")
{
	queue_t<int> queue;
	REQUIRE_THROWS_AS( queue.pop() , std::logic_error);
}

TEST_CASE("copy")
{
	queue_t<int> queue;
	queue.push(1);
	queue.push(2);
	queue_t<int> queue1;
	queue1=queue;
	int sum = queue1.pop();
	sum = sum + queue1.pop();
	REQUIRE( sum == 3 );
	
}

