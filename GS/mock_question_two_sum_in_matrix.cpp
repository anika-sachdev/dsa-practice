    #include <iostream>
    #include <vector>
    #include <unordered_map>
    using namespace std;

    void two_sum_matrix(int m,int n,int arr[3][3],int target)
    {
        unordered_map<int, vector<int>> matrix;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                matrix[arr[i][j]]={i,j};
                
            }
        }
        for(auto p:matrix)
        {
            int comp=target-(p.first);
            if(matrix.find(comp)!=matrix.end())
            {
                cout<<p.second[0]<<" "<<p.second[1]<<endl;
                cout<<matrix[comp][0]<<" "<<matrix[comp][1];
                break;
            }
        }
    }
    int main()
    {
        int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        two_sum_matrix(3,3,arr,11);
    }