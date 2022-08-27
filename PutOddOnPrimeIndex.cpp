#include <iostream>
using namespace std;

int main()
{
    int array[14] = {10, 21, 77, 8, 6, 12, 19, 2, 3, 6, 71, 66, 55, 13};
    int other[7] = {0, 1, 4, 6, 8, 9, 10};
    int prime[7] = {2, 3, 5, 7, 11, 13, 17};
    int e = -1;
    int o = -1;

    for (int i = 0; i < 14; i++)
    {
        if ((array[i]) % 2 == 0)
        {
            e++;
        }
        else if ((array[i]) % 2 != 0)
        {
            o++;
        }
    }

    int even[e];
    int odd[o];
    e = 0;
    o = 0;
    for (int i = 0; i < 14; i++)
    {
        if ((array[i]) % 2 == 0)
        {
            even[e] = array[i];
            e++;
        }
        else if ((array[i]) % 2 != 0)
        {
            odd[o] = array[i];
            o++;
        }
    }

    for (int i = 0; i < e - 1; i++)
    {
        for (int j = 1; j < e; j++)
        {

            if (even[j - 1] > even[j])
            {
                int temp = even[j - 1];
                even[j - 1] = even[j];
                even[j] = temp;
            }
        }
    }
for (int i = 0; i < o - 1; i++)
    {
        for (int j = 1; j < o; j++)
        {

            if (odd[j - 1] > odd[j])
            {
                int temp = odd[j - 1];
                odd[j - 1] = odd[j];
                odd[j] = temp;
            }
        }
    }
    int l = 0, v = 0;
    int j = 0;
    while (j < 7)
    {
        if (other[l] < 14)
        {
            array[other[l]] = even[l];
            l++;
        }
        if (prime[v] < 14)
        {
            array[prime[v]] = odd[v];
            v++;
        }
        j++;
    }

    cout << "\n\nBUBBLE SORT ACC TO CONDITIONS IS  "<<endl;
    for (int i = 0; i < 12; i++)
    {
        cout <<"Index No. "<<i  <<" and the value is: " <<array[i] << "  "<<endl;
    }
    return 0;
}