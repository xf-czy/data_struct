#include <iostream>
#include <string>

using namespace std;

void bubble_sort(int arr[],int size)
{
    if(nullptr == arr)
    {
        return;
    }

    
    for(int i = 0;i < size-1;i++)
    {
        for(int j = 0;j < size - 1 - i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main(int argc,char *argv[])
{
  int arr[] = {23,4,67,1,90,5,87};
  std::cout<<"sort before: "<<std::endl;
  for(const auto &item:arr)
  {
      std::cout<<item<<" ";
  }
  std::cout<<"\n";

  bubble_sort(arr,sizeof(arr) / sizeof(arr[0]));

  std::cout<<"sort after: "<<std::endl;
  for(const auto &item:arr)
  {
      std::cout<<item<<" ";
  }
  std::cout<<"\n";

  return 0;
}
