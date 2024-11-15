#include <iostream>
#include <stdio.h>
using namespace std;

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int n = 0;
    int p = 0;
    int q = 0;
    int v = 0;

    
    int a[20];
    for (int i = 0; i < 20; i++) {
        if (getchar() =='\n') break;
        cin >> a[i];
        n++;   
        p++;
    }

        int b[20];
    for (int i = 0; i < 20; i++) {
        if (getchar() =='\n') break;
        cin >> b[i];
        n++;
        q++;
    }

        int c[n];
    for (int i = 0; i < n; i++) {
        if (i < p){
        c[i]=a[i];
        } 
        else  {
        c[i]=b[i-p];
        }
    }
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (c[i] == c[j]&&i != j) {
                c[j] = 999;
                v++;
            }
        }
    }
    
    bubbleSort(c, n);
    
    for (int i = 0; i < n; i++) {
        if (c[i] == 999) continue;
        cout << c[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}