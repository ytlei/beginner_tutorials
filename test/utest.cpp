// Bring in my package's API, which is what I'm testing
#include "src/talker.cpp"
// Bring in gtest
#include <gtest/gtest.h>
#include "ros/ros.h"

// Declare a test
TEST(talkerTest, testCase1)
{
  ros::NodeHandle n;
  ros::Publisher chatter_pub = n.advertise < std_msgs::String
      > ("chatter", 1000);
  EXPECT_EQ(sub.getNumPublishers(), 1U);

  
  ros::spinOnce();
}

/*
// Declare another test
TEST(TestSuite, testCase2)
{
<test things here, calling EXPECT_* and/or ASSERT_* macros as needed>
}
*/
// Run all the tests that were declared with TEST()
int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
