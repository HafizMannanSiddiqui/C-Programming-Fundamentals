#include <iostream>
using namespace std;

int findSubstr(char mainstr[], char substr[])
{
    int i = 0;
    int j = 0;
    int requiredIndex = -1;
    while (mainstr[i] != '\0')
    {
        if (mainstr[i] == substr[j])
        {
            int s = i;
            bool good = true;
            while (substr[j] != '\0')
            {
                if (substr[j] != mainstr[i])
                {
                    good = false;
                }
                j++;
                i++;
            }
            if (good)
            {
                requiredIndex = s;
            }
            else
            {
                j = 0;
            }
        }
        i++;
    }
    return requiredIndex;
}

int length(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}

void replaceOccurences(char mainstr[], char substr[], char replaceStr[])
{
    int index = findSubstr(mainstr, substr);
    if (index == -1)
    {
        cout << "Substring is Not Found\n";
        return;
    }
    int mSize = length(mainstr);
    int sStr = length(substr);
    int newStrLength = length(replaceStr);
    const int size_new_arr = mSize - sStr + newStrLength;
    char arr[100] = {};
    for (int i = 0, m = 0; i < size_new_arr;)
    {
        if (i == index)
        {
            for (int j = 0; j < newStrLength; j++)
            {
                arr[i] = replaceStr[j];
                i++;
            }
            m = m + sStr;
        }
        else
        {
            arr[i] = mainstr[m];
            i++;
            m++;
        }
    }
	for (int i = 0; i < 100; i++)
	{
		mainstr[i] = 0;
	}
    for (int i = 0; i < size_new_arr; i++)
    {
        mainstr[i] = arr[i];
    }
}

int main()
{
    char arr[200] = {};
    char substr[100] = {};
    cout << "Input a sentence you want : ";
    cin.getline(arr, 200, '\n');
    cout << "Input a word you want to be removed: ";
    cin.getline(substr, 100, '\n');
    char replaceStr[100] = {};
	cout<<"Enter a word for replace: ";
	cin.getline(replaceStr,100,'\n');
    replaceOccurences(arr, substr, replaceStr);
    cout << arr << endl;
}
