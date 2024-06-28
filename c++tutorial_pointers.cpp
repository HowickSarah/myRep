/*
//pointer play
# include <iostream>

using namespace std;

int main () {
    int firstvalue = 5; 
    int secondvalue = 15; 
    int * p1;
    int * p2; 
    p1 = &firstvalue; // p1 = address of firstvalue
    p2 = &secondvalue; // p2 = address of secondvalue
    cout << p1 << " " << p2 << endl;
    *p1 = 10; // value pointed by p1 = 10
    if (firstvalue != 5) {
        cout <<"First value was changed to: " << firstvalue << endl;
    }
    *p2 = *p1; // value pointed by p2 = value pointed by p1
    if (secondvalue != 15){
        cout << "Seccond value has been changed to: " << secondvalue << endl;
    }
    p1 = p2; // p1 = p2 (value of pointer is copied)
    if (firstvalue == secondvalue) {
        cout << "The first and second values are the same" << endl;
    }
    else {
        cout << "the two values share the same memory, but retain their original values." << endl;
    }
    *p1 = 20; // value pointed by p1 = 20
    cout << "firstvalue is " << firstvalue << endl; 
    cout << "secondvalue is " << secondvalue << endl; 
    return 0;

} 
*/

//pointer play with arrays --> understanding the pointer nature of arrays
/*
# include <iostream>

using namespace std;

int main () {
    int numbers [5];
    cout << numbers << endl; //observe that numbers is a memory allocation value
    int * p; 
    p = numbers; //pointer p now points to the same memory spot as numbers[0]
    *p = 10; //10 now exists in the memory slot held by numbers[0] does
    cout << numbers[0] << endl; //numbers[0] and numbers[numbers] are not the same thing, eventhough numbers points to numbers[0]
    p++; // next slot over
    *p = 20; //20 now exists in the same memory slot as numbers[1] does
    cout << numbers[1] << endl;
    p = &numbers[2]; // pointer p will now point to the memory slot for numbers[2] -> next slot over
    *p = 30; //30 exists in memory slot for numbers[2]
    cout << *(numbers+2) << endl; // output the number deferenced by the memory slot two slots over from numbers, or cout << numbers[2]
    p = numbers + 3; //p points to the slot 3 slots over from numbers (numbers[3])
    *p = 40; // 40 exists in numbers[3]
    cout << numbers[3] << endl;
    p = numbers; //reinitialized
    *(p+4) = 50; //four slots down from p, which is numbers (p+4 points to memory slot for numbers[4]) there will exist 50
    cout << numbers[4] << endl;
    cout << *numbers << endl; //see line 18
    //small note about pointer arithmetic
    cout << *p++ << endl;
    //prints numbers[0] (the ++ does nothing), whereas 
    cout << *++p << endl;
    //prints numbers[1], or the deference number 4 bytes down from numbers (4 = amount of bytes for an int) 
    for (int n=0; n<5; n++) {
        cout << numbers[n] << ", ";
    }
    return 0;
} 
*/

//pointer arithmtic
/*
# include <iostream>

using namespace std;

void increase (void* data, int psize) // void pointer --> can be used to point towards any type
{ 
 if ( psize == sizeof(char) ) 
 { char* pchar; pchar=(char*)data; (++(*pchar)); } 
 else if (psize == sizeof(int) ) 
 { int* pint; pint=(int*)data; ++(*pint); } 
} 
int main () 
{ 
 char a = 'x'; 
 int b = 1602; 
 increase (&a,sizeof(a)); 
 increase (&b,sizeof(b)); 
 cout << a << ", " << b << endl;   
    return 0;
}
*/
//note --> null pointers != void pointers, null pointers point nowhere//pointer play with arrays --> understanding the pointer nature of arrays



//pointer play with arrays --> understanding the pointer nature of arrays
/*
# include <iostream>
# include <typeinfo>

using namespace std;

int addition (int a, int b) 
{ return (a+b); } 
int subtraction (int a, int b) 
{ return (a-b); } 
int operation (int x, int y, int(*functocall)(int,int)) 
{ 
 int g; 
 g = (*functocall)(x,y); 
 return (g); 
} 
int main () 
{ 
 int m,n; 
 int (*minus)(int,int) = subtraction;
 cout << (*minus) << " " << minus << endl; // ...now...I can't explain this one wit...but I feel iike I do not have to since doing it without pointers to funcitons gets the job done just fine...so just use that. 
 //understand tho, *minus and minus both pass to the operations function the same way. 
 int (*plus)(int, int) = addition; 
 cout << (*plus) << " " << plus << endl;
 m = operation (7, 5, plus); 
 n = operation (20, m, minus); 
 cout <<n << " " << m; 
 return 0; 
} 
*/
