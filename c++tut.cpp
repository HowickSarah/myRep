//how to fill/address spots in a mulitdim array
# include <iostream>

using namespace std;

int main () {
    //mulitdim array 
    int x = 3;
    int y = 5;
    int jimmy [x][y]; //same def as below
    int billy [x*y]; // x*y can literally mean x by y matrix
    int i; //matrix element x indicator
    int j; //matrix element y indicator

    for ((i=0);(i < x);(i++)) { // moves your input to the appropriate x spot
        cout << "now filling the"; 
        if (i==0) {
            cout << i + 1 << "st";
        }
        else if (i == 1 ){
            cout << i + 1 << "nd"; 
        }
        else if (i==2){
            cout << i + 1 << "rd"; 
        }
        else {
            cout << i+1 << "th";
        }
        cout << "row." << endl;
        for ((j=0); (j<y); (j++)){
            jimmy [i][j] = (i+1)*(j+1); // when declaring a matrix in a certain form (as jimmy [n][m] for example) you must contimue to refer to it in its appropriate format (so you can never refer to jimmy [n][m] as jimmy [n*m] after you have initialized it as jimmy [n][m])
            billy [i*j] = (i+1)*(j+1); //billy [n*m] must always be referred to as billy[n*m]
        }
    }

    //printing the arrays (starting with Jimmy's)
    i = 0; 
    j =0;

    for ((i=0);(i < x);(i++)) {
        for ((j=0); (j<y); (j++)) {
            cout << jimmy [i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //now to billy's 
    i=0;
    j=0;
    for ((i=0);(i < x);(i++)) {
       for ((j=0); (j<y); (j++)) {
        cout << billy [i*j] << " ";
       } 
       cout << endl;
    }

    //they should returnt the same thing
    return 0;

}