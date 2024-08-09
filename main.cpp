#include<iostream>
using namespace std;

int getMIN(int num[], int a) {

    int minim = INT_MAX;

    for(int i = 0; i<a; i++) {

        minim = min( minim, num[i]);
    }

    return minim;
}

int getMAX(int num[], int a) {

    int maxim = INT_MIN;

    for(int i = 0; i<a; i++) {

        maxim = max(maxim, num[i]);
    }
    return maxim;
}

    main()
    {
        int size;
        cin >> size;
        int num[100];
        for(int i = 0; i<size; i++) {
        cin >> num[i];
    }
    cout << " Maximum value is " << getMAX(num, size) << endl;
    cout << " Minimum value is " << getMIN(num, size) << endl;
}
