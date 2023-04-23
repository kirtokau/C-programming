#include<iostream>
using namespace std;
#include<string>
struct hero
{
	string name;
	int age;
	string sex;
};
void bubbleSort(hero arr[], int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - j; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		cout << "ÐÕÃû£º" << arr[i].name << " ÐÔ±ð£º" << arr[i].sex << " ÄêÁä£º" << arr[i].age << endl;
	}
}
//int main(){
//	struct hero arr[5] =
//	{
//		{"Áõ±¸",23,"ÄÐ"},
//		{"¹ØÓð",22,"ÄÐ"},
//		{"ÕÅ·É",20,"ÄÐ"},
//		{"ÕÔÔÆ",21,"ÄÐ"},
//		{"õõ²õ",19,"Å®"},
//	};
//
//	int len = sizeof(arr) / sizeof(hero);
//	bubbleSort(arr, len);
//	printHeros(arr, len);
//	system("pause");
//	return 0;
//}