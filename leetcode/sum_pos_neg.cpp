#include <iostream>
#include <vector>
using namespace std;

pair<int,int> sumPositiveNegative(const vector<int>& arr){

    int posSum = 0;
    int negSum = 0;

    for(int num : arr){

        if(num > 0)
            posSum += num;

        else if(num < 0)
            negSum += num;
    }

    return {posSum, negSum};
}

int main(){

    vector<int> arr = {-1,2,3,-4,5};

    pair<int,int> result = sumPositiveNegative(arr);

    cout << "Positive Sum: " << result.first << endl;
    cout << "Negative Sum: " << result.second << endl;

}