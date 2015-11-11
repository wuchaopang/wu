//
//  main.cpp
//  wu
//
//  Created by 20141105049 on 15/11/11.
//  Copyright © 2015年 20141105049. All rights reserved.
//

#include <iostream>
int main(int argc, const char * argv[])
{
    
    // insert code here...
    int *a;
    int N;
    int i,j,temp;
    scanf("%d",&N);
    a=(int *)malloc(N*4);
    if(a==0)
        exit(0);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%d\n",a[i]);
    free(a);
    return 0;
}
