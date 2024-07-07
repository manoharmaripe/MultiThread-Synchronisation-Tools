#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <thread>
#include <atomic>
#include <time.h>
#include <sys/time.h>
using namespace std;

int com_variable = 0;
// atomic_flag lock = ATOMIC_FLAG_INIT;
int locker = 0;

void multiplychunk(vector<vector<int>> &matrix, vector<vector<int>> &finalmatrix, int n, int p)
{
    while (true)
    {
        while (__sync_val_compare_and_swap(&locker, 0, 1) != 0)
            ;
        if (com_variable >= n)
        {
            locker = 0;
            break;
        }
        /*CRITICAL SESSION*/
        int start = com_variable;
        com_variable = com_variable + p;
        locker = 0;
        /*REMAINDER SESSION*/
        int end = start + p;
        int l = end;
        if (l > n)
        {
            l = n;
        }
        for (int rowindex = start; rowindex < l; rowindex++)
        {
            vector<int> final;
            for (int i = 0; i < matrix[rowindex].size(); i++)
            {
                int result = 0;
                for (int j = 0; j < matrix[rowindex].size(); j++)
                {
                    result = result + matrix[rowindex][j] * matrix[j][i];
                }
                final.push_back(result);
            }
            finalmatrix[rowindex] = final;
        }
    }
}

int main()
{
    ifstream myfile("inp.txt");
    if (!myfile.is_open())
    {
        cout << "Error opening input file" << endl;
        return 1;
    }

    int n, k, p;
    myfile >> n;
    myfile >> k;
    myfile >> p;

    int mystring;
    vector<vector<int>> matrix;
    int rowiter = 0;
    int columniter = -1;
    vector<int> row;

    while (rowiter < n * n)
    {
        myfile >> mystring;
        row.push_back(mystring);
        rowiter++;
        columniter = rowiter % n;
        if (columniter == 0)
        {
            matrix.push_back(row);
            row.clear();
            columniter = -1;
        }
    }

    struct timeval day, time;
    gettimeofday(&day, NULL);

    vector<vector<int>> finalmatrix(n, vector<int>(n, 0));
    vector<thread> threads;
    for (int i = 0; i < k; i++)
    {
        threads.push_back(thread(multiplychunk, ref(matrix), ref(finalmatrix), n, p));
    }

    for (auto &threade : threads)
    {
        threade.join();
    }

    gettimeofday(&time, NULL);
    double timetaken = (time.tv_sec - day.tv_sec) + ((time.tv_usec - day.tv_usec) / 1000000.0);

    ofstream myout("out_cas.txt");
    if (!myout.is_open())
    {
        cerr << "Error opening the output file" << endl;
        return 1;
    }

    myout << "time: " << timetaken << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            myout << finalmatrix[i][j] << " ";
        }
        myout << endl;
    }
    return 0;
}

// clang++ -std=c++11 -pthread assign2.cpp