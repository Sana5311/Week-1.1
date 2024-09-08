#include<stdio.h>
int main(){
	int n,array[n],first,last,middle,search,i;
	printf("Enter the number of elements to be entered:");
	scanf("%d",&n);
	printf("Input the array element:\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("the element to be searched:");
	scanf("%d",&search);
	first=0;
	last=n-1;
	 middle = (first + last)/2;
    while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}
