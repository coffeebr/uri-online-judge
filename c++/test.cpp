#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

bool cmp(int *vec, int size, int v)
{
    for(int a = 0; a < size; a++)
        if(vec[a] == v) return true;
    return false;
}

int* cvec(int size)
{
    int *vec = new int[size];
    int t;
    for(int a = 0; a < size; a++)
    {
        t = rand() % size;
        while(cmp(vec, a, t))t = rand() % size;
        vec[a] = t;
    }
    return vec;
}

int main()
{
    srand(time(NULL));
    int n;
    /*
    string str;
    int *vec;
    cin >> str >> n;
    int s = str.size();
    for(int a = 0;a < n; a++)
    {
        vec = cvec(s);
        for(int b = 0; b < (s - 1); b++) cout << str[vec[b]] << " ";
        cout << str[vec[s - 1]] << endl;
        delete vec;
    }*/
}