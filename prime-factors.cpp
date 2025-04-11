#include "gmock/gmock.h"
#include "cal.cpp"

class Gop
{
public:
	// �̰��� �ڵ� �ۼ�
	int getGop(int a, int b) { return a * b; }
};

// �׽�Ʈ ���̽� �ۼ�
TEST(Gop, test)
{
	Gop gop;
	EXPECT_EQ(gop.getGop(2, 4), 8);
}

TEST(TS, TS1) {
	cal cal;

	int ret = cal.getSum(1, 2);

	EXPECT_EQ(3, ret);

}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}