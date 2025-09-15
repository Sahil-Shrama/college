#include <iostream>
using namespace std;

int size = 7;
int arr[100] = {12,13,77,2,3,9,14};

void menu ();
void insertion_sort();

void traverse(){
    insertion_sort();
cout<<"traversing the array "<<endl;

for(int i = 0; i<size;i++){
    cout<<"\t "<<arr[i];
}
cout<<endl;
menu();

}

void insertion_sort(){
    for(int i = 0;i<size;i++){
        for(int j= i+1;j>0;j--){

            if(arr[j]<arr[j-1]){
                if(arr[i]!= 0 && arr[j] !=0){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                }

            }
            else{
                break;
            }
        }
    }
}


void insert(){
    cout<<"at which position do you want to insert"<<endl;
   
    int pos;
    cin>>pos;
    pos = pos-1;
    cout<<"what do you want to insert "<<endl;
    int insert;
    cin>>insert;
     size++;
    for(int i = size ; i>=pos;i--){
     arr[size] = arr[size-1];
    }
    arr[pos]= insert;
menu();
}

void deletion(){
    cout<<"at which position do you want to delete "<<endl;
    size--;
    int pos;
    cin>>pos;
    pos = pos-1;
    for(int i = pos;i<size;i++){
        arr[i]= arr[i+1];
    }
    menu();
}

void linearSearch(){
    cout<<"enter the element you want to search "<<endl;
    int search;
    cin>>search;
    for(int i =0;i<size;i++){
        if(arr[i] == search){
            cout<<"element found at "<<i-1<<" index"<<endl;

        }
        else{
            cout<<"element not found in array "<<endl;
        }
    }

}


int binarySearch(){
    cout<<"sorting the array first "<<endl;
    insertion_sort();
    cout<<"enter which element you want to search "<<endl;
    int search ;
    cin>>search;
    int start = 0;
    int end = size-1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]<search){
            start = mid +1;
        }
        else if (arr[mid]>search)
        {
            end = mid-1;
        }
   
        else{
           return mid; 
        }


    }
    return -1;
    

}

void menu(){
    cout<<"MENU"<<endl;
    cout<<"1 traverse"<<endl;
    cout<<"2 insert"<<endl;
    cout<<"3 delete"<<endl;
    cout<<"4 lineae Search"<<endl;
    cout<<"5 Binary search"<<endl;
    cout<<"-1 for exit"<<endl;
    int val ;
    cout<<"please selecet a input "<<endl;
    cin>>val;

    switch (val)
    {
    case 1:
    traverse();

        break;
    case 2:
    insert();

        break;
    case 3:
        deletion();
        break;
    case 4:
           linearSearch();
        break;


    case 5:
    int val;
   val = binarySearch();
   cout<<val<<endl;
  menu();
    break;


    case -1:

       cout<<"closing the program";
        break;
    
    default:
        cout<<"invalid input ...";
        break;
    }
    
    

}



int main(){




menu();


return 0;
}




// todo 1:create a menu driven program
// Todo 2: