#include <gtest\gtest.h>
#include <gmock\gmock.h>

#include <cstdlib>
#include <iostream>

#include "ProgramInfo.h"

TEST(InfoTest1, ProgramVersion)
{

	ASSERT_TRUE( std::string(ProgramInfo::Instance()->getVersion()) == "0.0.1" );
}





int main(int argc, char* argv[]) {
	::testing::InitGoogleMock(&argc, argv);
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();

	system("pause");
	return 0;
}