#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main (){
    clock_t begin; 
    clock_t end; 

    begin = clock(); 
    vector<double> vec1; 
    vec1.resize(65536 * 1024); 
    for (int i = 1; i < 65536 * 1024; i++) {
        vec1[i - 1] = i;
    }

    double sum1 = 0; 
    for (auto i : vec1)
        sum1 += i; 

    end = clock();
    cout << sum1 << endl;
    cout << "Time elapsed: " << end - begin << endl;
  
    begin = clock(); 
    vector<double> vec2; 
    vec2.resize(65536 * 1024); 
    for (int i = 1; i < 65536 * 1024; i++) {
        vec2[i - 1] = i;
    }

    double sum2 = 0; 
    for (auto i : vec2)
        sum2 += i; 

    end = clock();
    cout << sum2 << endl;
    cout << "Time elapsed: " << end - begin << endl;
   
    begin = clock(); 
    vector<double> vec3; 
    vec3.resize(65536 * 1024); 
    for (int i = 1; i < 65536 * 1024; i++) {
        vec3[i - 1] = i;
    }

    double sum3 = 0; 
    for (auto i : vec3)
        sum1 += i; 

    end = clock();
    cout << sum1 << endl;
    cout << "Time elapsed: " << end - begin << endl;
    cout << "hello world" << endl;
}
