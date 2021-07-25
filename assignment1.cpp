#include <fstream>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

//Note: Do not change any part of the existing code.
int main(int argc, char *argv[]) {
    std::vector<int> numVec;
    int nextNum;
    ifstream inFile;
    inFile.open(argv[1]);
    ofstream outfile;
    outfile.open("output");

    while(inFile >> nextNum){
       numVec.push_back(nextNum);
    }
    
    // Write your code to remove all occurences 3 contiguous numbers that add up to 0 from the vector numVec
    // Note that the output vector should not have any occurances where 3 contiguous numbers sum to 0
 int n = numVec.size();
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (numVec[i]+numVec[j]+numVec[k] != 0)
                {
                    cout << arr[i]<<endl;
                }
            }
        }
    }

   for(auto n:numVec) {
      outfile << n << endl; 
   }
}


