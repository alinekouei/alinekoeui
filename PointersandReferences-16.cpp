#include <iostream>

using namespace std;

int findmax(int *arr,int size) {

int max = *arr;
for (int i=1; i < size;i++) {
    if (*(arr+i) > max) {
        max=*(arr+i);
    }
}
return max;
}


int main()
{
    int numbers[] = {20,30,40,50,60};
    int size = sizeof(numbers) / sizeof (numbers[0]);

    int maxvalue = findmax(numbers,size);

    cout << maxvalue << endl;
    return 0;
}
