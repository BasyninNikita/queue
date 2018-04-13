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
	queue.push(3);
	queue.push(5);
	queue.push(4);
	REQUIRE( queue.pop()==3 );
	REQUIRE( queue.pop()==5 );
	REQUIRE( queue.pop()==4 );
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
	REQUIRE( queue.pop()==1 );
	REQUIRE( queue.pop()==2 );
}

