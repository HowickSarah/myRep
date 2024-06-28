//how to fill/address spots in a mulitdim array
# include <iostream>

using namespace std;

int main () {
    //mulitdim array 
    int x = 5;
    int y = 3;
    int jimmy [y][x]; //a true multidim array
    int billy [y*x]; // x*y can mean x by y matrix, but understand what you are actually doing is making a vector that is x*y indecies long (15)
    int i; //matrix element x indicator
    int j; //matrix element y indicator

    for ((j=0);(j < y);(j++)) { // moves your input to the appropriate y spot
        cout << "now filling the "; 
        if (j==0) {
            cout << j + 1 << "st";
        }
        else if (j == 1 ){
            cout << j + 1 << "nd"; 
        }
        else if (j==2){
            cout << j + 1 << "rd"; 
        }
        else {
            cout << j+1 << "th";
        }
        cout << " row." << endl; 
        for ((i=0); (i<x); (i++)){
            jimmy [j][i] = (i+1)*(j+1); // when declaring a matrix in a certain form (as jimmy [n][m] for example) you must contimue to refer to it in its appropriate format (so you can never refer to jimmy [n][m] as jimmy [n*m] after you have initialized it as jimmy [n][m])
            //cout << jimmy [i][j] << " ";
            billy [j*i] = (i+1)*(j+1); //billy [n*m] must always be referred to as billy[n*m]
            // cout << billy[j*i] << " "; //while in this moment, we can techinally say that we have filled the i*j'th spot in the matrix, we have really only rewritten whatever was in the i*jth spot with something new
        }
        cout << endl;
    }

    //these two arrays will not be the same --> you have made an array and a vector, or a single dim array with values only defined up to 8
    //cout << sizeof(billy)/sizeof(billy[0]) << endl;
    //cout << billy[10] << endl;

    //printing the arrays (starting with Jimmy's)
    i = 0; 
    j =0;

    for ((j=0);(j < y);(j++)) {
        for ((i=0); (i<x); (i++)) {
            cout << jimmy [j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    //now to billy's 
    i=0;
    j=0;
    for ((j=0);(j < y);(j++)) {
       for ((i=0); (i<x); (i++)) {
        cout << billy [j*i] << " "; //remember, we have rewritten these values, so they wont come out right
       } 
       cout << endl;
    }
    
    //they should returnt the same thing
    return 0;

}