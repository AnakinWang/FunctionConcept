#include <iostream>
using namespace std;

//�ص�����
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void))
{
	cout << "populate_array" << endl;
	for (size_t i = 0; i < arraySize; i++)
		array[i] = getNextValue();
}

//��ȡ���ֵ
int getNextRandomValue(void)
{
	cout << "get next random value /n" << endl;
	return rand();
}	

int main()
{
	int myarray[10];

	populate_array(myarray, 10, getNextRandomValue);//����getNextRandomValue���ܼ����ţ����򱨴� �����������൱�ڴ��˲��������int�������Ǻ���ָ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", myarray[i]);
	}
	printf("\n");
	return 0;
}