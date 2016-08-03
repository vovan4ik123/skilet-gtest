#include <gtest\gtest.h>
#include <gmock\gmock.h>

#include "ProgramInfo.h"

TEST(InfoTest1, ProgramVersion)
{

	ASSERT_TRUE( std::string(ProgramInfo::Instance()->getVersion()) == "0.0.1" );
}
