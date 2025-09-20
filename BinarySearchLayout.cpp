// implementing the Binary Search for Even & Odd arrays .

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size , int key){

    int s = 0;
    int e = size-1 ;
     
     int mid =  s + (s - e)/2;
        
        while (s <= e ){

            if(arr[mid] == key ){
                return mid ;
            }
// go to right part 
            if(key > arr[mid]){
                s = mid + 1 ;
            }
// key < arr[mid]
            else{
                e = mid -1 ;
            }
            mid =s + ( s - e )/2;
        }
        return -1 ;
    }




int main()
{
    int even[6] ={ 3,5,7,9,12,15};
    int odd[5] = {1,3,5,7,8};

   int evenIndex = BinarySearch (even , 6 , 12);

   cout<< " Index of 4 is " << evenIndex << endl ;

   int oddIndex = BinarySearch ( odd , 5, 8 );

   cout<<" Index of 3 is " << oddIndex << endl ;
   
 
   return 0;
}