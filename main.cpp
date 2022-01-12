#include <iostream>
using namespace std;

//回调函数
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void))
{
	cout << "populate_array" << endl;
	for (size_t i = 0; i < arraySize; i++)
		array[i] = getNextValue();
}

//获取随机值
int getNextRandomValue(void)
{
	cout << "get next random value /n" << endl;
	return rand();
}	

int main()
{
	int myarray[10];

	populate_array(myarray, 10, getNextRandomValue);//这里getNextRandomValue不能加括号，否则报错 。加上括号相当于传此参数传入的int，而不是函数指针
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", myarray[i]);
	}
	printf("\n");
	return 0;
}