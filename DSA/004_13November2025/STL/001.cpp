#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int aaSize;
    cin >> aaSize;

    vector<long long> boxA(aaSize);
    for (int z = 0; z < aaSize; z++) 
    {
        cin >> boxA[z];
    }



    int bbSize;
    cin >> bbSize;

    vector<long long> boxB(bbSize);
    for (int k = 0; k < bbSize; k++) 
    {
        cin >> boxB[k];
    }



    
    vector<long long> merged;
    merged.reserve(aaSize + bbSize);

    int leftPtr = 0;
    int rightPtr = 0;



    
    while (true) 
    {
        bool tookSomething = false;

        if (leftPtr < aaSize && rightPtr < bbSize) 
        {
            if (boxA[leftPtr] <= boxB[rightPtr]) 
            {
                merged.push_back(boxA[leftPtr]);
                leftPtr++;
            } 
            else 
            {
                merged.push_back(boxB[rightPtr]);
                rightPtr++;
            }

            tookSomething = true;
        }



        // If one array finished, dump the remaining of the other
        if (!tookSomething) 
        {
            if (leftPtr < aaSize) 
            {
                while (leftPtr < aaSize) 
                {
                    merged.push_back(boxA[leftPtr]);
                    leftPtr++;
                }
            }
            
            if (rightPtr < bbSize) 
            {
                while (rightPtr < bbSize) 
                {
                    merged.push_back(boxB[rightPtr]);
                    rightPtr++;
                }
            }
            break;
        }
    }

    // output with spaces
    for (size_t i = 0; i < merged.size(); i++) 
    {
        cout << merged[i];
        if (i + 1 < merged.size()) cout << ' ';
    }

    return 0;
}
