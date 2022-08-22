#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
void find_result(vector<int>, int &, int &, int &, float &);
void display(int, int, int, float);
int main()
{
    // ifstream fin("C:/Users/amullane/OneDrive - Passaic County Community College/Test/chapter7/number.txt");
    ifstream fin("number.txt");
    vector<int> vec_num;
    if (fin)
    {
        cout << "it's there!";
        while (!fin.eof())
        {
            int num;
            fin >> num;
            vec_num.push_back(num);
        }
        int lowest = vec_num[0], highest = vec_num[0], totalnumber;
        float avg;
        find_result(vec_num, lowest, highest, totalnumber, avg);
        display(lowest, highest, totalnumber, avg);
    }
    else
    {
        cout << "It's not there!";
    };

    return 0;
}
void find_result(vector<int> vec_num, int &lowest, int &highest, int &totalnumber, float &avg)
{
    float sum = 0;
    for (int i = 0; i < vec_num.size(); i++)
    {
        if (lowest > vec_num[i])
            lowest = vec_num[i];
        if (highest < vec_num[i])
            highest = vec_num[i];
        totalnumber++;
        sum += vec_num[i];
    }
    avg = sum / totalnumber;
}
void display(int lowest, int highest, int totalnumber, float avg)
{
    cout << "• The lowest number in the array:  " << lowest << endl;
    cout << "• The highest number in the array: " << highest << endl;
    cout << "• The total of the numbers in the array:  " << totalnumber << endl;
    cout << "• The average of the numbers in the array:  " << avg << endl;
}