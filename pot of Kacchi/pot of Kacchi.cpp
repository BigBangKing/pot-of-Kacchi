// pot of Kacchi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Coded by Rifat.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t = 0;// <= 5

    //cout << "Enter the test cases:\n";
    cin >> t;

    if ( t>5)
    {
        cin >> t;
    }


    int pB[5], pM[5], pO[5], pG[5], pP[5]; // <= 1000
    int nB[5], nM[5], nO[5], nG[5], nP[5];// <= 100
    int P[5];// <= 10 ^ 12
    int S[5];// <= 5000

    int ekPotkacchiPrice[5];
    int ingredientsIhaveAsInCash[5];
    int totalMoneyIGotNow[5];
    int IcanMakeThisMuchKacchiWithMoneyIgot[5];
    int IcanProfit[5];


    for (int i = 0; i < t; i++)
    {

        //cout << "Enter the prices of the items:\n";
        //cout << "price of basmati rice:\n";
        cin >> pB[i];

        if (pB[i] > 1000)
        {
            cin >> pB[i];
        }

        //cout << "price of mutton :\n";
        cin >> pM[i];
        if (pM[i] > 1000)
        {
            cin >> pM[i];
        }
        //cout << "price of onion :\n";
        cin >> pO[i];
        if (pO[i] > 1000)
        {
            cin >> pO[i];
        }
        //cout << "price of ginger :\n";
        cin >> pG[i];
        if (pG[i] > 1000)
        {
            cin >> pG[i];
        }
        //cout << "price of potato :\n";
        cin >> pP[i];
        if (pP[i] > 1000)
        {
            cin >> pP[i];
        }

        //cout << "Enter quantity of items I already have:\n";
        
        cin >> nB[i];
        if (nB[i] > 100)
        {
            cin >> nB[i];
        }
        cin >> nM[i];
        if (nM[i] > 100)
        {
            cin >> nM[i];
        }
        cin >> nO[i];
        if (nO[i] > 100)
        {
            cin >> nO[i];
        }
        cin >> nG[i];
        if (nG[i] > 100)
        {
            cin >> nG[i];
        }
        cin >> nP[i];
        if (nP[i] > 100)
        {
            cin >> nP[i];
        }
        

        //cout << "Enter total money I have:\n";
        
        cin >> P[i];
        
        if (P[i] > pow(10, 12))
        {
            cin >> P[i];
        }
        
        //cout << "and then price at which I can sell each pot of Kacchi:\n";

        cin >> S[i];

        if (S[i] > 5000)
        {
            cin >> S[i];
        }

        //cout << "end of inputs.";


        ekPotkacchiPrice[i] = (5 * pB[i]) + (10 * pM[i]) + (1 * pO[i]) + (1 * pG[i]) + (3 * pP[i]);

        ingredientsIhaveAsInCash[i] = (nB[i] * pB[i]) + (nM[i] * pM[i]) + (nO[i] * pO[i]) + (nG[i] * pG[i]) + (nP[i] * pP[i]);

        totalMoneyIGotNow[i] = P[i] + ingredientsIhaveAsInCash[i];

        IcanMakeThisMuchKacchiWithMoneyIgot[i] = totalMoneyIGotNow[i] / ekPotkacchiPrice[i];

        IcanProfit[i] = IcanMakeThisMuchKacchiWithMoneyIgot[i] * S[i];
        

    }

    for (int i = 0; i < t; i++)
    {

        cout << IcanProfit[i]<<"\n";
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
