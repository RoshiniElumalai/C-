  #include <iostream>

using namespace std;

int main() 
{
    float arr[5];
    cout << "Enter array elements: ";

    for (int i = 0; i < 5; i++) 
	{
        cin >> arr[i];
    }

    float sum = 0;
    float avg;

    for (int i = 0; i < 5; i++) 
	{
        sum += arr[i];
    }

    avg = sum / 5;
cout<<"the sum of elements"<<sum<<endl;
    cout << "The average is " << avg;
    return 0;
}
