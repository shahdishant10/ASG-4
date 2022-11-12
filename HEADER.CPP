#include"HEADER.h"


void save_output(vector<int> vec, string fname)  //Working of the function save_output.
{
    ofstream output_file;
    output_file.open(fname, ios_base::out);

    for(int i=0 ; i<vec.size() ; i++)
    {
        output_file<<vec[i]<<" ";
    }
    output_file.close();
}

vector<int> read_vector(string fname)  //Working of the function reaad_output.
{
    ifstream input_file;
    input_file.open(fname);

    vector<int> vec1;
    if(input_file)
    {
        double value;
        while(input_file >> value)
        {
            vec1.push_back(value);
        }
        return vec1;
    }
}

void swap(int& a, int& b)  //Working of the swap function.
{
   int tmp = a;
   a = b;
   b = tmp;
}

void ShakerSort_AscendingOrder(vector<int>& vec)   //Working of the function Shaker sort ascending order.
{
    int a,b,x;
    int n = vec.size();

    for(a = 0 ; a < n ; a++)
    {
        for(b = a+1 ; b < n ; b++)
        {
            if (vec[b] < vec[b-1])
                swap(vec[b], vec[b-1]);
        }
        n = n-1;

        for(x = n-1 ; x>a ; x--)
        {
            if (vec[x] < vec[x-1])
                swap(vec[x], vec[x-1]);
        }
    }
}

void ShakerSort_DescendingOrder(vector<int>& vec)  //Working of the function Shaker sort descending order.
{
    int a,b,x;
    int n = vec.size();

    for(a = 0 ; a < n ; a++)
    {
        for(b = a+1 ; b < n ; b++)
        {
            if (vec[b] > vec[b-1])
                swap(vec[b], vec[b-1]);
        }
        n = n-1;

        for(x = n-1 ; x > a ; x--)
        {
            if (vec[x] > vec[x-1])
                swap(vec[x], vec[x-1]);
        }
    }
}
