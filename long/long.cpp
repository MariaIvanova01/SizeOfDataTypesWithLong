#include <iostream>

using namespace std;

int main()
{
    int intType;
    long longType;
    double doubleType;
    long double longdoubleType;
    long long longlongType;

    cout << " intType = " << sizeof(intType) << endl;
    cout << " doubleType = " << sizeof(doubleType) << endl;
    cout << " longdoubleType = " << sizeof(longdoubleType) << endl;
    cout << " longType = " << sizeof(longType) << endl;
    cout << "longlongType = " << sizeof(longlongType) << endl;

    system("PAUSE");
    return 0;

}

