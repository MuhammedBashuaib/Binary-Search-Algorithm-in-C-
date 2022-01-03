//this is the Binary Search code in C++
#include <iostream>

using namespace std;

void binarySearch(int array[], int size, int searchNumber)
{
    int low = 0;
    int high = size - 1;

    //within this loop gets search

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(array[mid] == searchNumber)
        {
            cout<<"the number has been found, the index number is: "<<mid<<endl<<endl;
            break;
        }
        else if(array[mid] < searchNumber)
            low = mid + 1;
        else
            high = mid -1;
    }
}

int main()
{
    int array[] = {50, 52, 60, 63, 70, 77, 80, 100, 200, 450};
    int searchNumber;
    int low = 0;
    int high = 10 -1;
    int mid = ((10 - low) / 2) + low;
    bool contin = true;
    cout<<"the list number is: "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    cout<<"Enter one of these numbers:"<<endl<<">>";
    cin>>searchNumber;

    // Call the binary search function

    binarySearch(array, 10, searchNumber);

    return 0;
}
