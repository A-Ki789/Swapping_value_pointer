#include <iostream>

using namespace std;
void swap(int* ptr1,int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout<< *ptr1<<endl<<*ptr2<<endl;

}
int main(){
    int num1 =1;
    int num2 =2;
    swap(&num1,&num2);
    return 0;
}