#include<iostream>
using namespace std;

// Pattern : 1 
//  * * * * *
//  * * * * *
//  * * * * * 
//  * * * * * 
//  * * * * * 

class pattern1 {
    public:
    void solved()
    {
        cout<< "Pattern : 1" << endl; 
        for(int i = 0; i < 5 ; i++)
        {
            for(int j = 0; j < 5 ; j++)
            {
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
};


// Pattern : 2 
//  * * * * *
//  *       *
//  *       * 
//  *       * 
//  * * * * * 

class pattern2 {
    public:
    void solved()
    {
        cout<< "Pattern : 2" << endl; 
        for(int i = 0; i < 5 ; i++)
        {
            for(int j = 0; j < 5 ; j++)
            {
                if (i == 0 || i == 4 || j == 0 || j == 4)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
                
            }
            cout<<"\n";
        }
    }
};




int main()
{
    pattern1 p1;
    p1.solved();
    cout<<endl;

    pattern2 p2;
    p2.solved();
    cout<<endl;

    
    return 0;
}