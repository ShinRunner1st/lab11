#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    ifstream source("score.txt");
    double mean, standarddiv;
    double sum, sum2, n;
    string textline;

    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        n++;
    }

    mean = sum/n;
    standarddiv = sqrt((sum2/n)-pow(mean,2));

    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << standarddiv << endl;

    source.close();
}