#include<iostream>
#include<stdlib.h>
int main(){
    system("cls");
    int i , j, sales;
    int sales[5][12];
    
    for(i=0; i<5; ++i)
    {total=0;
    cout<<"Enter sales for salesman"<< i+1<<":\n";
    for (j=0;j<12;j++)
    { cout<<"\nMonth"<<j+1<<":";
    cin>>sales[i][j];
    total= total+sales[i][j];
    }
    cout<<"\n";
    cout<<"Total sales of salesman"<<i+1<<"="<<total<<"\n";


    }
    return 0;
}