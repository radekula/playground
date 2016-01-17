#define BOOST_TEST_MODULE simple
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE(testSimple)
{
   BOOST_CHECK_EQUAL(false, true);
}

int main(int argc, char* argv[])
{
}

